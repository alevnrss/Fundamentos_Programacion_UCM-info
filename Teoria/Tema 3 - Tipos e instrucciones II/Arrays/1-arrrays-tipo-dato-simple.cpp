/**
 * Los arrays son colecciones de elementos del MISMO TIPO DE DATO.
 * 
 * Los elementos del array se encuentran almacenados de manera ordenada en una memoria contigua, en una posicion llamada INDICE.
 *  - Los indices siempre seran positivos, el indice del primer elemento siempre sera el numero 0 y ademas los indices se incrementan de 1 en 1.
 *  - A cada elemento se accede a traves de sus indices.
 * 
 * Los arrays son de tamaño fijo, aunque despues podremos variar su tamaño gracias a los structs y lograr hacer
 * unas listas de tamaño variable.
 * 
 * 
 */

#include <iostream>
#include <string>
using namespace std;

int main(){

    // Siempre definiremos el valor del tamaño del array como un valor de tipo constante entero. Pues nunca podra variar de tamaño.
    const int MAX = 10;

    // Los arrays se pueden declarar de dos maneras: Como array o como tipos definidos por el usuario.
    // Ambas definiciones hacen lo mismo, aunque la mejor praxis sera inicializarlo mediante tipo de dato definido por el usuario.
    
    // ARRAY DEFINIDO POR EL USUARIO
    typedef int tArray_def_user[MAX];
    tArray_def_user arrayTemperatura;       // Aqui la variable arrayTemperatura sera de tipo array de enteros. Sin inicializar.

    // ARRAY DEFINIDO COMO ARRAY SIMPLE
    float tVentas[MAX];                     // Aqui la variable tVentas sera un array de tipo float. Sin inicializar.
    

    // Inicializacion de Arrays.
    // Los arrays se pueden inicializar de varias dos maneras: Inicializandolo mediante corchetes o permitir al usuario meter valores a sus indices.

    // ARRAY INICIALIZADO POR CORCHETES
    tArray_def_user array1 = { 1 , 2 , 3  , 4 , 5 , 6 , 7 , 8 , 9 , 10 };   // Aqui el array se ha inicializado con los elementos que puede guardar
    // Es importante saber que no puede guardar mas de 10.

    // ARRAY INICIALIZADO POR EL USUARIO (BUCLE FOR)
    // Siempre tendra esta estructura. Es importante no olvidar, que para acceder a el indice(POSICION) del array se pone como nombreArray[indice];
    for(int i = 0 ; i < MAX ; i++){
        cin >> arrayTemperatura[i];
    }   

    // MOSTRAR ELEMENTOS DE UN ARRY
    // Para mostrar los elementos de un arrya es lo mismo que rellenarlo, simplemente cambiaria que en vez de tener que introducir elementos, se muestran.
    for(int i = 0; i < MAX ; i++){
        cout << arrayTemperatura[i];
    }

    
    return 0;
}