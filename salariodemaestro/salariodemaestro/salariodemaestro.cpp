// salariodemaestro.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>

using namespace std;
void pausa();
int main()
{
	bool bandera = false;
	char tecla;
	do
	{
		system("cls");
		int salario;
		int salatotal;
		float operacionn;
		cout << "Creador: Juan Pablo Chipres Arteaga" << endl;
		cout << "Buen dia profesor" << endl;
		cout << "Veamos cual sera su salario :)" << endl;
		cout << "Ingese su salario: " << endl;
		cin >> salario;

		if (salario <= 8000) {
			operacionn = salario * .12;
			salatotal = salario + operacionn;
			cout << "Su salario incremento 12%" << endl;
			cout << "Su salario ahora es de: $" << salatotal << endl;
		}
		else if (salario >= 8000 && salario <= 15000) {
			operacionn = salario * .08;
			salatotal = salario + operacionn;
			cout << "Su salario aumento 8%" << endl;;
			cout << "Su salario ahora es de: $" << salatotal << endl;
		}
		else if (salario >= 15000 && salario <= 20000) {
			operacionn = salario * .07;
			salatotal = salario + operacionn;
			cout << "Su salario aumento 7%" << endl;;
			cout << "Su salario ahora es de: $" << salatotal << endl;
		}
		if (salario >= 20000 && salario <= 25000) {
			operacionn = salario * .06;
			salatotal = salario + operacionn;
			cout << "Su salario aumento 6%" << endl;;
			cout << "Su salario ahora es de: $" << salatotal << endl;
		}
		else {
			cout << "El salario sigue igual" << endl;;
		}
		pausa();
	}
	while (bandera != true);
return 0;
}
void pausa()
{
	cout << "Pulsa una tecla para calcular de nuevo el salario... ";
	getwchar();
	getwchar();
}


