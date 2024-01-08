#include <iostream>
#include <string.h>
#include <vector>
#include <string>
#include <conio.h>
#include <random>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <Windows.h>
#include <locale>
#include <cmath>

using namespace std;

//ANOTACOES
//ID GERENTE = 501
// PASSWORD GERENTE = gerente

void definirCorConsole(int codigoCor)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, codigoCor);
}

int main()
{
	bool adicionarStock = false;
	bool produtoStock = false;
	bool produtoEncontrado = false;
	bool qtdStockVenda = false;
	bool qtdEliminarStock = false;

	//stock definitivo

	int tamanho = 100;

	//inicializar matriz
	string** stock = new string * [tamanho];

	for (int i = 0; i < 100; i++) {
		stock[i] = new string[5];
	}

	//id

	stock[0][0] = "1001";
	stock[1][0] = "1002";
	stock[2][0] = "1003";
	stock[3][0] = "1004";
	stock[4][0] = "1005";
	stock[5][0] = "1006";
	stock[6][0] = "1007";
	stock[7][0] = "1008";
	stock[8][0] = "1009";
	stock[9][0] = "1010";
	stock[10][0] = "1011";
	stock[11][0] = "1012";
	stock[12][0] = "1013";
	stock[13][0] = "1014";
	stock[14][0] = "1015";
	stock[15][0] = "1016";
	stock[16][0] = "1017";

	//NOME

	stock[0][1] = "AIR JORDAN 4 UNC";
	stock[1][1] = "AIR JORDAN 4 BLACK CAT";
	stock[2][1] = "AIR JORDAN 1 TAXI";
	stock[3][1] = "AIR JORDAN 1 CHICAGO";
	stock[4][1] = "DUNK LOW COURT PURPLE";
	stock[5][1] = "DUNK LOW PANDA";
	stock[6][1] = "TN 1 DEADPOOL";
	stock[7][1] = "TN 3 ALL BLACK";
	stock[8][1] = "TN 25TH ANIVERSARIO";
	stock[9][1] = "TN SUPREME WHITE";
	stock[10][1] = "AIR MAX 90 ALL BLACK";
	stock[11][1] = "AIR MAX 90 ALL BLACK";
	stock[12][1] = "SHOX SUPREME BLACK";
	stock[13][1] = "SHOX SUPREME RED";
	stock[14][1] = "CASACO STONE ISLAND";
	stock[15][1] = "CALCAS CARHARTT BLACK";
	stock[16][1] = "CALCAS STONE ISLAND";

	//QUANTIDADE

	stock[0][2] = "5";
	stock[1][2] = "5";
	stock[2][2] = "5";
	stock[3][2] = "5";
	stock[4][2] = "5";
	stock[5][2] = "5";
	stock[6][2] = "5";
	stock[7][2] = "10";
	stock[8][2] = "3";
	stock[9][2] = "3";
	stock[10][2] = "10";
	stock[11][2] = "10";
	stock[12][2] = "2";
	stock[13][2] = "2";
	stock[14][2] = "2";
	stock[15][2] = "5";
	stock[16][2] = "2";


	stock[0][3] = "40-44";
	stock[1][3] = "40-44";
	stock[2][3] = "40-43";
	stock[3][3] = "41/43";
	stock[4][3] = "40-45";
	stock[5][3] = "36-45";
	stock[6][3] = "39-43";
	stock[7][3] = "36-44";
	stock[8][3] = "40-43";
	stock[9][3] = "41/43";
	stock[10][3] = "36-45";
	stock[11][3] = "36-45";
	stock[12][3] = "41/44";
	stock[13][3] = "42/45";
	stock[14][3] = "28-40";
	stock[15][3] = "28-40";
	stock[16][3] = "28-40";
	//custo

	stock[0][4] = "300";
	stock[1][4] = "500";
	stock[2][4] = "350";
	stock[3][4] = "800";
	stock[4][4] = "400";
	stock[5][4] = "290";
	stock[6][4] = "200";
	stock[7][4] = "200";
	stock[8][4] = "250";
	stock[9][4] = "900";
	stock[10][4] = "150";
	stock[11][4] = "150";
	stock[12][4] = "450";
	stock[13][4] = "500";
	stock[14][4] = "300";
	stock[15][4] = "90";
	stock[16][4] = "170";
	//resto das linhas

	for (int i = 17; i < 100; i++) {
		stock[i][0] = "nd";
		//nd=nao definido
	}

	int opcao = -1;

	do {

		system("cls");
		cout << endl;
		definirCorConsole(14);
		cout << "\n  mmmmm  mmmmm m    m     m    m mmmmm mm   m mmmm    mmmm";
		cout << "\n  #    # #     ##  ##     'm  m'   #   #'m  # #   'm m'  'm";
		cout << "\n  #mmmm' #mmmm # ## #      #  #    #   # #m # #    # #    #";
		cout << "\n  #    # #     # '' #      'mm'    #   #  # # #    # #    #";
		cout << "\n  #mmmm' #mmmm #    #       ##   mmmmm #   ## #mmm'   #mm#";
		definirCorConsole(7);
		cout << endl;

		definirCorConsole(15);
		//gerentes ou cliente

		/*int cargo;*/
		cout << endl;
		cout << "\n  |-----------------------------|";
		cout << "\n  | ";

		definirCorConsole(3);
		cout << "1 ";
		definirCorConsole(15);

		cout << "--> ATUALIZAR STOCK       | ";
		cout << "\n  | ";

		definirCorConsole(3);
		cout << "2 ";
		definirCorConsole(15);

		cout << "--> EFETUAR COMPRA        | ";
		cout << "\n  | ";

		definirCorConsole(3);
		cout << "3 ";

		definirCorConsole(15);

		cout << "--> VER STOCK             |";
		cout << "\n  | ";


		definirCorConsole(3);
		cout << "0 ";
		definirCorConsole(15);

		cout << "--> SAIR                  |";
		cout << "\n  |-----------------------------|" << endl;
		cout << endl << "   OPCAO: ";
		cin >> opcao;

		//login gerente

		int nomeGerente;
		string passwordGerente;

		switch (opcao) {

		case 3:
			system("cls");

			//Imprimir dados do stock

			cout << endl << endl;
			definirCorConsole(14);
			cout << "\t\t\t\t   ARTIGOS QUE TEMOS EM STOCK" << endl;
			definirCorConsole(15);
			cout << endl << "  ---------------------------------------------------------------------------------------------";

			definirCorConsole(3);
			cout << endl << setw(5) << "ID";
			definirCorConsole(15);

			definirCorConsole(3);
			cout << setw(25) << "NOME";
			definirCorConsole(15);

			definirCorConsole(3);
			cout << setw(16) << "\t\tQUANTIDADE";
			definirCorConsole(15);

			definirCorConsole(3);
			cout << setw(17) << "TAMANHOS";
			definirCorConsole(15);

			definirCorConsole(3);
			cout << setw(19) << "PRECO CUSTO" << endl;
			definirCorConsole(15);
			cout << endl;

			for (int i = 0; i < 100; i++) {
				if (stock[i][0] != "nd") {
					cout << "  " << setw(5) << stock[i][0];
					cout << setw(30) << stock[i][1];
					cout << setw(16) << stock[i][2];
					cout << setw(20) << stock[i][3];
					cout << setw(17) << stock[i][4] << endl;
				}
			}
			cout << "  ---------------------------------------------------------------------------------------------";
			cout << endl;
			Sleep(7777);
			break;

		case 1:
			system("cls");

			//LOGIN

			cout << endl;
			definirCorConsole(14);
			cout << "\n  m      mmmm    mmm  mmmmm  mm   m";
			cout << "\n  #     m'  'm m'   '   #    #'m  #";
			cout << "\n  #     #    # #   mm   #    # #m #";
			cout << "\n  #     #    # #    #   #    #  # #";
			cout << "\n  #mmmm  #mm#   'mmm' mm#mm  #   ##";
			cout << endl;
			definirCorConsole(15);

			cout << endl << "\n  INSIRA O SEU ID: ";
			cin >> nomeGerente;

			if (nomeGerente == 501) {

				cout << "  DIGITE A PASSWORD: ";
				char ch;
				while ((ch = _getch()) != 13) {  // 13 é o código ASCII para Enter
					if (ch == '\b' && !passwordGerente.empty()) {
						cout << "\b \b";  // Apaga o último caractere digitado
						passwordGerente.pop_back();
					}
					else if (ch != '\b') {
						cout << '*';
						passwordGerente.push_back(ch);
					}
				}

				if (passwordGerente == "gerente") {
					//avanca para o proximo
					cout << endl;
					definirCorConsole(10);
					cout << "\n  [ACESSO PERMITIDO]";
					definirCorConsole(15);
					Sleep(1000);
				}

				else {

					definirCorConsole(12);
					cout << "\n  [PASSWORD INCORRETA]";
					definirCorConsole(15);

					while (passwordGerente != "gerente") {

						passwordGerente.clear(); // Limpa a senha anterior

						cout << "\n  DIGITE A PASSWORD: ";
						char ch;

						while ((ch = _getch()) != 13) {  // 13 é o código ASCII para Enter

							if (ch == '\b' && !passwordGerente.empty()) {
								cout << "\b \b";  // Apaga o último caractere digitado
								passwordGerente.pop_back();
							}
							else if (ch != '\b') {
								cout << '*';
								passwordGerente.push_back(ch);
							}
						}

						if (passwordGerente != "gerente") {

							definirCorConsole(12);
							cout << "\n  [PASSWORD INCORRETA]";
							definirCorConsole(15);
						}
					}
					cout << endl;
					definirCorConsole(10);
					cout << "\n  [ACESSO PERMITIDO]";
					definirCorConsole(15);
					Sleep(1000);
				}
			}
			else {
				definirCorConsole(12);
				cout << "\n  [ERRO: ID INCORRETO]";
				definirCorConsole(15);

				while (nomeGerente != 501) {
					cout << endl << "\n  INSIRA O SEU ID: ";
					cin >> nomeGerente;

					if (nomeGerente != 501) {

						definirCorConsole(12);
						cout << "\n  [ERRO: ID INCORRETO]";
						definirCorConsole(15);
					}
				}

				cout << "\n  DIGITE A PASSWORD: ";
				char ch;
				while ((ch = _getch()) != 13) {  // 13 é o código ASCII para Enter
					if (ch == '\b' && !passwordGerente.empty()) {
						cout << "\b \b";  // Apaga o último caractere digitado
						passwordGerente.pop_back();
					}
					else if (ch != '\b') {
						cout << '*';
						passwordGerente.push_back(ch);
					}
				}
				if (passwordGerente == "gerente") {
					//avanca para o proximo
					cout << endl;
					definirCorConsole(10);
					cout << "\n  [ACESSO PERMITIDO]";
					definirCorConsole(15);
					Sleep(1000);
				}
				else {

					definirCorConsole(12);
					cout << "\n  [PASSWORD INCORRETA]";
					definirCorConsole(15);

					while (passwordGerente != "gerente") {

						passwordGerente.clear(); // Limpa a senha anterior

						cout << "\n  DIGITE A PASSWORD: ";
						char ch;
						while ((ch = _getch()) != 13) {  // 13 é o código ASCII para Enter
							if (ch == '\b' && !passwordGerente.empty()) {
								cout << "\b \b";  // Apaga o último caractere digitado
								passwordGerente.pop_back();
							}
							else if (ch != '\b') {
								cout << '*';
								passwordGerente.push_back(ch);
							}
						}
						if (passwordGerente != "gerente") {

							definirCorConsole(12);
							cout << "\n  [PASSWORD INCORRETA]";
							definirCorConsole(15);
						}
					}
					cout << endl;
					definirCorConsole(10);
					cout << "\n  [ACESSO PERMITIDO]";
					definirCorConsole(15);
					Sleep(1000);
				}
			}
			cout << endl;

			//Menu do Gerente

			int cargo;

			do {
				
					system("cls");
				

			//Adicionar e eliminar produtos do stock

			cout << endl;

			definirCorConsole(14);
			cout << "\n   mmmm mmmmm  mmmm    mmm  m    m";
			cout << "\n  #'   '  #   m'  'm m'  '  #  m'";
			cout << "\n  '#mmm   #   #    # #      #m#";
			cout << "\n      '#  #   #    # #      #  #m";
			cout << "\n  'mmm#'  #    #mm#   'mmm' #   'm";
			cout << endl;
			definirCorConsole(15);

			cout << endl;
			cout << "\n  |-----------------------------|";
			cout << "\n  | ";

			definirCorConsole(3);
			cout << "1 ";
			definirCorConsole(15);

			cout << "--> ADICIONAR STOCK       |";
			cout << "\n  | ";

			definirCorConsole(3);
			cout << "2 ";
			definirCorConsole(15);

			cout << "--> ADICONAR NOVO PRODUTO |";
			cout << "\n  | ";

			definirCorConsole(3);
			cout << "3 ";

			definirCorConsole(15);

			cout << "--> ELIMINAR STOCK        |";

			cout << "\n  | ";

			definirCorConsole(3);
			cout << "4 ";
			definirCorConsole(15);

			cout << "--> VER STOCK             | ";

			cout << "\n  | ";
			definirCorConsole(3);
			cout << "0 ";
			definirCorConsole(15);

			cout << "--> SAIR                  |";
			cout << "\n  |-----------------------------|" << endl;

			cout << endl << "  OPCAO: ";
			cin >> cargo;

			switch (cargo) {

			case 1:
				//adicionar stock
				system("cls");

				//Imprimir dados do stock
				cout << endl << endl;
				definirCorConsole(14);
				cout << "\t\t\t\t   ARTIGOS QUE TEMOS EM STOCK" << endl;
				definirCorConsole(15);
				cout << endl << "  ---------------------------------------------------------------------------------------------";

				definirCorConsole(3);
				cout << endl << setw(5) << "ID";
				definirCorConsole(15);

				definirCorConsole(3);
				cout << setw(25) << "NOME";
				definirCorConsole(15);

				definirCorConsole(3);
				cout << setw(16) << "\t\tQUANTIDADE";
				definirCorConsole(15);

				definirCorConsole(3);
				cout << setw(17) << "TAMANHOS";
				definirCorConsole(15);

				definirCorConsole(3);
				cout << setw(19) << "PRECO CUSTO" << endl;
				definirCorConsole(15);
				cout << endl;

				for (int i = 0; i < 100; i++) {
					if (stock[i][0] != "nd") {
						cout << "  " << setw(5) << stock[i][0];
						cout << setw(30) << stock[i][1];
						cout << setw(16) << stock[i][2];
						cout << setw(20) << stock[i][3];
						cout << setw(17) << stock[i][4] << endl;
					}
				}
				cout << "  ---------------------------------------------------------------------------------------------";
				cout << endl;

				int aumentaQtd, somaQtd, antigaQtd, idStock;
				adicionarStock = false;

				cout << "\n  INSIRA O ID DO PRODUTO: ";
				cin >> idStock;

				for (int i = 0; i < 100; i++) {

					if (stock[i][0] == to_string(idStock)) {

						adicionarStock = true;

						cout << "\n  INSIRA A QUANTIDADE PARA ADICIONAR: ";
						cin >> aumentaQtd;

						antigaQtd = stoi(stock[i][2]);
						somaQtd = aumentaQtd + antigaQtd;
						stock[i][2] = to_string(somaQtd);

						definirCorConsole(10);
						cout << endl << "\n  [SUCESSO]" << endl;
						definirCorConsole(15);
						Sleep(1000);
						break;
					}
				}
				if (!adicionarStock) {
					definirCorConsole(12);
					cout << "\n  [ERRO: PRODUTO NAO ENCONTRADO]";
					definirCorConsole(15);
					Sleep(1000);
				}
				break;

			case 2:

				//adicionar novo produto
				system("cls");

				//Imprimir dados do stock

				cout << endl << endl;
				definirCorConsole(14);
				cout << "\t\t\t\t   ARTIGOS QUE TEMOS EM STOCK" << endl;
				definirCorConsole(15);
				cout << endl << "  ---------------------------------------------------------------------------------------------";

				definirCorConsole(3);
				cout << endl << setw(5) << "ID";
				definirCorConsole(15);

				definirCorConsole(3);
				cout << setw(25) << "NOME";
				definirCorConsole(15);

				definirCorConsole(3);
				cout << setw(16) << "\t\tQUANTIDADE";
				definirCorConsole(15);

				definirCorConsole(3);
				cout << setw(17) << "TAMANHOS";
				definirCorConsole(15);

				definirCorConsole(3);
				cout << setw(19) << "PRECO CUSTO" << endl;
				definirCorConsole(15);
				cout << endl;

				for (int i = 0; i < 100; i++) {
					if (stock[i][0] != "nd") {
						cout << "  " << setw(5) << stock[i][0];
						cout << setw(30) << stock[i][1];
						cout << setw(16) << stock[i][2];
						cout << setw(20) << stock[i][3];
						cout << setw(17) << stock[i][4] << endl;
					}
				}
				cout << "  ---------------------------------------------------------------------------------------------";
				cout << endl;


				for (int i = 0; i < 100; i++) {

					if (stock[i][0] == "nd") {

						cout << "\n  INSIRA O ID DO PRODUTO: ";
						cin >> stock[i][0];
						cin.ignore();

						cout << "\n  INSIRA O NOME DO PRODUTO (CAPS):";
						cin.ignore();
						getline(cin, stock[i][1]);

						cout << "\n  INSIRA A QUANTIDADE DO PRODUTO: ";
						cin >> stock[i][2];
						cin.ignore();

						cout << "\n  INSIRA OS TAMANHOS: ";
						cin >> stock[i][3];
						cin.ignore();

						cout << "\n  INSIRA O PRECO CUSTO DO PRODUTO: ";
						cin >> stock[i][4];
						cin.ignore();

						break;

					}
				}
				definirCorConsole(10);
				cout << endl << "\n  [SUCESSO]" << endl;
				definirCorConsole(15);
				Sleep(1000);
				break;

			case 3:
				//ELIMINAR STOCK

				system("cls");

				//Imprimir dados do stock

				cout << endl << endl;
				definirCorConsole(14);
				cout << "\t\t\t\t   ARTIGOS QUE TEMOS EM STOCK" << endl;
				definirCorConsole(15);
				cout << endl << "  ---------------------------------------------------------------------------------------------";

				definirCorConsole(3);
				cout << endl << setw(5) << "ID";
				definirCorConsole(15);

				definirCorConsole(3);
				cout << setw(25) << "NOME";
				definirCorConsole(15);

				definirCorConsole(3);
				cout << setw(16) << "\t\tQUANTIDADE";
				definirCorConsole(15);

				definirCorConsole(3);
				cout << setw(17) << "TAMANHOS";
				definirCorConsole(15);

				definirCorConsole(3);
				cout << setw(19) << "PRECO CUSTO" << endl;
				definirCorConsole(15);
				cout << endl;

				for (int i = 0; i < 100; i++) {
					if (stock[i][0] != "nd") {
						cout << "  " << setw(5) << stock[i][0];
						cout << setw(30) << stock[i][1];
						cout << setw(16) << stock[i][2];
						cout << setw(20) << stock[i][3];
						cout << setw(17) << stock[i][4] << endl;
					}
				}
				cout << "  ---------------------------------------------------------------------------------------------";
				cout << endl;

				//variaveis

				int idEliminar, qtdEliminar;

				// Pedir ID do produto a ser eliminado
				cout << "\n  INSIRA O ID DO PRODUTO QUE PRETENDE ELIMINAR: ";
				cin >> idEliminar;

				// Procurar o produto no stock
				for (int i = 0; i < 100; i++)
				{
					if (stock[i][0] == to_string(idEliminar))
					{
						produtoEncontrado = true;

						// Pedir quantidade a ser removida
						cout << "\n  INSIRA A QUANTIDADE QUE QUER ELIMINAR: ";
						cin >> qtdEliminar;

						// Verificar se a quantidade a eliminar é menor ou igual à quantidade em stock
						int quantidadeAtual = stoi(stock[i][2]);

						if (qtdEliminar <= quantidadeAtual) {

							qtdEliminarStock = true;

							// Remover a quantidade especificada
							quantidadeAtual = quantidadeAtual - qtdEliminar;
							stock[i][2] = to_string(quantidadeAtual);

							definirCorConsole(10);
							cout << endl << "\n  [ATUALIZADO COM SUCESSO]" << endl;
							definirCorConsole(15);
							break;
						}
						
						if (!qtdEliminarStock) {

							definirCorConsole(12);
							cout << "\n  [ERRO NAO EXISTE ESSA QUANTIDADE EM STOCK]";
							definirCorConsole(15);
							Sleep(1000);
						}
					}
				}
				if (!produtoEncontrado) {

					definirCorConsole(12);
					cout << "\n  [ERRO: PRODUTO NAO ENCONTRADO]";
					definirCorConsole(15);
					Sleep(1000);
				}
				break;
			case 4:

				system("cls");

				cout << endl << endl;
				definirCorConsole(14);
				cout << "\t\t\t\t   ARTIGOS QUE TEMOS EM STOCK" << endl;
				definirCorConsole(15);
				cout << endl << "  ---------------------------------------------------------------------------------------------";

				definirCorConsole(3);
				cout << endl << setw(5) << "ID";
				definirCorConsole(15);

				definirCorConsole(3);
				cout << setw(25) << "NOME";
				definirCorConsole(15);

				definirCorConsole(3);
				cout << setw(16) << "\t\tQUANTIDADE";
				definirCorConsole(15);

				definirCorConsole(3);
				cout << setw(17) << "TAMANHOS";
				definirCorConsole(15);

				definirCorConsole(3);
				cout << setw(19) << "PRECO CUSTO" << endl;
				definirCorConsole(15);
				cout << endl;

				for (int i = 0; i < 100; i++) {
					if (stock[i][0] != "nd") {
						cout << "  " << setw(5) << stock[i][0];
						cout << setw(30) << stock[i][1];
						cout << setw(16) << stock[i][2];
						cout << setw(20) << stock[i][3];
						cout << setw(17) << stock[i][4] << endl;
					}
				}
				cout << "  ---------------------------------------------------------------------------------------------";
				cout << endl;

				Sleep(7777);

				break;
			}
		} while (cargo != 0);

		system("cls");

			break;

		case 2:

			//Efetuar venda

			system("cls");

			//Imprimir dados do stock

			cout << endl << endl;
			definirCorConsole(14);
			cout << "\t\t\t\t   ARTIGOS QUE TEMOS EM STOCK" << endl;
			definirCorConsole(15);
			cout << endl << "  ---------------------------------------------------------------------------------------------";

			definirCorConsole(3);
			cout << endl << setw(5) << "ID";
			definirCorConsole(15);

			definirCorConsole(3);
			cout << setw(25) << "NOME";
			definirCorConsole(15);

			definirCorConsole(3);
			cout << setw(16) << "\t\tQUANTIDADE";
			definirCorConsole(15);

			definirCorConsole(3);
			cout << setw(17) << "TAMANHOS";
			definirCorConsole(15);

			definirCorConsole(3);
			cout << setw(19) << "PRECO CUSTO" << endl;
			definirCorConsole(15);
			cout << endl;

			for (int i = 0; i < 100; i++) {
				if (stock[i][0] != "nd") {
					cout << "  " << setw(5) << stock[i][0];
					cout << setw(30) << stock[i][1];
					cout << setw(16) << stock[i][2];
					cout << setw(20) << stock[i][3];
					cout << setw(17) << stock[i][4] << endl;
				}
			}
			cout << "  ---------------------------------------------------------------------------------------------";
			cout << endl;

			int idVenda{}, qtdVenda{}, valorEntregue, troco = 0, numeroCliente = 0, tamanho;
			int soma;

			cout << "\n  INSIRA O ID: ";
			cin >> idVenda;

			for (int i = 0; i < 100; i++) {

				if (stock[i][0] == to_string(idVenda)) {

					cout << "\n  INSIRA A QUANTIDADE: ";
					cin >> qtdVenda;
					
					// Verificar se a quantidade a eliminar é menor ou igual à quantidade em stock

					int quantidadeAtual = stoi(stock[i][2]);
					produtoStock = true;

					if (qtdVenda <= quantidadeAtual) {
						qtdStockVenda = true;
						cout << "\n  INSIRA O TAMANHO: ";
						cin >> tamanho;

						soma = qtdVenda * stod(stock[i][4]) * 1.23;
						double total = stoi(stock[i][4]);

						cout << "\n  VALOR A PAGAR: " << soma;

						//valor entregue

						cout << endl << "\n  VALOR A ENTREGAR: ";
						cin >> valorEntregue;

						// Remover a quantidade especificada

						quantidadeAtual -= qtdVenda;
						stock[i][2] = to_string(quantidadeAtual);

						system("cls");

						cout << endl << "  EM AUTORIZACAO";
						Sleep(0700);
						cout << ".";
						Sleep(0700);
						cout << ".";
						Sleep(0700);
						cout << ".";

						definirCorConsole(10);
						cout << endl << "\n  [SUCESSO]" << endl;
						definirCorConsole(15);

						//variaveis fatura

						double troco = valorEntregue - soma;
						double totalIva = (qtdVenda * stoi(stock[i][4])) * 1.23;
						double valorPagar = (qtdVenda * stoi(stock[i][4])) * 1.23;

						cout << endl << "\n           AGUARDE";
						cout << "\n  A FATURA ESTA A SER IMPRESSA";
						Sleep(0700);
						cout << ".";
						Sleep(0700);
						cout << ".";
						Sleep(0700);
						cout << ".";
						Sleep(0700);
						system("cls");
						cout << endl << endl;
						cout << "|-----------------------------------------------------------------|" << endl;
						cout << "|";
						definirCorConsole(3);
						cout << "\t   mmmmmm   mm  mmmmmmm  m    m  mmmmm      mm            ";
						definirCorConsole(15);
						cout << "|" << endl;
						cout << "|";
						definirCorConsole(3);
						cout << "\t   #        ##     #     #    #  #    '#    ##            ";
						definirCorConsole(15);
						cout << "|" << endl;

						cout << "|";
						definirCorConsole(3);
						cout << "\t   #mmmmm  #  #    #     #    #  #mmmmm'   #  #           ";
						definirCorConsole(15);
						cout << "|" << endl;

						cout << "|";
						definirCorConsole(3);
						cout << "\t   #       #mm#    #     #    #  #    'm   #mm#           ";
						definirCorConsole(15);
						cout << "|" << endl;

						cout << "|";
						definirCorConsole(3);
						cout << "\t   #      #    #   #     'mmmm'  #     m  #    #          ";
						definirCorConsole(15);
						cout << "|" << endl;
						cout << "|_________________________________________________________________|" << endl;

						//NUMERO DA FATURA
						// Configurar o gerador de números aleatórios
						random_device rd;
						mt19937 generator(rd());

						// Definir o intervalo desejado para os números de fatura
						uniform_int_distribution<int> distribution(10000, 99999);

						// Gerar um número de fatura aleatório
						int nroFatura = distribution(generator);

						//NUMERO CLIENTE
						int numeroCliente = rand() % 5 + 1;

						//DATA E HORA
						time_t currentTime;
						time(&currentTime);
						char timeString[26];
						ctime_s(timeString, sizeof(timeString), &currentTime);

						cout << "|                                                                 |" << endl;
						cout << "|                                                                 |";
						cout << "\n|\tDATA E HORA: " << timeString;
						cout << "|                                                                 |";
						cout << "\n|\tNUMERO DA FATURA: " << nroFatura << "                                   |" << endl;
						cout << "|                                                                 |";
						cout << "\n|\tNUMERO DO CLIENTE: " << numeroCliente << "                                      |" << endl;
						Sleep(1000);
						cout << "|                                                                 |";
						cout << "\n|\tNOME DO PRODUTO: " << stock[i][1] << "\tQTD: " << qtdVenda << "  SIZE: " << tamanho << "  |" << endl;
						cout << "|                                                                 |";
						Sleep(1000);
						cout << "\n|\tPRECO S/IVA: " << total * qtdVenda << "$" << "                                         |" << endl;
						cout << "|                                                                 |";
						cout << "\n|\tIVA: 23%" << "                                                  |" << endl;
						cout << "|                                                                 |" << endl;
						cout << "|*************************TOTAL A PAGAR***************************|" << endl;
						Sleep(1000);
						cout << "|                                                                 |";
						cout << "\n|\tTOTAL C/IVA: " << totalIva << "$" << "                                        |" << endl;
						cout << "|                                                                 |" << endl;
						Sleep(1000);
						cout << "|****************************PAGAMENTO****************************|" << endl;
						cout << "|                                                                 |";
						cout << "\n|\tVALOR ENTREGUE: " << valorEntregue << "$" << "                                     |" << endl;
						cout << "|                                                                 |";
						cout << "\n|\tTROCO: " << troco << "$" << "                                                |" << endl;
						cout << "|                                                                 |" << endl;
						cout << "|-----------------------------------------------------------------|" << endl << endl;

						Sleep(7000);

						//SORTEIO DA FATURA GRATIS

						if (numeroCliente == 3) {

							Sleep(1000);
							definirCorConsole(10);

							cout << "  [PARABENS GANHOU O SORTEIO A SUA COMPRA FICARA DE GRACA]" << endl;

							definirCorConsole(7);

							cout << "\n  A NOVA FATURA ESTA A SER IMPRESSA";
							Sleep(1000);
							cout << ".";
							Sleep(1000);
							cout << ".";
							Sleep(1000);
							cout << ".";
							Sleep(1000);
							system("cls");
							cout << endl << endl;
							cout << "|-----------------------------------------------------------------|" << endl;
							cout << "|";
							definirCorConsole(3);
							cout << "\t   mmmmmm   mm  mmmmmmm  m    m  mmmmm      mm            ";
							definirCorConsole(15);
							cout << "|" << endl;
							cout << "|";
							definirCorConsole(3);
							cout << "\t   #        ##     #     #    #  #    '#    ##            ";
							definirCorConsole(15);
							cout << "|" << endl;

							cout << "|";
							definirCorConsole(3);
							cout << "\t   #mmmmm  #  #    #     #    #  #mmmmm'   #  #           ";
							definirCorConsole(15);
							cout << "|" << endl;

							cout << "|";
							definirCorConsole(3);
							cout << "\t   #       #mm#    #     #    #  #    'm   #mm#           ";
							definirCorConsole(15);
							cout << "|" << endl;

							cout << "|";
							definirCorConsole(3);
							cout << "\t   #      #    #   #     'mmmm'  #     m  #    #          ";
							definirCorConsole(15);
							cout << "|" << endl;
							cout << "|_________________________________________________________________|" << endl;
							cout << "|                                                                 |" << endl;
							cout << "|                                                                 |";
							cout << "\n|\tDATA E HORA: " << timeString;
							cout << "|                                                                 |";
							cout << "\n|\tNUMERO DA FATURA: " << nroFatura << "                                   |" << endl;
							cout << "|                                                                 |";
							cout << "\n|\tNUMERO DO CLIENTE: " << numeroCliente << "                                      |" << endl;
							Sleep(1000);
							cout << "|                                                                 |";
							cout << "\n|\tNOME DO PRODUTO: " << stock[i][1] << "\tQTD: " << qtdVenda << "  SIZE: " << tamanho << "  |" << endl;
							cout << "|                                                                 |";
							Sleep(1000);
							cout << "\n|\tPRECO S/IVA: 0$                                           |";
							cout << "\n|                                                                 |";
							cout << "\n|\tIVA: 23%" << "                                                  |";
							cout << "\n|                                                                 |" << endl;
							cout << "|*************************TOTAL A PAGAR***************************|" << endl;
							Sleep(1000);
							cout << "|                                                                 |";
							cout << "\n|\tTOTAL C/IVA: 0$                                           |" << endl;
							cout << "|                                                                 |" << endl;
							Sleep(1000);
							cout << "|****************************PAGAMENTO****************************|" << endl;
							cout << "|                                                                 |";
							cout << "\n|\tVALOR ENTREGUE: 0$                                        |" << endl;
							cout << "|                                                                 |";
							cout << "\n|\tTROCO: 0$                                                 |" << endl;
							cout << "|                                                                 |" << endl;
							cout << "|-----------------------------------------------------------------|" << endl << endl;

							Sleep(7000);
						}
						/*break;*/
					}
					if (!qtdStockVenda) {
						definirCorConsole(12);
						cout << "\n  [ERRO NAO EXISTE ESSA QUANTIDADE EM STOCK]";
						definirCorConsole(15);
						Sleep(1000);
					}
				}
			}
			if (!produtoStock) {
				definirCorConsole(12);
				cout << "\n  [ERRO: PRODUTO NAO ENCONTRADO]";
				definirCorConsole(15);
				Sleep(1000);
			}
		}
		if (opcao == 0) {

			system("cls");
			cout << endl;

			definirCorConsole(14);
			cout << "\n        mm   mmmmm  mmmmm        mm";
			cout << "\n        ##     #    #            ##";
			cout << "\n       #  #    #    #mmmm       #  #";
			cout << "\n       #mm#    #    #           #mm#";
			cout << "\n      #    #   #    #mmmm      #    # ";
			cout << endl;

			cout << endl;
			cout << "\n      mmmmm  mmmmm   mmmm  m    m mmmmm m    m   mm";
			cout << "\n      #   '# #   '# m'  'm  #  #    #   ##  ##   ##";
			cout << "\n      #mmm#' #mmm#' #    #   ##     #   # ## #  #  #";
			cout << "\n      #      #   'm #    #  m''m    #   # '' #  #mm#";
			cout << "\n      #      #    '  #mm#  m'  'm mm#mm #    # #    #";
			cout << endl;

			cout << endl;
			cout << "\n      mmmmm     m    m m    m";
			cout << "\n      #         #    # ##  ##";
			cout << "\n      #mmmm     #    # # ## #";
			cout << "\n      #         #    # # '' #";
			cout << "\n      #mmmm     'mmmm' #    #";
			cout << endl;

			cout << endl;
			cout << "\n      mmmmm   mmmm  m    m      mm   mm   m  mmmm";
			cout << "\n      #    # m'  'm ##  ##      ##   #'m  # m'  'm";
			cout << "\n      #mmmm' #    # # ## #     #  #  # #m # #    #";
			cout << "\n      #    # #    # # '' #     #mm#  #  # # #    #";
			cout << "\n      #mmmm'  #mm#  #    #    #    # #   ##  #mm#";
			definirCorConsole(15);
			cout << endl << endl << endl;
		}
	} while (opcao != 0);
}