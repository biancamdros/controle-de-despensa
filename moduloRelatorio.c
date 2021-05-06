#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "moduloConsumo.h"
#include "moduloFeira.h"
#include "moduloRelatorio.h"
#include "valid.h"
#include "Struc.h"

void moduloRelatorios(void){
	char opcao;
	do{
		opcao = menuRelatorio();
		switch (opcao)
		{
			case '1': RelaProdutos();

				break;

			case '2':RelatorioSaida();
				        
				break;
		}
	}while(opcao!='0');
}

char menuRelatorio(void){
	limpaTela();
	char op;
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =         Despensa eletronica         = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @Bianca - Jan, 2021                      ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = =          Relatorios         = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Relatorio de estoque de despensa                         ///\n");
	printf("///           2. Relatorio data de validade                               ///\n");
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



void RelaProdutos(void){
	FILE *fp;
  Feira* itm;
	limpaTela();
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =         Despensa eletronica         = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @Bianca - Jan, 2021                      ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = =     Estoque de despensa     = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");

	itm = (Feira*) malloc(sizeof(Feira));
    fp = fopen("Produtos.dat", "rb");

    if (fp == NULL) {
        printf("ERRO");
    }else{
        while(fread(itm, sizeof(Feira), 1, fp)) {
            if(strcmp(&itm->status,"x") != 0){
                 RelSaida(itm);
            }
        }
        printf("\n");
        printf("////////////////////////////////////////////////////////////////////////////////////\n\n");
        printf("\t\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
    }
    fclose(fp);
}

void RelatorioSaida(void){
	FILE* fp;
	Feira* itm;
		limpaTela();
		printf("\n");
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("///                                                                       ///\n");
		printf("///          ===================================================          ///\n");
		printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
		printf("///          = = = =         Despensa eletronica         = = = =          ///\n");
		printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
		printf("///          ===================================================          ///\n");
		printf("///                Developed by  @Bianca - Jan, 2021                      ///\n");
		printf("///                                                                       ///\n");
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("///                                                                       ///\n");
		printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
		printf("///           = = = = =    Validade dos produtos     = = = = =            ///\n");
		printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
		printf("///                                                                       ///\n");
		printf("///                                                                       ///\n");
		printf("///-----------------------------------------------------------------------///\n");	
		itm = (Feira*) malloc(sizeof(Feira));
    fp = fopen("Produtos.dat", "rb");

    if (fp == NULL) {
        printf("ERRO");
    }else{
        while(fread(itm, sizeof(Feira), 1, fp)) {
            if(strcmp(&itm->status,"x") != 0){
							exiberelatorioProduto(itm);
               
            }
        }
        printf("\n");
        printf("///////////////////////////////////////////////////////////////////////////////\n");
        printf("\t\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
    }
    fclose(fp);
}

void exiberelatorioProduto(Feira* itm){
  	printf("/// # Nome:%s                                                             ///\n",itm->prod);
		printf("/// # Data de validade: %02d/%02d/%d                                      ///\n",itm->dia,itm->mes,itm->ano);
		printf("----------------------------------------------------------------------------///\n");
}

void RelSaida(Feira* itm){
  	printf("/// # Nome:%s                                                             ///\n",itm->prod);
		printf("----------------------------------------------------------------------------///\n");
}





void apagList(Feira**lista){
    Feira *itm;
    
    while (*lista != NULL){
   	    itm = *lista;
        *lista = (*lista)->prox;
        free(itm);
    }   
}

