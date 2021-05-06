
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "produto.h"

typedef struct produto Produto;

void moduloProduto(void) {
	char opcao;
	do {
		opcao = menuProduto();
		switch(opcao) {
			case '1': 	cadastrarProduto();
						break;
			case '2': 	pesquisarProduto();
						break;
			case '3': 	atualizarProduto();
						break;
			case '4': 	excluirProduto();
						break;
		} 		
	} while (opcao != '0');
}

void cadastrarProduto(void) {
  Produto *prod;
	// função ainda em desenvolvimento
	
  // ler os dados do aluno com a função telaCadastrarAluno()
  prod = telaPreencherProduto();

  // gravar o registro no arquivo de alunos
  gravarProduto(prod);

  // liberar o espaço de memória da estrutura 
  free(prod);
}