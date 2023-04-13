/* Determinar la media de una lista de numeros positivos terminada 
con un numero no positivo despues del ultimo numero valido. */
#include <iostream>
using namespace std;

void ejercicio3();

void ejercicio3(){
    int num, sumNum = 0, cantNum = 0;
    float media;

    for (int i = 0; num >= 0; i++)
    {
        cout<<"Ingrese un numero."<<endl;
        cin>>num;
        sumNum+= num;
        cantNum++;
    }
    media = sumNum / cantNum;
    cout<<"La media en base a los numeros que ingreso es "<<media<<endl;
}
