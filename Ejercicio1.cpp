/* Determinar la media de una lista indefinida de numeros positivos 
de numeros positvos, terminando con un numero negativo. */

#include <iostream>
using namespace std;

    void calcMedia();
    bool evaluarNum(int num);

    void calcMedia(){
        int num = 0, suma = 0, cantNum = 0;
        float media = 0;

        for (int i = 0; num >= 0; i++)
        {
            cout<<"Dime un numero"<<endl;
            cin>>num;
            if (evaluarNum(num)){
                suma += num;
                cantNum++;
            }
        }   
        media = suma/cantNum;
        cout<<"La media es "<<media;

    }

    bool evaluarNum(int num){
       return num >= 0;
    }
