#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED


#include "funciones.cpp"

using namespace std;


string rellenar( int tamano);
string pa_tron(int clve, int tamano);


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



#endif // FUNCIONES_H_INCLUDED
