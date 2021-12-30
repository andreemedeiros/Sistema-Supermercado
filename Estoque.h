#ifndef ESTOQUE_H
#define ESTOQUE_H

//Constante definida para limite de produtos no estoque
#define x 100 

//struct para produtos
struct produtos{
	string nome;
    int quantidade;
    float valor;
};

//Classe base
//Fornece um estoque de produtos(nome, codigo, quantidade e valor)
class Estoque
{
	int teste;
	
protected:
	//Faturamento
	float faturamento;
	//Codigo do produto na prateleira
	int codigo;
	//Lista de produtos
	produtos prod[x];
	
public:
	//Construtor default. Inicializa todo o estoque padr�o
	Estoque();
	
	//M�todos para atribuir e receber faturamento
	void setFaturamento(float);
	float getFaturamento(void);
	
	//M�todos para atribuir e receber c�digo
	void setCodigo(int);
	int getCodigo(void);
	
	//M�todos para receber nome
	string getNome(int);
	//M�todos para receber e atribuir quantidade
	void setQuantidade(int,int);
	int getQuantidade(int);
	//M�todo para receber valor;
	float getValor(int);
	
	//M�todo que Cadastra produto(nome, quantidade e valor)
	void setCadastrar(string, float, int);
	//M�todo que imprime a lista de produtos em estoque
	void imprime();
};

#endif
