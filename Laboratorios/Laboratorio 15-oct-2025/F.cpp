/**
Crea un fichero de texto llamado grupos .txt
Este fichero tendra una ser

*/

#include <iostream> 
#include <fstream>
#include <string>
using namespace std;

ifstream archivo;

int main(){
    archivo.open("grupos.txt");

    int grupo;
    string nombre1;
    string nombre2;
    const string BUSCA = "Juan";
    int juanes = 0;
    
    if(archivo.is_open()){
        archivo>> grupo;
        archivo.ignore();
        getline(archivo, nombre1);
        getline(archivo, nombre2);
        while(grupo != 0){
            cout<<"Grupo : "<< grupo << endl << "\t Alumno 1: " << nombre1 << endl << "\t Alumno 2: " << nombre2 << endl;
            if(nombre1.find(BUSCA)!=-1){
                juanes++;
            }
            if(nombre2.find(BUSCA)!=-1){
                juanes++;
            }
            archivo>> grupo;
            archivo.ignore();
            getline(archivo, nombre1);
            getline(archivo, nombre2);
        }
        cout<< juanes << endl;
        archivo.close();
    }else cout <<"error"<< endl;

    return 0;
}