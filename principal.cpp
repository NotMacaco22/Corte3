#include <iostream>
#include "Ejercicio1.cpp"
#include "Ejercicio2.cpp"
#include "Ejercicio3.cpp"
#include "Ejercicio4.cpp"
#include "Ejercicio5.cpp"
#include "Ejercicio6.cpp"
#include "Ejercicio7.cpp"

using namespace std;
int main()
{
    int opc;
    cin>>opc;
    
    switch (opc)
    {
    case 1:
        calcMedia();
        break;
    case 2:
        ejercicio2();
        break;
    
    case 3:
        ejercicio3();
        break;
    
    default:
        system("cls");
        cout<<"Ingreso una opccion no valida - Intente de nuevo.";
        main();
        break;
    }
    return 0;
}
