#include <iostream> 
#include <math.h>
/* Elabore una funcion que calcule el salario mensual de los empleados.
*/ 

using namespace std;

void salariototal(float horas, float horaextra)
{
    float valorhora;
    valorhora = 1.75;
    float valorhoraextra;
    valorhoraextra= 2.50;
    float salario;
    salario = (horas * valorhora + horaextra * valorhoraextra);
    cout << endl << "El salario total es de: $" << salario << endl;
}


void salarioreal(int horas, int horaextra)
{
    float valorhoraextra;
    valorhoraextra = 2.50;
    float valorhora;
    valorhora = 1.75;
    float salario;
    salario = (horas * valorhora + horaextra * valorhoraextra); 
    float descuentoafp;
    descuentoafp = salario * 0.04;
    float descuentoseguro;
    descuentoseguro = salario * 0.0625;
    float renta;
    renta = salario * 0.1;
    float sreal;
    sreal = (salario - descuentoseguro - descuentoafp);
    if (sreal > 500)
    {
        cout << "El salario real es de: $" << sreal - renta << endl << endl;
    }else
    {
        cout << "El salario real es de: $" << sreal << endl << endl;
    }
}


int main()
{
    int Hora, Horaextra; 
    int i, empleados; 
    
    cout << endl << "   CALCULO SALARIO " << endl<< endl; 
    cout<< "Ingrese el numero de empleados: ";
    cin>> empleados; 
    for (int i=0; i < empleados; i++)
    {
    cout << endl << "Ingrese las horas trabajadas del empleado : ";
    cin >> Hora;
    cout << "Ingrese horas extra: ";
    cin >> Horaextra;
    salariototal(Hora, Horaextra);
    salarioreal(Hora, Horaextra);
    }
}