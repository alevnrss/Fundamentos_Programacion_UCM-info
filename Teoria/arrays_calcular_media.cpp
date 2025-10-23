/**
 * Calcular la media de 10 numeros enteros introducidos por teclado
 * y almacenados en un array de 10 elementos.
 */
#include <iostream>
using namespace std;

const int MAX = 10;
void introducirNumerosArray(int mediaNumeros[MAX]);
float calcularMedia(int mediaNumeros[MAX], int suma);
int main(){
    int mediaNumeros[MAX], suma = 0 ;
    float media;

    introducirNumerosArray(mediaNumeros);
    media = calcularMedia(mediaNumeros, suma);

    cout << "La media de mi array es: " << media << endl;

    return 0;
}

void introducirNumerosArray( int mediaNumeros[MAX] ){
    for(int i = 0; i < MAX; i++){
        cout << "Introduzca el numero " << i + 1 << " del array: ";
        cin >> mediaNumeros[i];
    }
}

float calcularMedia(int mediaNumeros[MAX], int suma){
    for(int i = 0; i < MAX; i++){
        suma += mediaNumeros[i];
    }
    return static_cast<float>(suma) / MAX;
}
