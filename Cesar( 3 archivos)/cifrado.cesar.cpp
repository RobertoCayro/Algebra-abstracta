#include<iostream>

//Cifrado de Cesar- Roberto Juan Cayro Cuadros



#include "clase.h"


using namespace std;

int main(){
    string mensaje = "paz";
    string alfabeto = "abcdefghijklmnopqrstuvwxyz ";
    int clave = 25;
    string patron;
    string cifrado;
    string descifrado;



cesar emisor = cesar(mensaje,alfabeto,clave);
cesar receptor= cesar(mensaje,alfabeto,clave);

cifrado = emisor.cifrador(patron);
descifrado = receptor.descifrador(patron,cifrado);


descifrado = receptor.descifrador(patron,"az zjjmybcykzp");  //clave 25


cout << cifrado << endl << descifrado;

}
