#include<iostream>

#include<stdlib.h>


#include<string>

#include "funciones.h"




const int clave = 3;


using namespace std;







encriptando emisor;
encriptando receptor;



int main(){

string patron=pa_tron(clave,14);

string mensaje="MENSAJE OCULTO";

string mensaje_cifrado;

string mensaje_final;

//cout << patron;


mensaje_cifrado = emisor.cifrado(patron,mensaje);

cout << mensaje_cifrado << endl;


mensaje_final=receptor.descifrado(mensaje_cifrado,patron);

cout << mensaje_final << endl;

}
