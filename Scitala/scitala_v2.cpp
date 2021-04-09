#include<iostream>

#include<stdlib.h>

#include<string>


//Roberto Juan Cayro Cuadros

using namespace std;


const int clv_1=3, clv_2=4, largo=12 ;


//const int ;


class encriptando{






public:
    string clave="34";








    int conta_f = 0;
    int conta_c = 0;

     int contador=0;

    string mensaje_aux = "            ";


    string mensaje_final = "            ";



    string cifrado(int filas, int columnas,string mensaje){


        string mensaje_oculto ;


     string str1 = "   ";
    string str2 = "   ";
    string str3 = "   ";
    string str4 = "   ";

    for (int i=0; i<clv_1; i=i+1){

            str1[i] = mensaje[i];


    }

    for (int i=0; i<clv_1; i=i+1){

            str2[i] = mensaje[i+3];


    }

    for (int i=0; i<clv_1; i=i+1){

            str3[i] = mensaje[i+6];


    }

    for (int i=0; i<clv_1; i=i+1){

            str4[i] = mensaje[i+9];


    }

for (int j=0; j<clv_1; j=j+1){

        mensaje_oculto = mensaje_oculto + str1[j] +str2[j] +str3[j]+str4[j];


}


return mensaje_oculto;



    }


   string descifrado(int filas, int columnas,string mensaje_oculto){

       int posicion =0;

       string salida= "            ";

       int cont=0;


       string sfr1 = "   ";
    string sfr2 = "   ";
    string sfr3 = "   ";
    string sfr4 = "   ";






          for (int i=0; i<12; i=i+4){


           sfr1[posicion]= mensaje_oculto[i] ;
           posicion=posicion+1;


          }

          posicion =0;

           for (int i=1; i<12; i=i+4){


           sfr2[posicion]= mensaje_oculto[i] ;
           posicion=posicion+1;


          }

          posicion =0;



           for (int i=2; i<12; i=i+4){


           sfr3[posicion]= mensaje_oculto[i] ;
           posicion=posicion+1;


          }

          posicion =0;



           for (int i=3; i<12; i=i+4){


           sfr4[posicion]= mensaje_oculto[i] ;
           posicion=posicion+1;


          }




          cout << endl <<sfr1;

          cout << endl <<sfr2;
          cout << endl <<sfr3;
          cout << endl <<sfr4;


          for (int k=0; k<3; k=k+1){

                salida[k] = sfr1[cont];
                cont =cont+1;
          }

          cont=0;

          for (int k=3; k<6; k=k+1){

                salida[k] = sfr2[cont];
                cont =cont+1;
          }

          cont=0;


          for (int k=6; k<9; k=k+1){

                salida[k] = sfr3[cont];
                cont =cont+1;
          }

          cont=0;


          for (int k=9; k<12; k=k+1){

                salida[k] = sfr4[cont];
                cont =cont+1;
          }

          return salida;


   }




};



encriptando emisor;
encriptando receptor;


int main(){



    string mensaje= "hola que tal";

    string mensaje_oculto;

    string mensaje_final;


    //mensaje_oculto= emisor.cifrando(mensaje);

    mensaje_oculto = emisor.cifrado(clv_1,clv_2,mensaje);

    cout << mensaje_oculto;

    //mensaje_final =  receptor.descifrando(mensaje_oculto);

    receptor.descifrado(clv_1,clv_2, mensaje_oculto);





}
