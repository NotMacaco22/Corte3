/* Leer las notas de una clase de informatica y deducir todas 
aquellas que son NOTABLES ( >= 7 y < 9 ). */
#include <iostream>
using namespace std;

void ejercicio6();

void ejercicio6(){
    int cant;
    cout<<"Ingrese la cantidad de notas que quiera ingresar"<<endl;
    cin>>cant;

    float array[cant];
    for (int i = 0; i < cant; i++)
    {
        cout<<"Ingrese la nota #"<<i+1<<endl;
        cin>>array[i];
    }
    cout<<endl;
    cout<<"Las notas notables que ingreso son las siguientes:"<<endl;
    for (int i = 0; i < cant; i++)
    {
        if ( (array[i] >= 7) && (array[i] < 9) )
        {
            cout<<array[i]<<"\t";
        }
        
    }
}