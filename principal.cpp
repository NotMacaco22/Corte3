#include <iostream>
#include "Ejercicio1.cpp"
#include "Ejercicio2.cpp"
#include "Ejercicio3.cpp"
#include "Ejercicio4.cpp"
#include "Ejercicio5.cpp"
#include "Ejercicio6.cpp"
#include "Ejercicio7.cpp"

using namespace std;
void menu();
int main()
{
    int opc;
    cout<<"Ingrese el respectivo numero para la opccion que desee selecionar."<<endl;
    cout<<"1) Determinar la media de una lista indefinida de numeros positivos de numeros positvos, terminando con un numero negativo."<<endl;
    cout<<"2) Dado el nombre de un mes y si el anio es o no bisiesto, deducir el numero de dias del mes."<<endl;
    cout<<"3) Determinar la media de una lista de numeros positivos terminada con un numero no positivo despues del ultimo numero valido."<<endl;
    cout<<"4) Imprimir todos los numeros primos entre 2 y 1000 inclusive."<<endl;
    cout<<"5) Se desea leer las calificaciones de una clase de informatica y contar el numero total de aprobados (5 o mayor que 5)."<<endl;
    cout<<"6) Leer las notas de una clase de informatica y deducir todas aquellas que son NOTABLES ( >= 7 y < 9 )."<<endl;
    cout<<"7) Leer 100 numeros. Determinar la media de los numeros positivos y la media de los numeros negativos."<<endl;
    cin>>opc;
    
    switch (opc)
    {
    case 1:
        system("cls");
        ejercicio1();
        break;

    case 2:
        system("cls");
        ejercicio2();
        break;
    
    case 3:
        system("cls");
        ejercicio3();
        break;
    
    case 4:
        system("cls");
        ejercicio4();
        break;
    
    case 5:
        system("cls");
        ejercicio5();
        break;
    
    case 6:
        system("cls");
        ejercicio6();
        break;

    case 7:
        system("cls");
        ejercicio7();
        break;

    default:
        system("cls");
        cout<<"Ingreso una opccion no valida - Intente de nuevo.";
        cout<<endl;
        main();
        break;
    }
    return 0;
}
void menu(){
    int opcMenu;
    cout<<endl;
    cout<<"Digite un numero de lo que desea hacer ahora."<<endl;
    cout<<"1) Volver al menu."<<endl;
    cout<<"2) Salir."<<endl;
    cin>>opcMenu;
    switch (opcMenu)
    {
    case 1:
    system("cls");
        main();
        break;
    
    case 2:
        cout<<"Adios."<<endl;
        break;
    
    default:
        system("cls");
        cout<<"Opcion no valida, intente de nuevo.";
        break;
    }
    
}