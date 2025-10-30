/**
 * Escribe un programa que lea un numero entero y muestre la suma de sus digitos.
 * Algoritmo: Numero magico.
 */

#include <iostream>
using namespace std;

int algoritmoNumeroMagico(int numero, int sumaDigitos, int digito);
int main(){
    int sumaDigitos = 0, numero, digito;
    cout << "Introduzca un numero entero: "; cin >> numero;
    sumaDigitos = algoritmoNumeroMagico(numero, sumaDigitos, digito);
    cout << "La suma de los digitos es: " << sumaDigitos << endl;

    return 0;
}

int algoritmoNumeroMagico(int numero, int sumaDigitos, int digito){
    while (numero != 0){
        digito = numero % 10; 
        sumaDigitos += digito;
        numero = numero / 10;
    }
    return sumaDigitos;
}

