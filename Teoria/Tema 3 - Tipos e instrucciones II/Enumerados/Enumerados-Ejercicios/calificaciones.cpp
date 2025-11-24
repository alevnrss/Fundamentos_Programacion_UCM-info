/**
 * Declara un tipo enumerado tCalificacion con los valores noPresentado, suspenso, aprobado,
 * notable, sobresaliente y matriculaDeHonor.
 *
 * Luego, declara dos variables nota1 y nota2, y
 * lee en ellas dos calificaciones numéricas de 0 a 10 (con un decimal).
 *
 * Asigna dos variables calif1 y calif2, de tipo tCalificacion,
 * el valor que les corresponda, de acuerdo con los valores de las correspondientes variables
 * numéricas (0:noPresentado).
 *
 * Finalmente, muestra cada nota numérica seguida de la calificación textual que le
 * corresponde (sólo mostrará las calificaciones si ambas notas están entre 0 y 10). El programa usará las funciones
 * adecuadas.
 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

typedef enum
{
    noPresentado,
    suspenso,
    aprobado,
    notable,
    sobresaliente,
    matriculaDeHonor
} tCalificacion;

tCalificacion conversionNotaNumerica(float nota);
string calificacionToString(tCalificacion calificacion);

int main()
{
    float nota1 = -1, nota2 = -1;

    while ((nota1 < 0 || nota1 > 10) || (nota2 < 0 || nota2 > 10))
    {
        cout << "Ingresa la primera nota, recuerda que debe ser en el intervalo de 0 a 10 , 0 = noPresentado" << endl;
        cin >> nota1;
        cout << "Ingresa la segunda nota, recuerda que debe ser en el intervalo de 0 a 10 , 0 = noPresentado" << endl;
        cin >> nota2;

        if ((nota1 < 0 || nota1 > 10) || (nota2 < 0 || nota2 > 10))
        {
            cout << "Ingrese una nota dentro del intervalo correspondido" << endl;
        }
    }

    tCalificacion calif1 = conversionNotaNumerica(nota1);
    tCalificacion calif2 = conversionNotaNumerica(nota2);

    cout << "\nA continuacion se muestran las calificaciones:\n";
    cout << "1. Nota 1 = " << nota1 << " -> " << calificacionToString(calif1) << endl;
    cout << "2. Nota 2 = " << nota2 << " -> " << calificacionToString(calif2) << endl;

    return 0;
}

tCalificacion conversionNotaNumerica(float nota)
{
    if (nota == 0)
        return noPresentado;

    if (nota > 0 && nota < 5)
        return suspenso;

    if (nota >= 5 && nota < 7)
        return aprobado;

    if (nota >= 7 && nota < 9)
        return notable;

    if (nota >= 9 && nota < 10)
        return sobresaliente;

    if (nota == 10)
        return matriculaDeHonor;

    return suspenso; // por si acaso
}

string calificacionToString(tCalificacion calificacion)
{
    switch (calificacion)
    {
    case noPresentado:
        return "no presentado";
        break;
    case suspenso:
        return "suspenso";
        break;
    case aprobado:
        return "aprobado";
        break;
    case notable:
        return "notable";
        break;
    case sobresaliente:
        return "sobresaliente";
        break;
    case matriculaDeHonor:
        return "matricula de honor";
        break;
    }

    return "";
}