/* Dado el nombre de un mes y si el año es o no bisiesto,
deducir el numero de dias del mes. */
#include <iostream>
#include <string>
using namespace std;

void ejercicio2();

void ejercicio2(){
    /* Arreglos para los meses y dias*/
    string meses[] = {"ENERO","FEBRERO","MARZO","ABRIL","MAYO","JUNIO","JULIO","AGOSTO","SEPTIEMBRE","OCTUBRE","NOVIEMBRE","DICIEMBRE"};
    int dias[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    
    string mesIngresado;
    int bisiesto_O_No = 0, anio, numDias;
    cout<<"Ingrese el nombre del mes en MAYUSCULAS"<<endl;
    cin>>mesIngresado;
    cout<<"Ingrese el anio"<<endl;
    cin>> anio;

    if ( (anio % 4 == 0) & (anio % 100 != 0) || (anio % 400 == 0) ){
        //Es un año bisiesto
        bisiesto_O_No = 1;
    }

    for (int i = 0; i <= 12; i++) {
        if (meses[i] == mesIngresado) {
            numDias = dias[i];
            if (mesIngresado == "FEBRERO" && bisiesto_O_No == 1){
                numDias++;
            }
        }
    }

    if (numDias >= 28) {
        cout<<"El mes de "<<mesIngresado<<" tiene "<<numDias<<" dias."<<endl;
    } else {
        system("cls");
        cout<<"ERROR - Intentelo de nuevo"<<endl;
        cout<<endl;
        ejercicio2();    
    }
}