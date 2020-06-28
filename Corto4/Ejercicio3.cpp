#include <iostream>

using namespace std; 
/* Sistema de Registro de Notas*/

float Leer_nota(float notasest[][5], int numest){  //se declara la funcion 
	for (int i = 0; i < numest; i++)
	{
		cout << "Estudiante " << i << endl;
		for (int n = 0; n <= 4; n++)
		{
			cout << "Ingrese la nota " << n << ": ";
			cin >> notasest[i][n];
		}
	}return notasest[numest][5];
}

float Calcular_nota(float notasest[][5], int numest, float notafinal[][5]){     //funcion que calcula la nota y la multiplica por 0.20
	for (int i = 0; i < numest; i++)
	{
		for (int n = 0; n <= 4; n++)
		{
			notafinal [i][n] = notasest[i][n] * 0.2;
		}
	}return notafinal[numest][5];
}

float Guardar_nota(float notasest[][5], int numest, float notafinal[][5], float notadesp[][1]){  // funcion que realiza el calculo de las 5 notas

	for (int i = 0; i < numest; i++)
	{
		for (int n = 0; n <= 0; n++)
		{
			notadesp[i][1] = notafinal[i][n] + notafinal[i][n+1] + notafinal[i][n+2] + notafinal[i][n+3] +notafinal[i][n+4];
			cout << "La nota del estudiante " << i << " es: ";
			if(notadesp[i][1] >= 6.00){             // el estudiante aprueba si tiene una nota igual o mayor a 6, de lo contario reprueba 
				cout << notadesp[i][1] << endl; 
				cout << "El estudiante aprobo." << endl;
			}else{
				cout << notadesp[i][1] << endl;
				cout << "El estrudiante reprobo." << endl;
			}
		}
	}return notadesp[numest][1];
}

int main(void){
	int numest;

	cout << "Ingrese el numero de estudiantes"<< endl;
	cin >> numest;

	float notasest[numest][5]; 
	float notafinal[numest][5];
	float notadesp[numest][1]; 

	Leer_nota(notasest,numest);
	Calcular_nota(notasest,numest,notafinal);
	Guardar_nota(notasest,numest,notafinal,notadesp);
}