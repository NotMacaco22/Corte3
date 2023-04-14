/* Se desea leer las calificaciones de una clase 
de informatica y contar el numero total de aprobados (5 o mayor que 5). */
#include <iostream>
using namespace std;

void ejercicio5();

void ejercicio5(){
    int cantNota, acum = 0;
    float nota;
    cout<<"Cuantas notas desea ingresar?"<<endl;
    cin>>cantNota;
  
    for (int i = 0; i < cantNota; i++){
        cout<<"Ingrese la nota #"<<i+1<<endl;
        cin>>nota;
        if (nota >= 5){
            acum++;
        }
    }
    cout<<endl;
    cout<<"Ingreso un total de "<<acum<<" notas aprobadas."<<endl;
}