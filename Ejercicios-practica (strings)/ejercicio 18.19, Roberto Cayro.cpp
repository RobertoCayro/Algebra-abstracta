// 18.19 insertar caracteres -Roberto Juan Cayro Cuadros
#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;


int main(){

    string palabra = "porque";

    string caracteres = "******";


    int mitad = (palabra.length())/2;

    palabra.insert(mitad,caracteres);

    cout << palabra;


}
