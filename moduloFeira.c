#include <stdio.h>
#include <stdlib.h>
#include "moduloFeira.h"
#include "moduloRelatorio.h"
#include "valid.h"
#include "string.h"


typedef struct feira Feira;
struct feira {
	char resp;
	char prod [51];
	char codBa[14];
	int dia;
	int mes;
	int ano;
	char status;
	struct feira* prox;
};



void moduloFeira(){
	char opcao;
	Feira* lista;
	lista = NULL;
	do{
		opcao = menuFeira();
		switch (opcao)
		{
			case '1':cadastrarProduto();
						break;
		
			case '2':RelaProdutos();
						break;

			case '3': RelatorioSaida();
			
						break;
		}
	}while(opcao!='0');
}


void cadastrarProduto(void){
	Feira* prod;
	
	prod = TelacadasProd();

	gravarPro(prod);

	free(prod);
}


char menuFeira(void) {
	limpaTela();
	char op;
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =        Despensa eletronica          = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @Bianca - Jan, 2021                      ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = =        	Menu Feira          = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Cadastrar produto                                        ///\n");
	printf("///           0. Sair                                                     ///\n");
	printf("///                                                                       ///\n");
	printf("///           Escolha a opção desejada: ");
	scanf("%c", &op);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n"); 
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	return op;
}

Feira* TelacadasProd(void){
	Feira* prod;
	int dataValida;
	float valPre;
	prod = (Feira*) malloc(sizeof(Feira));
	limpaTela();
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =            Despensa eletronica      = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @Bianca - Jan, 2021                      ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = =      Cadastrar Item         = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///             Nome do Produto: ");
	scanf("%20[^\n]", prod->prod);
	getchar();

	while (!validaNome(prod->prod)){
		printf("///             Nome do produto: Invalido                                  ///\n");	
		printf("///             Nome do produto: ");
		scanf("%20[^\n]", prod->prod);
		getchar();
	}
	printf("///             Data de Validade: \n");
	printf("///             Dia: ");
	scanf("%d", &prod->dia);
	getchar();
	printf("///             Mês: ");
	scanf("%d", &prod->mes);
	getchar();
	printf("///             Ano: ");
	scanf("%d", &prod->ano);
	getchar();
	dataValida = validacao (prod->dia,prod->mes,prod->ano);
	
	while(!dataValida){
		
		printf("///             Data de Validade: invalido                                ///\n");	
		printf("///             Dia: ");
		scanf("%d",  &prod->dia);
		getchar();
		printf("///             Mês: ");
		scanf("%d",&prod->mes);
		getchar();
		printf("///             Ano: ");
		scanf("%d", &prod->ano);
		getchar();
		prod->dia = (int)prod->dia ;prod->mes=(int)prod->mes; prod->ano = (int)prod->ano;
		dataValida = validacao (prod->dia,prod->mes,prod->ano);
	}
	
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();

	return prod;
}

//===============================================================================================================================================================================================================================================================================================================================================================================================///

void gravarPro(Feira* pro){
	FILE* fp;
	fp = fopen("Produtos.dat","ab");
	if(fp == NULL){
		printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
		exit(1);
	}

	fwrite(pro, sizeof(Feira),1,fp);
	fclose(fp);
}


Feira* PesquisaProd(char* nom){
	FILE* fp;
	Feira* nompro;

	nompro = (Feira*) malloc(sizeof(Feira));
	fp = fopen("Produtos.dat","rb");
	if(fp == NULL){
		printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
	}
	while(!feof(fp)){
		fread(nompro,sizeof(Feira),1,fp);
		if(strcmp(nompro->prod,nom) == 0){
			fclose(fp);
			return nompro;
		}
	}
	fclose(fp);
	return NULL;
}
