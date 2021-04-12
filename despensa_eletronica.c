///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///                  Projeto Controle de Despensa Eletrônica                ///
///                Developed by  @biancamdros - Feb, 2021                   ///
///          Inspirado no repositorio linguasolta de flgorgonio             ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/// 
/// Assinaturas das funções
///
char menuPrincipal(void);
void telaSobre(void);
char menuFeira(void);
char menuConsumo(void);
char menuVencimento(void);


///
/// Programa Principal
///
int main(void) {
	char opcao;
    telaSobre();
    opcao = menuPrincipal();
    opcao = menuFeira();
    opcao = menuConsumo();
    opcao = menuVencimento();
    return 0;
}


void menuPrincipal(void) {
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
	printf("**            3. Modulo lista                                              **\n");
	printf("**            4. Modulo relatorio                                          **\n");
	printf("**            5. Informacoes sobre o sistema                               **\n");
	printf("**            0. Encerra o programa                                        **\n");
	printf("**                                                                         **\n");
	printf("**            Escolha a opcao desejada:                                    **\n");
	printf("**                                                                         **\n");
	printf("**                                                                         **\n");
	printf("*****************************************************************************\n");
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	return op;
}


void telaSobre(void) {
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


void menuFeira(void) {
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
	printf("**                 Developed by  @biancamdros - Feb, 2021                  **\n");
	printf("**                                                                         **\n");
	printf("*****************************************************************************\n");
	printf("**                                                                         **\n");
	printf("**            -----------------------------------------------              **\n");
	printf("**            |             Menu Cadastro de Feira          |              **\n");
	printf("**            -----------------------------------------------              **\n");
	printf("**                                                                         **\n");
	printf("**            1. Cadastrar item                                            **\n");
	printf("**            2. Renomear item                                             **\n");
	printf("**            3. Adicionar preço do item                                   **\n");
	printf("**            4. Excluir um item do sistema                                **\n");
	printf("**            0. Voltar ao menu anterior                                   **\n");
	printf("**                                                                         **\n");
	printf("**            Escolha a opção desejada:                                    **\n");
	printf("**                                                                         **\n");
	printf("**                                                                         **\n");
	printf("*****************************************************************************\n");
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	return op;
}


void menuConsumo(void) {
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
	printf("**                 Developed by  @biancamdros - Feb, 2021                  **\n");
	printf("**                                                                         **\n");
	printf("*****************************************************************************\n");
	printf("**                                                                         **\n");
	printf("**            -----------------------------------------------              **\n");
	printf("**            |                Menu Consumo                 |              **\n");
	printf("**            -----------------------------------------------              **\n");
	printf("**                                                                         **\n");
	printf("**            1. O que foi consumido?                                      **\n");
	printf("**            2. Houve sobra? Se sim, quanto?                              **\n");
	printf("**            3. Excluir consumo                                           **\n");
	printf("**            0. Voltar ao menu anterior                                   **\n");
	printf("**                                                                         **\n");
	printf("**            Escolha a opção desejada:                                    **\n");
	printf("**                                                                         **\n");
	printf("**                                                                         **\n");
	printf("*****************************************************************************\n");
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	return op;
}


void menuVencimento(void) {
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
	printf("**                 Developed by  @biancamdros - Feb, 2021                  **\n");
	printf("**                                                                         **\n");
	printf("*****************************************************************************\n");
	printf("**                                                                         **\n");
	printf("**            -----------------------------------------------              **\n");
	printf("**            |                Menu Validade                |              **\n");
	printf("**            -----------------------------------------------              **\n");
	printf("**                                                                         **\n");
	printf("**            1. Cadastrar validade do item                                **\n");
	printf("**            2. Listar itens próximos a vencer                            **\n");
	printf("**            3. Atualizar o validade de um item                           **\n");
	printf("**            4. Excluir uma validade do sistema                           **\n");
	printf("**            0. Voltar ao menu anterior                                   **\n");
	printf("**                                                                         **\n");
	printf("**            Escolha a opção desejada:                                    **\n");
	printf("**                                                                         **\n");
	printf("**                                                                         **\n");
	printf("*****************************************************************************\n");
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	return op;
}
char menuFeira(void){
	char cadastrar [50];
	char renomear [50];
	char preco [10];
	char escolha [1];

    system("clear");
	printf("\n");
	printf("*****************************************************************************\n");
	printf("**                                                                         **\n");
	printf("**           ***************************************************           **\n");
	printf("**           ---------------------------------------------------           **\n");
	printf("**          |                Despensa eletronica               |           **\n");
	printf("**           ---------------------------------------------------           **\n");
	printf("**           ***************************************************           **\n");
	printf("**                 Developed by  @biancamdros - Feb, 2021                  **\n");
	printf("**                                                                         **\n");
	printf("*****************************************************************************\n");
	printf("**                                                                         **\n");
	printf("**            -----------------------------------------------              **\n");
	printf("**            |             Módulo Cadastro de Feira        |              **\n");
	printf("**            -----------------------------------------------              **\n");
	printf("**                                                                         **\n");
	printf("**            1. Cadastrar item                                            **\n");
	printf("**            2. Renomear item                                             **\n");
	printf("**            3. Adicionar preço do item                                   **\n");
	printf("**            4. Excluir um item do sistema                                **\n");
	printf("**            0. Voltar ao menu anterior                                   **\n");
	printf("**                                                                         **\n");
	printf("**            Escolha a opção desejada:                                    **\n");
	printf("**            Cadastrando o item: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", cadastrar);
	getchar ();
	printf("**            Renomeando o item:");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", renomear);
	getchar();
	printf("**            Preco do item:");
	scanf("%[0-9]", preco);
	getchar();
	printf("**                                                                         **\n");
	printf("**                                                                         **\n");
	printf("*****************************************************************************\n");
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	return op;
}