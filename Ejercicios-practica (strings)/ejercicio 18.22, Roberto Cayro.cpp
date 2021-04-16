// 18.22 ingreso de un mensaje y salida del reverso del mensaje -Roberto Juan Cayro Cuadros
#include<iostream>
#include<string>
#include<cstring>
#include<stdlib.h>

using namespace std;


int main(){


    string mensaje = "hola que tal";




    string :: const_iterator iterador_1 = mensaje.end()-1;


    while (iterador_1 != mensaje.begin()-1){
    cout << *iterador_1;
    iterador_1 = iterador_1-1;
    }


}
