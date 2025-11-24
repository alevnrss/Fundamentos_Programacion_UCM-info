/**
 * A continuacion se mostrara un ejercicio que nos dira que monedas tenemos en el bolsillo.
 * Para entenderlo mejor, si tenemos un euro, un centimo y una moneda de dos centimos, entonces
 * tenemos tres monedas que se mostraran por pantalla
 *
 * Este ejercicio dara uso de los tipos de dato enumerados y que el array guardara esos valores de tipo de dato enumerado.
 * Importante recordar que para poder imprimir el valor del tipo de dato enumerado, lo tendremos que pasar a cadena
 * mediante una funcion que transforme el valor de la moneda y nos devuelva un string.
 */

#include <iostream>
using namespace std;

typedef enum
{
    centimo,
    dos_centimos,
    cinco_centimos,
    diez_centimos,
    veinte_centimos,
    medio_euro,
    euro
} tMoneda; // en total tenemos unos 7 tipos de monedas

const int CAPACIDAD_CARTERA = 10;
typedef tMoneda tArray_de_monedas[CAPACIDAD_CARTERA];

string toString(tMoneda moneda);

int main()
{
    const int MONEDAS_INSERTADAS = 4;   // si no ponemos cuantas monedas hemos insertado, nuestra funcion toString
    // no sabra que leer, es decir, leera basura, por lo que siempre deberemos decirle que lea lo que hemos insertado.

    int contador_monedas = 0;
    tArray_de_monedas cartera;

    // Meter una serie de monedas; lo ideal seria que el usuario lo meta, pero lo haremos para una cierta cantidad
    cartera[0] = centimo;
    cartera[1] = medio_euro;
    cartera[2] = euro;
    cartera[3] = diez_centimos;

    // imprimimos lo que tenemos en nuestra cartera

    cout << "En la cartera tenemos: " << endl;
    for (int i = 0; i < MONEDAS_INSERTADAS; i++)
    {
        cout << "Una moneda de " << toString(cartera[i]) << endl;
        contador_monedas++;
    }

    cout << "En total tenemos: " << contador_monedas << " monedas en nuestra cartera" << endl;

    return 0;
}

string toString(tMoneda moneda)
{
    string cadena;

    switch (moneda)
    {
    case centimo:
        cadena = "centimo";
        break;

    case dos_centimos:
        cadena = "dos centimos";
        break;

    case cinco_centimos:
        cadena = "cinco centimos";
        break;

    case diez_centimos:
        cadena = "diez centimos";
        break;

    case veinte_centimos:
        cadena = "veinte centimos";
        break;

    case medio_euro:
        cadena = "cincuenta centimos";
        break;

    case euro:
        cadena = "euro";
        break;
    }

    return cadena;
}