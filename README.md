# LABORATORIOS:
    - Laboratorio 15 oct -> realizado (fstream, menus, switch, while)

# TEMA 2
---

## 📌 Funciones Matemáticas `#include <cmath>`.
Disponemos de las siguientes funciones matemáticas.
- `sqrt(x)` : *Raiz cuadrada*.  
- `pow(a,b)` : *Potencia de un numero*.
- `abs(x)`: *Valor absoluto de un numero entero*.
- `fabs(x)`: *Valor absoluto de un numero real o flotante*.

> Tambien tenemos el coseno, seno y tangente de un numero. `sen(x)`, `cos(x)` ,`tan(x)`.

*Ejemplo de funciones matematicas*
```cpp
#include <iostream>
#include <cmath>  // IMPORANTE LA CABECERA
using namespace std;

int main() {
    int a = 10, b = 3;
    cout << "Suma: " << a + b << endl;
    cout << "Resta: " << a - b << endl;
    cout << "Multiplicacion: " << a * b << endl;
    cout << "Division real: " << (double)a / b << endl;
    cout << "Modulo: " << a % b << endl;
    cout << "Raiz de 25: " << sqrt(25) << endl;
    cout << "2^5: " << pow(2, 5) << endl;
}

``` 

---
> CIN - Strings

## 📌 Diferencias entre `getline(cin, ...)` y `cin.get()` en C++.

En C++ existen varias formas de leer datos desde la entrada estándar, y es común que aparezcan problemas cuando se usa `getline` después de `cin >>`.  

Uno de los problemas mas comunes es querer leer con un getline despues de utilizar cin() y no haber limpiado el buffer.
Cuando nosotros pedimos al usuario una edad, el usuario escribe: 20ENTER. El enter es para introducir en dicha variable edad pero esto provoca que el buffer se encuentre con ese enter del usuario. 
Esto provoca que al utilizar el getline despues de ese cin no nos deje introducir ningun valor, pues el getline() lo que encuentra es ese espacio del enter.

>SOLUCION: *Introducir un git.ignore()*
```cpp
    int edad;
    string nombre;

    cin >> edad
    cin.ignore() // Limpiamos el buffer 

    getline(cin, nombre); // Buffer limpio, podemos introducir valores  

``` 

### 🔹 `getline(cin, variable)`

`getline` permite **leer una línea completa**, incluyendo **espacios**, hasta encontrar un **salto de línea** (`\n`).

```cpp
string nombre;
getline(cin, nombre);
```

### 🔹 `cin.get()`
`cin.get()` permite leer solamente **un unico caracter, espacios, o saltos de linea**.


---
# TEMA 3
---
> TIPO DE DATOS ENUMERADO

## 📌 Tipo de datos enumerado `typedef enum tEnum{};`.

- Este tipo de datos es de tipo de datos "SIMPLES" las cuales se encuentran definidos por el usuario.
- Se trata de un conjunto de constantes enteras (ENUMERADORES).
- El orden de estos enumeradores IMPORTA.

>*ESTRUCTURA DE UN ENUMERADO*
```cpp
    // Declaracion del tipo enumerado
    typedef enum tNombreTipo {enum1, enum2, enum3};
    // Declaracion de variables del tipo enumerado creado
    tNombreTipo variable1;
```

> *Es importante saber que los enumerados del tipo de dato enumerado estan ordenados con indices empezando desde 0 a n.*
```cpp
    typedef enum tSemana{lunes, martes, miercoles, jueves, viernes, sabado, domingo};
    // lunes = 0, martes = 1, miercoles = 2, ....
```
**IMPORANTE SABER QUE...**
> Se puede pensar que en el ENUM tSemana estamos guardando cadenas de caracteres(strings). Sin embargo, no es asi,
> lo que estamos guardando son numeros, donde a cada numero le corresponde una CONSTANTE.








---












Viernes 24 Octubre 2025
PDF - Tema3-Secuencias-Recorrido-Busqueda.pptx
>> IMPORANTE PARA MANEJAR BIEN LOS ARRAYS

Secuencia Explicita y Listas > Leidos por teclado o leidos por ficheros.
Importante para este apartado tener aprendido. 
<< LECTURA DE FICHEROS Y GUARDAR DATOS DEL FICHERO en un ARRAY >>

Lectura de fichero
    - EoF (End of File)
    - Centinela

Leida de teclado
    -Preguntar al usuario
    -Centinela

Al final de este documento nos da la diferencias de Recorrido y Busqueda, y dentro de estas, la diferencia de usar Recorrido con otras o con arrays(respectivamente Busqueda).

--- 

> FSTREAM- Lectura y escritura de ficheros .txt 

### 1. ¿Que es un centinela?
Un centinela es un valor especial dentro de los datos que indica el fin de la lectura.

En lugar de leer hasta el final del archivo con eof() (que a veces es confuso o poco fiable), el programa detecta un valor concreto y se detiene cuando lo encuentra.

Por ejemplo:

Si estás leyendo números, el centinela puede ser 0 o -1.

Si estás leyendo texto, podría ser "FIN" o "END".

### 2. FUNCION .find()
Esta funcion es importante cuando se trata de la busqueda de subcadenas dentro de una cadena de texto. En pocas palabras, busqueda de substrings.
Primero definimos como una variable CONSTANTE y STRING el valor de esa subcadena. 

Para decir que ha encontrado esa subcadena, dara el VALOR de la posicion desde donde empieza dicha variable constante.
Imaginamos por ejemplo JUAN, luego si tenemos "Juan Perez", la posicion al encontrarla sera 0.

Para poder hacer un contador simplemente cuando sea distinto a -1 es cuando lo habra encontrado pues cuando da -1 es que no ha encontrado nada y lo
que buscamos es que encuentre esos valores.


