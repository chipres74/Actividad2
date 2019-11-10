// Mostrarsegundomas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
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
		int hora;
		int minuto;
		int segundos;
		cout << "Cual es la hora: ";
		cin >> hora;
		cout << "Cuantos minutos son: ";
		cin >> minuto;
		cout << "Cuantos segundos son: ";
		cin >> segundos;
		if (hora >= 0 && hora <= 23 && minuto >= 0 && minuto <= 59 && segundos >= 0 && segundos <= 59)
		{
			segundos++;
			if (segundos == 60)
			{
				segundos = 0;
				minuto++;
				if (minuto == 60)
				{
					minuto = 0;
					hora++;
					if (hora == 24)
						hora = 0;
				}

			}
			cout << "Un segundo despues la hora es de:" "h:" << hora << "m:" << minuto << "s:" << segundos << endl;
		}
		else {
			cout << "La hora esta mal";
		}
		pausa();
	}
    while (bandera != true);
	return 0;

}

void pausa()
{

	cout << "Pulsa una tecla para reinicar el programa... ";

	getwchar();

	getwchar();
}


