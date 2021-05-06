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