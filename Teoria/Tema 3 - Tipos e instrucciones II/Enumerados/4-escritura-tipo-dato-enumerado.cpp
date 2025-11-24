/**
 * Aqui comprobaremos que si nosotros metemos un numero, y despues le decimos que lo imprima debera ser segun el valor
 * que tenga la posicion del valor.
 *
 * En este caso se refiere a los meses del año, donde tenemos 12 meses.
 *
 * La poscion 0 es el mes de enero, la 1 es febrero...
 * 
 * Los tipos de datos enum tambien aceptan operadores logicos pero lo que no se puede hacer es incrementarles o decrementarles
 * valores, ya que aunque se digan que son numero enteros, no son enteros como tal.
 */
#include <iostream>
#include <string>
using namespace std;

int main()
{
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
    } tMes;

    tMes mes;
    int opcionUser;
    cout << "Introduzca un numero del 1 al 12" << endl;
    cin >> opcionUser;

    mes = tMes(opcionUser - 1);

    // es como decir, si mes == 0 , si mes == 1, ...
    if (mes == enero)
    {
        cout << "enero" << endl;
    }
    if (mes == febrero)
    {
        cout << "febrero" << endl;
    }
    if (mes == marzo)
    {
        cout << "marzo" << endl;
    }
    // ...



    /**
     * Aqui mostramos el resultado de como es que aceptan operadores logicos.
     * No se pueden incrementar.
     * 
     * Gracias a esto nos hace poder tener el codigo mas claro y limpio
     */
    typedef enum
    {
        lunes,
        martes,
        miercoles,
        jueves,
        viernes,
        sabado,
        domingo
    } tDiaSemana;

    tDiaSemana dia;
    cout << "Introduzca un numero del 1 al 7" << endl;
    cin >> opcionUser;

    // Para comprobar que el usuario a introducido el numero dentro del intervalo [1,7], deberemos 
    // hacer un if segun opcionUser. Si se cumple, entonces a dia le damos el valor de user casteado a 
    // uno de los valores del enum

    dia = tDiaSemana(opcionUser - 1);

    if (dia == jueves) cout << "Jueves" << endl;
    if (dia == sabado) cout << "Sabado" << endl;
    if (dia == domingo) cout << "Domingo" << endl;
    
    bool noLaborable = (dia == sabado || dia == domingo); // se convierte en TRUE

    if(noLaborable) cout << "Hoy es dia no laborable (fin de semana)" << endl;  // si es true,entonces no dira que es dia no laboral

    return 0;
}