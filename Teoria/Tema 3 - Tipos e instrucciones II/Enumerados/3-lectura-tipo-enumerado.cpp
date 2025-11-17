/**
 * Ahora realizaremos una lectura del tipo enumerado, esto con una opcion que de el usuario.
 * Recordar que deberemos castar ese valor para que funcione.
 * 
 * Tambien es importante recordar que de resultado no obtendremos el valor del tipo enumerado
 * sino que obtendremos el valor de la posicion de dicho valor del tipo de dato enumerado.
 * 
 * Para obtener el valor simplemente deberemos hacer un switch segun la opcion que escoga el usuario o ifs anidados.
 */
#include <iostream>
#include <string>
#include <iomanip>
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

    cout << " 1 - Enero" << endl;
    cout << " 2 - Febrero" << endl;
    cout << " 3 - Marzo" << endl;
    cout << " 4 - Abril" << endl;
    cout << " 5 - Mayo" << endl;
    cout << " 6 - Junio" << endl;
    cout << " 7 - Julio" << endl;
    cout << " 8 - Agosto" << endl;
    cout << " 9 - Septiembre" << endl;
    cout << "10 - Octubre" << endl;
    cout << "11 - Noviembre" << endl;
    cout << "12 - Diciembre" << endl;
    cout << "Numero de mes: ";
    cin >> opcionUser;
    
    mes = tMes(opcionUser - 1); // ya que si ponemos 12, dara 11 cuyo valor es diciembre en el tipo de dato enumerado.

    return 0;
}