#include <iostream> 

using namespace std; 
/*
Elabore una funcion que indique si un año es bisiesto o no.
*/
void bisiesto (int year); // declaracion de la funcion 
int main()
{
   
    int year;
    cout<< endl;
    cout<< "Calculo de anio bisiesto" <<endl<< endl; 
    cout<< "Por favor ingrese el anio"<< endl; 
    cin>> year;
    bisiesto (year);
    return 0; 
}
void bisiesto (int year){ // definicion de la funcion 

    if ( year % 400 ==0){
        cout<< "Es bisiesto" << endl; 
    }else if ( year % 4 ==0 && year % 100!=0){
        cout<< "Es bisiesto" << endl;
    }else {
        cout<< "No es bisiesto "<< endl;
      }
        
}
