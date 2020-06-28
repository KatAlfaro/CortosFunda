#include <iostream>

using namespace std; 

/* Dado un arreglo de caracteres, que deben ser introducidos desde teclado, codifique su
contenido utilizando la clave del murciélago*/
#include <iostream>
using namespace std;

char Mensaje[1000];
int main () 
{
 cout<< endl;
 cout<< "CODIFIQUE SU MENSAJE CON CLAVE MURCIELAGO"<< endl<< endl;
 cout<< "Ingrese su mensaje  "<<endl;
 cin.getline(Mensaje, 1000);
 
    for (int i=0; i <=1000; i++) 
    {
        switch (Mensaje[i]) 
        {
         {
         case 'm':
         Mensaje[i]= '0';
         break;
         }
         {
         case 'u':
         Mensaje[i]= '1';
         break;
         }
         {
         case 'r':
         Mensaje[i]= '2';
         break;
         }
         {
         case 'c':
         Mensaje[i]= '3';
         break;
         }
         {
         case 'i':
         Mensaje[i]= '4';
         break;
         }
         {
         case 'e':
         Mensaje[i]= '5';
         break;
         }
         {
         case 'l':
         Mensaje[i]= '6';
         break;
         }
         {
         case 'a':
         Mensaje[i]= '7';
         break;
         }
         {
         case 'g':
         Mensaje[i]= '8';
         break;
         }
         {
         case 'o':
         Mensaje[i]= '9';
         break;
         }
         default:
         Mensaje[i]=Mensaje[i];
        }
    }
    cout<< endl; 
    cout<<"Su mensaje en clave murcielago es: "<< endl; 
    cout<< Mensaje; 
    
}


