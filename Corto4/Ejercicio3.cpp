#include <iostream>

using namespace std; 
/* Sistema de Registro de Notas*/

float Nota(float nota[][5], int estudiantes){  //se declara la funcion 
	for (int i = 0; i < estudiantes; i++)
	{
		cout << "Estudiante " << i << endl;
		for (int n = 0; n <= 4; n++)
		{
			cout << "Ingrese la nota " << n << ": ";
			cin >> nota[i][n];
		}
	}return nota[estudiantes][5];
}

float Calculo_nota(float nota[][5], int estudiantes, float nofinal[][5]){     //funcion que calcula la nota y la multiplica por 0.20
	for (int i = 0; i < estudiantes; i++)
	{
		for (int n = 0; n <= 4; n++)
		{
			nofinal [i][n] = nota[i][n] * 0.2;
		}
	}return nofinal[estudiantes][5];
}

float Guardar_nota(float nota[][5], int estudiantes, float nofinal[][5], float notadesp[][1]){  // funcion que realiza el calculo de las 5 notas

	for (int i = 0; i < estudiantes; i++)
	{
		for (int n = 0; n <= 0; n++)
		{
			notadesp[i][1] = nofinal[i][n] + nofinal[i][n+1] + nofinal[i][n+2] + nofinal[i][n+3] +nofinal[i][n+4];
			cout << "La nota del estudiante " << i << " es: ";
			if(notadesp[i][1] >= 6.00){             // el estudiante aprueba si tiene una nota igual o mayor a 6, de lo contario reprueba 
				cout << notadesp[i][1] << endl; 
				cout << "El estudiante aprobo." << endl;
			}else{
				cout << notadesp[i][1] << endl;
				cout << "El estrudiante reprobo." << endl;
			}
		}
	}return notadesp[estudiantes][1];
}

int main(void){
	int estudiantes;

	cout << "Ingrese el numero de estudiantes"<< endl;
	cin >> estudiantes;

	float nota[estudiantes][5]; 
	float nofinal[estudiantes][5];
	float notadesp[estudiantes][1]; 

	Nota(nota,estudiantes);
	Calculo_nota(nota,estudiantes,nofinal);
	Guardar_nota(nota,estudiantes,nofinal,notadesp);
}