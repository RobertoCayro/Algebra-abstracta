#include<iostream>

//Cifrado de Cesar- Roberto Juan Cayro Cuadros



#include "clase.h"


using namespace std;

int main(){
    string mensaje = "hola que tal";
    string alfabeto = "abcdefghijklmnopqrstuvwxyz ";
    int clave = 9;
    string patron;
    string cifrado;
    string descifrado;



cesar emisor = cesar(mensaje,alfabeto,clave);
cesar receptor= cesar(mensaje,alfabeto,clave);
cesar receptor_rompimiento = cesar(mensaje,alfabeto);

cifrado = emisor.cifrador(patron);


//descifrado = receptor.descifrador(patron,frplgdcfdoohmhud,clave);


//cout  << cifrado << endl << descifrado;


//descifrado = receptor.descifrador(patron,"klqhugtajohg hylhgbveghgssvyhygdk");  //clave 25


receptor_rompimiento.rompimiento("jxytdfgzwwnit",patron);




}
