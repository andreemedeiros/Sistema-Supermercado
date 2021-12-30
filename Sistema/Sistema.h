#ifndef SISTEMA_H
#define SISTEMA_H

//Classe derivada de Estoque
//Fornece um sistema de caixa para controle de vendas(Caixa)

#define x 100 

struct notaFiscal
{
	string nome;
	int quantidade;
	float valor;
};

class Sistema : public Estoque
{
	notaFiscal lista[100];
	float valorCompra;

public:
	//Construtor default
	Sistema();

	//M�todo Imprime Lista de produtos no estoque
	void imprimeListaProdutos(Estoque);

	//M�todo para gerar nota fiscal
	void gerarNota(Estoque, int,int);

	//M�todo para imprimir Nota fiscal
	void imprimeNota();
	
};
#endif
