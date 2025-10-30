/*
 * Se da un numero positivo y se muestra la suma total de sus digitos.
 * Ahora, si la suma de sus digitos es mayor que 9 se repetira ese mismo proceso 
 * pero sobre la propia suma, hasta obtener un valor entre 1 y 9. 
 * * Se conoce como digito magico del numero introducido
 * Se calculara a traves de una funcion del programa.
 * 
 */

#include <iostream>
using namespace std;

int calcularDigitoMagicoSuma();

int main(){
    int n, suma = 0, digito, digitoMagicoSuma;
    cout << "Ingrese un numero entero positivo: "; cin >> n;
    while(n != 0){
        digito = n % 10;
        suma += digito;
        n /= 10;
    }
    cout << "La suma de los digitos es: " << suma << endl;

    if(suma > 9){
        digitoMagicoSuma = calcularDigitoMagicoSuma(suma);
    }

    cout << "El digito magico de la suma es: " << digitoMagicoSuma << endl;

    return 0;
}

int calcularDigitoMagicoSuma(int suma){
    int digitoMagicoSuma = 0;
    while(suma > 9){
        digitoMagicoSuma = 0;
        while(suma != 0){
            digitoMagicoSuma += suma % 10;
            suma /= 10;
        }
        suma = digitoMagicoSuma;
    }
    return digitoMagicoSuma;
}

