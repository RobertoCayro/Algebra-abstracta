#include<iostream>

#include<stdlib.h>

#include <string>


using namespace std;

const int clave = 3;

//FUNCIONES
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


//CLASES

class encriptando{


public:


string cifrado(string patron, string mensaje){

    string encriptacion;

string str1 = rellenar(14);
string str2 = rellenar(14);
string str3 = rellenar(14);



for (int i=0; i<14; i=i+1){


        if (patron[i] == '1'){

            str1[i] = mensaje[i];
        }

        if (patron[i] == '2'){

            str2[i] = mensaje[i];
        }

        if (patron[i] == '3'){

            str3[i] = mensaje[i];
        }



}

encriptacion = str1+str2+str3;

return encriptacion;
}


string descifrado(string mensaje_oculto,string patron){

    string cfr1 =rellenar(14);
    string cfr2=rellenar(14);
    string cfr3=rellenar(14);

     string salida=rellenar(14);

    //cout << mensaje_oculto[0];

    for (int k=0; k<14; k=k+1){
        cfr1[k] = mensaje_oculto[k];

    }



 for (int k=0; k<14; k=k+1){
        cfr2[k] = mensaje_oculto[k+14];

    }



 for (int k=0; k<14; k=k+1){
        cfr3[k] = mensaje_oculto[k+28];

    }




for (int i=0; i<14; i=i+1){


        if (patron[i] == '1'){

             salida[i] = cfr1[i] ;
        }

        if (patron[i] == '2'){

            salida[i] = cfr2[i] ;
        }

        if (patron[i] == '3'){

           salida[i] = cfr3[i] ;
        }



}

return salida;


}

};


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
