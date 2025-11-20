/**
 * Escribe un programa en C++ que muestre en la pantalla la tabla de multiplicación (de 1 a 10) del número que
 * introduzca el usuario (entre 1 y 100; si no está en ese intervalo volverá a pedir el número)
 */

#include <iostream>
using namespace std;

int main(){
    int numUser;
    do{
        cout <<"Introduce un numero entre 1 y 100: ";
        cin >> numUser;
        if(numUser < 1 || numUser > 100){
            cout << "Numero fuera de rango" << endl;
        }
    }while(numUser < 1 || numUser > 100);

    for(int i = 1; i <=10; i++){
        cout << numUser << " x " << i << " = " << numUser * i << endl;
    }
}