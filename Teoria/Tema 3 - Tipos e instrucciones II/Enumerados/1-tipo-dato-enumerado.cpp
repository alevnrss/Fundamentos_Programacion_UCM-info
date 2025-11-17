/**
 * Las enumeraciones contiene como el propio nombre indica, una enumeracion del conjunto
 * de posibles valores que pueden tomal las variables. (Valores literales)
 *
 * Dos enumeraciones no pueden contener las mismas variables
 *
 * Las enumeraciones internamente usan numeros (int) que son las posiciones de los valorse que hay en el enumerado
 * empezando por el 0 a n.
 *
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{

    typedef enum tMonedas
    {
        centimo,
        dos_centimos,
        cinco_centimos,
        diez_centimos,
        veinte_centimos,
        medio_euro,
        euro
    };

    // definimos dos variables al que le pondremos el tipo de dato definido por el usuario.
    tMonedas moneda1, moneda2;
    moneda1 = dos_centimos;
    moneda2 = euro;

    // El valor de dichas variables ya declaradas son enteros, saldra el numero de la posicion de su valor asignado.
    cout << "Valor de la moneda 1: " << moneda1 << " Valor de la moneda 2. " << moneda2;

    return 0;
}
