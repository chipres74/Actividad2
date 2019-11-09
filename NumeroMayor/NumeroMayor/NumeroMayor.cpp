// NumeroMayor.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>

using namespace std;

void pausa();
int main()
{
	bool bandera = false;
	char tecla;
	do {
		system("cls");
		int a;
		int b;
		int c;
		cout << "Creador: Juan Pablo Chipres Arteaga" << endl;
		cout << "Programa creado para saber que numero es mayor" << endl;
		cout << "Dame el primer numero: ";
		cin >> a;
		cout << "Dame el segundo numero: ";
		cin >> b;
		cout << "Dame el tercer numero: ";
		cin >> c;
		if (a >= b && a >= c) {
			cout << "El numero mayor es: " << a << endl;;
		}
		else if (a <= b && c <= b) {
			cout << "El numero mayor es: " << b << endl;;
		}
		else if (a <= c && b <= c) {
			cout << "El numero mayor es: " << c << endl;;
		}
		pausa();
	}

while (bandera != true);
return 0;
}
void pausa()
{
	cout << "Pulsa una tecla para realizar de nuevo... ";
	getwchar();
	getwchar();
}


