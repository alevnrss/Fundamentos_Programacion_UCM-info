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

int digitoMagico(int n);
int sumaDigitos(int n);

int main() {
    int n;
    cout << "Ingresa un numero: ";
    cin >> n;

    int resultado = digitoMagico(n);
    cout << "El digito magico de " << n << " es: " << resultado << endl;
    int suma = sumaDigitos(n);
    cout << "La suma de los digitos de " << n << " es: " << suma << endl;

    return 0;
}

// Función que calcula la suma de los dígitos de un número
int sumaDigitos(int n) {
    int suma = 0;
    while (n > 0) {
        suma += n % 10;  // último dígito
        n /= 10;         // eliminar el último dígito
    }
    return suma;
}

// Función que calcula el dígito mágico
int digitoMagico(int n) {
    while (n > 9) {      // mientras tenga más de un dígito
        n = sumaDigitos(n);
    }
    return n;
}

