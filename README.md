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

EXAMEN 5 Noviembre (TEMA 1,2,3).


> FSTREAM- Lectura y escritura de ficheros .txt 

### 1. ¿Que es un centinela?
Un centinela es un valor especial dentro de los datos que indica el fin de la lectura.

En lugar de leer hasta el final del archivo con eof() (que a veces es confuso o poco fiable), el programa detecta un valor concreto y se detiene cuando lo encuentra.

Por ejemplo:

Si estás leyendo números, el centinela puede ser 0 o -1.

Si estás leyendo texto, podría ser "FIN" o "END".

