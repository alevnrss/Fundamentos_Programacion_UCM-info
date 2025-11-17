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
    cout << "Introduzca un numero del 0 al 11" << endl;
    cin >> opcionUser;

    mes = tMes(opcionUser);

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
    cout << "Introduzca un numero del 0 al 6" << endl;
    cin >> opcionUser;

    dia = tDiaSemana(opcionUser);

    if (dia == jueves) cout << "Jueves" << endl;
    if (dia == sabado) cout << "Sabado" << endl;
    if (dia == domingo) cout << "Domingo" << endl;
    
    bool noLaborable = (dia >= sabado);

    if(noLaborable) cout << "Hoy es dia no laborable (fin de semana)" << endl;

    return 0;
}