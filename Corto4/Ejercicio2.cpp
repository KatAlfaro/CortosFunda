#include <iostream>
using namespace std;
/*Calcule el promedio de estatura de una clase de 25 alumnos*/

float media (float estatura[], int n) // declaracion de la funcion 
{
    float media;
    float suma = 0;

    for (int i = 0; i < n; i++)
    {
        suma = suma + estatura[i];
        media = suma/25;
    }
    return media;
}

float arriba_media (float estatura[], int n)
{
    float mayor = 0;
    for (int i = 0; i < n; i++)
    {
        if(estatura[i] > media (estatura, n))
        {
            mayor++;
        }
    }
    return mayor;
}

float abajo_media (float estatura[], int n)
{
    float menor = 0;
    for (int i = 0; i < n; i++)
    {
        if(estatura[i] < media (estatura, n))
        {
            menor++;
        }
    }
    return menor;
}

int main()      // definicion de la funcion 
{
    int n = 25;    // Ya que son 25 alumnos 
    float estatura[n];
    for (int i = 0; i < n; i++)
    {
        cout << endl << "Ingrrese la estatura  en metros del " << "alumno numero " << i+1 << ": ";
        cin >> estatura[i];
    }
    cout << endl << "la media de los alumnos es: " << media (estatura, n) << endl;
    cout << "Los alumnos por arriba de la media son: " << arriba_media (estatura, n) << endl;
    cout << "Los alumnos por abajo de la media son: " << abajo_media (estatura, n) << endl;

}