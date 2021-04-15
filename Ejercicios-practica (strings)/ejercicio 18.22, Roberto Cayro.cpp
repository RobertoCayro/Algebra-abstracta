// 18.22 ingreso de un mensaje y salida del reverso del mensaje -Roberto Juan Cayro Cuadros
#include<iostream>
#include<string>
#include<cstring>
#include<stdlib.h>

using namespace std;


string reverso(string mensaje){
string aux;
int regreso = mensaje.length()-1;


for (int i=0; i<mensaje.length(); i++){
    aux = aux + " ";
}


for (int j=0; j<mensaje.length() ; j++){
        aux[j]=mensaje[regreso];
regreso = regreso-1;

}


return aux;
}
int main(){


    string mensaje = "hola que tal";
    string volteado = reverso(mensaje);
cout << mensaje;
    cout << endl <<volteado;


}
