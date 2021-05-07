#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "valid.h"
#include "Struc.h"
#include "moduloFeira.h"
#include "moduloConsumo.h"


void moduloConsumo(void){
	char opcao;
	do{
    opcao = menuConsumo();
		switch (opcao)
		{

			case '1': ProdutoUsado();
						break;
			case '2':deletar();
						break;


		}

	}while(opcao!= '0');

}


void ProdutoUsado(void){
	Feira* pro;
	char* nom;

	nom = telabuscarPro();
	pro = pesquisarPro(nom);

	deletarP(pro);

	free(pro);
}




void deletar(void){
	Feira* pro;
	char* nom;

	nom = telabuscarPro();
	pro = pesquisarPro(nom);

	deletarProd(pro);

	free(pro);
}




char menuConsumo(void){
	limpaTela();
	char op;
	printf("\n");
	printf("*****************************************************************************\n");
	printf("**                                                                         **\n");
	printf("**           ***************************************************           **\n");
	printf("**           ---------------------------------------------------           **\n");
	printf("**          |                Despensa eletronica               |           **\n");
	printf("**           ---------------------------------------------------           **\n");
	printf("**           ***************************************************           **\n");
	printf("**                                                                         **\n");
	printf("**                 Developed by  @biancamdros - Feb, 2021                  **\n");
	printf("**                                                                         **\n");
	printf("*****************************************************************************\n");
	printf("**                                                                         **\n");
	printf("**            -----------------------------------------------              **\n");
	printf("**            |                Menu Consumo                 |              **\n");
	printf("**            -----------------------------------------------              **\n");
	printf("**                                                                         **\n");
	printf("**            1. Produtos usados                                           **\n");
	printf("**            5. Excluir consumo                                           **\n");
	printf("**            0. Sair                                                      **\n");
	printf("**                                                                         **\n");
	printf("**            Escolha a opção desejada: ");
	scanf("%c", &op);
	getchar();
	printf("**                                                                         **\n");
	printf("*****************************************************************************\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	return op;
}

char* telabuscarPro(void){
	char* nom;
	nom = (char*) malloc(sizeof(char));
	limpaTela();
	printf("\n");
	printf("*****************************************************************************\n");
	printf("**                                                                         **\n");
	printf("**           ***************************************************           **\n");
	printf("**           ---------------------------------------------------           **\n");
	printf("**          |                Despensa eletronica               |           **\n");
	printf("**           ---------------------------------------------------           **\n");
	printf("**           ***************************************************           **\n");
	printf("**                                                                         **\n");
	printf("**                 Developed by  @biancamdros - Feb, 2021                  **\n");
	printf("**                                                                         **\n");
	printf("*****************************************************************************\n");
	printf("**                                                                         **\n");
	printf("**            -----------------------------------------------              **\n");
	printf("**            |                Buscar Produto               |              **\n");
	printf("**            -----------------------------------------------              **\n");
	printf("**                                                                         **\n");
	printf("**            Nome do Produto: ");
	scanf("%20[^\n]",nom);
	getchar();
	printf("**                                                                         **\n");
	printf("*****************************************************************************\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	return nom;
}



void deletarProd(Feira* Pr) {
	FILE* fp;
	Feira* prod;
	char nomRecei[21];
	int achou = 0;

	if(Pr == NULL){
		printf("///                       Não existe este produto                         ///\n");
	}else{
		prod = (Feira*)  malloc(sizeof(Feira));
		fp = fopen("Produtos.dat","r+b");
		if(fp == NULL){
			printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    	printf("Não é possível continuar este programa...\n");
			exit(1);
		}
		while(!feof(fp)){
			fread(prod,sizeof(Feira),1,fp);
			if(strcmp(prod->prod,Pr->prod)==0 && (prod->status!='x')){
				achou = 1;
				prod->status = 'x';
				fseek(fp,-1*sizeof(Feira),SEEK_CUR);
				fwrite(prod, sizeof(Feira),1,fp);
				printf("\nProduto excluido com sucesso!\n");
				getchar();

			}
		}
		if(!achou){
			printf("\nnão encontrada!\n");
			getchar();
		}
		fclose(fp);
	} 

}
void deletarP(Feira* Pr) {
	FILE* fp;
	Feira* prod;
	char nomRecei[21];
	int achou = 0;

	if(Pr == NULL){
		printf("///                       Não existe este produto                         ///\n");
	}else{
		prod = (Feira*)  malloc(sizeof(Feira));
		fp = fopen("Produtos.dat","r+b");
		if(fp == NULL){
			printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    	printf("Não é possível continuar este programa...\n");
			exit(1);
		}
		while(!feof(fp)){
			fread(prod,sizeof(Feira),1,fp);
			if(strcmp(prod->prod,Pr->prod)==0 && (prod->status!='x')){
				achou = 1;
				prod->status = 'x';
				fseek(fp,-1*sizeof(Feira),SEEK_CUR);
				fwrite(prod, sizeof(Feira),1,fp);
				printf("\nProduto retirado\n");
				getchar();

			}
		}
		if(!achou){
			printf("\n não encontrada!\n");
			getchar();
		}
		fclose(fp);
	} 

}


Feira* pesquisarPro(char* nom){
	FILE* fp;
	Feira* nomPr;

	nomPr = (Feira*) malloc(sizeof(Feira));
	fp = fopen("Produtos.dat","rb");
	if(fp == NULL){
		printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
	}

	while(!feof(fp)){
		fread(nomPr,sizeof(Feira),1,fp);
		if(strcmp(nomPr->prod, nom) == 0 && (nomPr->status != 'x')){
			fclose(fp);
			return nomPr;
		}
	}

	fclose(fp);
	return NULL;
}



