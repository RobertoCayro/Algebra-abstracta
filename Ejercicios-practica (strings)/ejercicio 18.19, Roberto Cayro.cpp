// 18.19 insertar caracteres -Roberto Juan Cayro Cuadros
#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

string insertar(string palabra){
string caracteres = "******";
string aux;
int a=0;
int b=0;
int mitad = (palabra.length())/2;

string espacio;


for (int i=0; i< palabra.length(); i++){
        aux = aux + " ";

}

for (int j=0; j<caracteres.length(); j++){
    aux =aux + " ";


}


for (int k=0; k<mitad; k++){
    aux[k] = palabra[k];
}

for (int l=mitad; l < caracteres.length(); l++){

    aux[l] = '*';
    b=b+1;
}

for (int m=(mitad+caracteres.length()); m < aux.length(); m++){


    aux[m]=palabra[mitad+a];
    a=a+1;
}

cout << aux;
return aux;




}

int main(){

    string palabra = "porque";

    insertar(palabra);


}
