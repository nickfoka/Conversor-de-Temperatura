#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

float ValorA;
float ValorB;
int escolha;
float resultado;

float CF(float Valor) {
	float F;
	F = (Valor * 1.8) + 32.0;
	return F;
}

float FC(float Valor) {
	double C;
	C = (Valor - 32.0) * (5.0 / 9.0);
	return C;
}

int main()
{
	while (escolha < 3) {
		system("cls");
		cout << "Bem vindo ao Conversor de Temperatura!\n";
		cout << "Escolha a conversão desejada:\n";
		cout << "1. Celsius para Fahrenheit\n";
		cout << "2. Fahrenheit para Celsius\n";
		cout << "3. Sair do Programa\n";
		cin >> escolha;
		switch (escolha) {
		case 1:
			system("cls");
			cout << "Insira valor em Celsius:\n";
			cin >> ValorA;
			system("cls");
			cout << "O valor celsius em farenheit eh: " << CF(ValorA) << "F\n";
			system("pause");
			break;
		case 2:
			system("cls");
			cout << "Insira valor Fahrenheit:\n";
			cin >> ValorA;
			cout << "O valor farenheit em celsius eh: " << fixed << setprecision(2) << FC(ValorA) << "C\n";
			system("pause");
			break;
		}
		if (escolha == 3) {
			break;
		}
	}
	return 0;
}
