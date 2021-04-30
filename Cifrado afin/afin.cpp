#include<iostream>

#include"clases.h"


using namespace std;


int main(){
    string alfabeto = "abcdefghijklmnopqrstuvwxyz";
    string mensaje = "rapido" ;
    string cifrado;
    srand(time(NULL));

    cout << endl << endl<< "emisor";
    afin emisor = afin(alfabeto,mensaje);
    int a = emisor.clave_a;
    int b= emisor.clave_b;
    cifrado = emisor.cifrado(mensaje, alfabeto);





cout << endl << endl<< "receptor";
afin receptor = afin(a,b,alfabeto);
cout << endl;

receptor.descifrado(alfabeto,"uzedvfkztypvzfi");

}
