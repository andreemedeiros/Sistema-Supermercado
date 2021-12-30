#ifndef Cadastro_H
#define Cadastro_H

//Constante definida para limite de cadastros no sistema(Chave de acesso do cliente)
#define x 999


//Struct para Endere�o da pessoa
struct Dados
{
	//Dados da pessoa
	string usuario;
	string nome;
	string cpf;
	//Endere�o da pessoa
	string cep;
	string rua;
	string bairro;
	int numero;
	string complemento;
};

class Cadastro
{
	//Auxiliar para numero da pessoa no cadastro
	int chaveCliente;
	//Enrede�o da pessoa
	Dados end[x];
public:
	//Construtor default vazio
	Cadastro();
	void setChaveCliente(int);
	//M�todo para Cadastrar os dados
	void cadastrar(string, string, string, string, string, int, string, string);
	//M�todo imprime dados da pessoa e seu endere�o
	void imprime(int)const;
	//M�todo verifica se usu�rio ta cadastrado
	string verifica(int);
	

};
#endif