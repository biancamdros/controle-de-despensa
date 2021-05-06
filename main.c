#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "moduloConsumo.h"
#include "moduloFeira.h"
#include "moduloRelatorio.h"
#include "valid.h"

char menuPrincipal(void);
void fimProg(void);
void telaSobre(void);
typedef struct feira Feira;
struct feira {
	char resp;
  char preco;
	char prod [51];
	char codBa[14];
	int dia;
	int mes;
	int ano;
	char status;
};

int main(void) {
	char opcao;
	Feira* feira;
	feira = (Feira*) malloc(sizeof(Feira));
	do{
		opcao = menuPrincipal();
		switch (opcao)
		{
		case '1':moduloFeira();
						 
			break;
		
		case '2':moduloConsumo();
					
			break;

		case '3':moduloRelatorios();
			break;

		case '4':telaSobre();
			break;
	
		}
  }while(opcao != '0');
  free(feira);
	free(feira);
	;return 0;
}

char menuPrincipal(void){
	char op;
  system("clear");
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
	printf("**            |                Menu Principal               |              **\n");
	printf("**            -----------------------------------------------              **\n");
	printf("**                                                                         **\n");
	printf("**            1. Modulo cadastro de feira                                  **\n");
	printf("**            2. Modulo consumo                                            **\n");
	printf("**            3. Modulo relatorio                                          **\n");
	printf("**            4. Informacoes sobre o sistema                               **\n");
	printf("**            0. Encerra o programa                                        **\n");
	printf("**                                                                         **\n");
	printf("**            Escolha a opcao desejada:                                    **\n");
  scanf("%c",&op);
  getchar();
	printf("**                                                                         **\n");
	printf("**                                                                         **\n");
	printf("*****************************************************************************\n");
	printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	return op;
}

	
// descrição do progama
void telaSobre(void){
    system("clear");
	printf("\n");
	printf("*****************************************************************************\n");
	printf("**                                                                         **\n");
	printf("**               Universidade Federal do Rio Grande do Norte               **\n");
	printf("**                   Centro de Ensino Superior do Seridó                   **\n");
	printf("**                 Departamento de Computação e Tecnologia                 **\n");
	printf("**                    Disciplina DCT1106 -- Programação                    **\n");
	printf("**                    Projeto Controle de despensa eletronica              **\n");
	printf("**                  Developed by  @biancamdros - Feb, 2021                 **\n");
	printf("**                                                                         **\n");
	printf("*****************************************************************************\n");
	printf("**                                                                         **\n");
	printf("**           ***************************************************           **\n");
	printf("**           ---------------------------------------------------           **\n");
	printf("**           |                Despensa eletronica              |           **\n");
	printf("**           ---------------------------------------------------           **\n");
	printf("**           ***************************************************           **\n");
	printf("**                                                                         **\n");
	printf("** 		Este programa foi pensado e desenvolvido por @biancamdros, na      **\n");
	printf("**    disciplina de programacao, para facilitar a vida das pessoas em      **\n");
	printf("**    suas casas, objetivando minimizar os desperdicios e aprimorar suas   **\n");
	printf("**    listas de compras, otimizando o tempo do usuario dando relatorios    **\n");
	printf("**    completos exibindo o que se tem na despensa de casa. Inspirado no    **\n");
	printf("**    repositório 'linguasolta' de @flgorgonio.                            **\n");
	printf("**                                                                         **\n");
	printf("*****************************************************************************\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void fimProg(void){
	limpaTela();
	printf("*****************************************************************************\n");
	printf("**                                                                         **\n");	printf("**           ***************************************************           **\n");
	printf("**           ---------------------------------------------------           **\n");
	printf("**           |                Fim do programa                  |           **\n");
	printf("**           ---------------------------------------------------           **\n");
	printf("**           ***************************************************           **\n");
	printf("**                                                                         **\n");
	printf("**                 Developed by  @biancamdros - Feb, 2021                  **\n");
	printf("**                                                                         **\n");
	printf("*****************************************************************************\n");	getchar();
}

