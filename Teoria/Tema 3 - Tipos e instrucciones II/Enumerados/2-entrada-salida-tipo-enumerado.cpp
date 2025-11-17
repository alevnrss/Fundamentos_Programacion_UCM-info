/**
 * Una vez definido un tipo de dato enumerado, podemos darles valores a las variables
 * segun a que valor del conjunto queramos asociarle.
 *
 * Si nosotros queremos darle un valor en la posicion 1, se debe poner el numero de la posicion en una variable a parte de tipo entero 
 * donde despues la castearemos a tipo enumerado. 
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    // Declaramos nuestra enumeracion, en este caso seran los meses del año.
    typedef enum
    {
        enero,
        febrero,
        marzo,
        abril,
        mayo,
        junio,
        julio,
        agosto,
        septiembre,
        octubre,
        noviembre,
        diciembre
    }tMes;

    // Declaramos nuestra variable que llevara el mes que nosotros ahora elegiremos
    tMes mes;
    int valorUsuario;
    cout << "Introduce un valor (entero) para poder dar valor a mes" << endl;
    cin >> valorUsuario;

    mes = tMes(valorUsuario); 
    
    // imprime un numero entero, para visualizar el mes podemos hacer un switch.
    cout << mes;
}