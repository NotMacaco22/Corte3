/* Leer 100 numeros. Determinar la media de los numeros 
positivos y la media de los numeros negativos. */
#include <iostream>
using namespace std;

void ejercicio7();

void ejercicio7(){
   float num, mediaPosi, mediaNeg, sumPosi = 0, sumNeg = 0;
    int posiCant = 0, negCant = 0;
    for (int i = 0; i < 100; i++)
    {
        cout<<"Ingrese el #"<<i+1<<endl;
        cin>>num;
        if(num >= 0){
            sumPosi += num;
            posiCant++;
        }
        else{
            sumNeg += num;
            negCant++;
        }
    }
    mediaPosi = sumPosi / posiCant;
    mediaNeg = sumNeg / negCant;
    cout<<endl;
    cout<<"Ingreso "<<posiCant<<" numeros positivos."<<endl;
    cout<<"Ingreso "<<negCant<<" numeros negativos."<<endl;
    cout<<"La media de los numeros positivos que ingreso es "<<mediaPosi<<"."<<endl;
    cout<<"La media de los numeros positivos que ingreso es "<<mediaNeg<<"."<<endl;
}