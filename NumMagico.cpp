#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std; 

/* Elabore una funcion que le permita al usuario adivinar cual es el número mágico.
*/

int main()
{
    int num, NumMagico =25, contador =5;  // Se declaran variables 
cout<< "Adivina el numero magico "<< endl;
cout<< "Para salir pulsa 0"<< endl << endl; 
do{

cout<< "Ingresa un numero entre 1 y 100"<< endl; 
cin>> num; 

if (num== 0){      // Si se cumple la condicion termina programa 
    break; 
}


    if (num < NumMagico){            
        cout<< "El numero es mayor"<< endl;
        // Pista para que al usuario se le facilite encontrar el numero
        contador--;
        cout<< "Te quedan: "<< contador << " intentos " << endl << endl; 
        }
        else if (num > NumMagico){
            cout<< "El numero es menor"<< endl; 
            // Pista para que al usuario se le facilite encontrar el numero 
            contador --; 
            cout<< "Te quedan : "<< contador << " intentos " << endl<< endl; 
        }else{
            cout<< "Felicidades, ganaste"; 

       }
}while (contador>0 && num!= NumMagico);
  
   return 0; 
}