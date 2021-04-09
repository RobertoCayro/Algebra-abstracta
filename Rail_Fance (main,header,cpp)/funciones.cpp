#include "funciones.h"

#include<iostream>


using namespace std;


string rellenar( int tamano){

    string vacio;

    for (int i=0; i<tamano; i=i+1){


        vacio = vacio + " ";
    }

    return vacio;
}

string pa_tron(int clve, int tamano){

string dire = "derecha";

string pat;


int num_ = 0;


for (int j=0; j<tamano; j =j+1){
    if (dire == "derecha"){
            num_ =num_+1;

    if (num_ == clve+1){
        dire = "izquierda";
        num_ =num_-1;
    }

    }

        if (dire == "izquierda"){
            num_ =num_-1;

    if (num_ == 1){
        dire = "derecha";
    }

    }

    pat= pat + to_string(num_);
}

return pat;
}

