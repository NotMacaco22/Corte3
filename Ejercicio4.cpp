/* Imprimir todos los numeros primos entre 2 y 1000 inclusive. */
#include <iostream>
using namespace std;

void ejercicio4();

void ejercicio4(){

    /* El primer for me permite recorrer los numeros del 2 al 1000. */
    for (int i = 2; i <= 1000; i++){
        int acum = 0;
        /* El segundo for divide, la i (el numero principal) y j que es el divisor que de igual manera va del 1 al 1000. */
        for (int j = 1; j < 1000; j++)
        {
            
            if (i % j == 0)
            {
                /* El acumulador me dice si el numero es o no primo, si el acumulador es 
                exactamente 2 quiere decir que solo hay dos escenarios de division, el 1 
                y el mismo numero, a como son los numeros primos */
                acum++;
            }    
        }
        if (acum == 2){
            cout<<i<<endl;
        }
    }
}