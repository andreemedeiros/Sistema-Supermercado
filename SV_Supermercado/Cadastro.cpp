#include "Cadastro.h"

//Construtor default vazio
Cadastro::Cadastro(){
	for(int i=0;i<100;i++){
	end[i].cpf = "cpf";
	end[i].nome = "nome";
	end[i].usuario = "usuario";
	end[i].cep = "cep";
	end[i].rua = "rua";
	end[i].bairro = "bairro";
	end[i].numero = 0;
	end[i].complemento = "complemento";
	}
}


void Cadastro::setChaveCliente(int chaveCliente)
{
	this->chaveCliente = chaveCliente;
}

//M�todo para Cadastrar os dados
void Cadastro::cadastrar(string cpf, string nome , string cep, string rua, string bairro, int numero, string complemento , string usuario)
{
	end[chaveCliente].usuario = usuario;
	end[chaveCliente].cpf = cpf;
	end[chaveCliente].nome = nome;
	end[chaveCliente].cep = cep;
	end[chaveCliente].rua = rua;
	end[chaveCliente].bairro = bairro;
	end[chaveCliente].numero = numero;
	end[chaveCliente].complemento = complemento;
}

//M�todo Imprime dados da pessoa e seu endere�o
void Cadastro::imprime(int chaveCliente)const
{
	cout << "Cadastro concluido com sucesso! " << endl << endl
		 << "Usuario: " << end[chaveCliente].usuario << endl
		 << "Chave de acesso: " << chaveCliente <<endl << endl
		 << "Dados: " << endl
		 << "CPF: " << end[chaveCliente].cpf << endl
		 << "Nome: " << end[chaveCliente].nome << endl
		 << "CEP: " << end[chaveCliente].cep << endl
		 << "RUA: " << end[chaveCliente].rua << endl
		 << "BAIRRO: " << end[chaveCliente].bairro << endl
		 << "NUMERO: " << end[chaveCliente].numero << endl
		 << "COMPLEMENTO: " << end[chaveCliente].complemento << endl << endl;
}

//M�todo verifica se usu�rio ta cadastrado
string Cadastro::verifica(int ch){
	return end[ch].usuario;
}