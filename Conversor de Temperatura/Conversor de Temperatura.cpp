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

float CK(float Valor) {
	double K;
	K = (Valor + 273.15);
	return K;
}
float KC(float Valor) {
	double K;
	K = (Valor - 273.15);
	return K;
}

float KF(double Valor) {
	double F;
	F = (Valor - 273.15) * 1.8 + 32.0;
	return F;
}
float FK(double Valor) {
	double K;
	K = (Valor - 32) * 5 / 9 + 273.15;
	return K;
}

int main()
{
	while (true) {
		system("cls");
		cout << "Bem vindo ao Conversor de Temperatura!\n";
		cout << "Escolha a conversão desejada:\n";
		cout << "1. Celsius para Fahrenheit\n";
		cout << "2. Fahrenheit para Celsius\n";
		cout << "3. Celsius para Kelvin\n";
		cout << "4. Kelvin para Celsius\n";
		cout << "5. Kelvin para Fahrenheit\n";
		cout << "6. Fahrenheit para Kelvin\n\n";
		cout << "7. Sair do Programa\n";
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
			system("cls");
			cout << "O valor farenheit em celsius eh: " << fixed << setprecision(2) << FC(ValorA) << "C\n";
			system("pause");
			break;
		case 3:
			system("cls");
			cout << "Insira valor Celsius:\n";
			cin >> ValorA;
			system("cls");
			cout << "O valor celsius em kelvin eh: " << fixed << setprecision(2) << CK(ValorA) << "K\n";
			system("pause");
			break;

		case 4:
			system("cls");
			cout << "Insira valor Kelvin:\n";
			cin >> ValorA;
			system("cls");
			cout << "O valor kelvin em celsius eh: " << fixed << setprecision(2) << KC(ValorA) << "C\n";
			system("pause");
			break;

		case 5:
			system("cls");
			cout << "Insira valor Kelvin:\n";
			cin >> ValorA;
			system("cls");
			cout << "O valor kelvin em farenheit eh: " << fixed << setprecision(2) << KF(ValorA) << "F\n";
			system("pause");
			break;

		case 6:
			system("cls");
			cout << "Insira o valor Farenheith:";
			cin >> ValorA;
			system("cls");
			cout << "O valor Farenheith em Kelvin eh " << fixed << setprecision(2) << FK(ValorA) << "K\n";
			system("pause");
			break;
		}

		if (escolha == 7) {
			break;
		}
	}
	return 0;
}
