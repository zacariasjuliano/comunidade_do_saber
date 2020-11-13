/*
Desenvolvedor: Comunidade Do Saber - Zacarias J Capingala
Programa: Simulador de atendete de pedidos
Data: 07 - 03 - 2018
*/

#include <iostream>

using namespace std;

int main ()
{
	double const HAMBURGER = 500.00;
	double const SANDESMISTA = 300.00;
	double const COBERTURA = 150.00;
	
	int pedidoHamburge = 0, pedidoSandes = 0, pedidoCoberturas = 0, pedidoCliente = 0;
	int pessoasMesa;
	double pedidoConta, pedidoContribuicao, totalConta;
	
	int gojertaGarcon;
	
	cout <<endl <<"INSIRA O NUMERO DE PESSOAS A MESA: ";
	cin >>pessoasMesa;
	for (int i = 1; i <= pessoasMesa; i++)
	{
		do {
			system ("cls");
			cout <<endl <<" MENU DA CANTINA - Anotando o Pedido da Pessoa >> " <<i;
			cout <<endl <<"1 - Hamburge              -> 500.00 Akz";
			cout <<endl <<"2 - Sandes Mista          -> 300.00 Akz";
			cout <<endl <<"3 - Cobertura de Queijo   -> 150.00 Akz";
			cout <<endl <<"4 - Cobertura de Presunto -> 150.00 Akz";
			cout <<endl <<"5 - Cobertura de Banana   -> 150.00 Akz";
			cout <<endl <<"6 - Sair do Menu !!!";
			cout <<endl <<"Pedido >> ";
			cin >>pedidoCliente;
			if (pedidoCliente == 1)
				pedidoHamburge++;
			if (pedidoCliente == 2)
				pedidoSandes++;
			if ((pedidoCliente == 3) || (pedidoCliente == 4) || (pedidoCliente == 5))
				pedidoCoberturas++;
		}while (pedidoCliente != 6);
	}
	
	pedidoConta = (HAMBURGER * pedidoHamburge) + (SANDESMISTA * pedidoSandes) + (COBERTURA * pedidoCoberturas);
	gojertaGarcon = (pedidoConta * 10) / 100;
	totalConta = pedidoConta + gojertaGarcon;
	pedidoContribuicao = totalConta / pessoasMesa;
	
	cout <<endl <<"A E CONTA DE: " <<pedidoConta <<" Akz" <<endl <<"MAIS OS 10%: " <<gojertaGarcon <<" Akz" <<endl <<"O TOTAL SERA DE: " <<totalConta <<" Akz" <<endl <<"CADA UM DEVERA CONTRIBUIR COM O VALOR DE: " <<pedidoContribuicao <<" Akz" <<endl;
	system("PAUSE");
	return 0;
}
