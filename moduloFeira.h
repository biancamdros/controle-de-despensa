typedef struct feira Feira;
void moduloFeira();
char menuFeira (void);
Feira* TelacadasProd(void);
void cadastrarProduto(void);
void gravarPro(Feira* pro);
void exiberelatorioProduto(Feira* itm);

Feira* PesquisaProd(char* nom);
void RelSaida(Feira* itm);
void apagList(Feira**lista);