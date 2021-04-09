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


    char matriz[clv_2][clv_1];

    char mattriz_aux[clv_1][clv_2];


    char matriz_descifrado[clv_2][clv_1];


    char matriz_aux2[clv_1][clv_2];



    int conta_f = 0;
    int conta_c = 0;

     int contador=0;

    string mensaje_aux = "            ";


    string mensaje_final = "            ";




    string cifrando(string mensaje){


        for(int i=0; i<largo; i=i+1){

                matriz[conta_f][conta_c] = mensaje[i];

                conta_c = conta_c+1;


        }

        conta_c = 0;




//imrpimir la primera matriz del mensaje original
        for(int x=0; x<clv_2; x++){
            for(int y=0; y<clv_1; y++){
                cout << matriz[x][y] << " ";
            }
            cout << endl;
        }


//cambiar a matriz auxiliar

        for(int x=0; x<clv_1; x++){
            for(int y=0; y<clv_2; y++){
                mattriz_aux[y][x]= matriz[y][x];
            }
            cout << endl;
        }



//imprimir matriz auxiliar

/*
        for(int x=0; x<3; x++){
            for(int y=0; y<4; y++){
                cout << mattriz_aux[y][x] << " ";
            }
            cout << endl;
        }

         cout << endl  << endl ;

*/


// asignar el mensaje oculto(mezclado) a un string auxiliar

          for(int x=0; x<clv_1; x++){
            for(int y=0; y<clv_2; y++){
                mensaje_aux[contador] = mattriz_aux[y][x];
                contador = contador+1;
            }
        }

                //cout << mensaje_aux;

        return mensaje_aux;

    }


    string descifrando(string mensaje_cifrado){

        //cout << "el descifrador funciona";


        // igual que puse el primer mensaje dentro de una matriz, de la misma forma lo hago con mi mensaje oculto

         for(int i=0; i<largo; i=i+1){

                matriz_aux2[conta_f][conta_c] = mensaje_cifrado[i];

                conta_c = conta_c+1;


        }


        cout << endl  << endl ;

        // imprimo la amtriz del mensaje oculto
        for(int x=0; x<clv_1; x++){
            for(int y=0; y<clv_2; y++){
                cout << matriz_aux2[x][y] << " ";
            }
            cout << endl;
        }

         cout << endl  << endl ;

        //igualo los valores de mi matriz_descifrado de mi matriz con el mensaje oculto, con el x e y cambiados de orden
          for(int x=0; x<clv_1; x++){
            for(int y=0; y<clv_2; y++){
                matriz_descifrado[y][x] = matriz_aux2[x][y] ;
            }
        }


        for(int x=0; x<clv_2; x++){
            for(int y=0; y<clv_1; y++){
                cout << matriz_descifrado[x][y] << " ";
            }
            cout << endl;
        }


          cout << endl  << endl ;

          contador=0;



          // añado a mi atring mensaje final letra por letra
 for(int x=0; x<clv_2; x++){
            for(int y=0; y<clv_1; y++){
                mensaje_final[contador] = matriz_descifrado[x][y];
                contador = contador+1;
            }
        }

                cout << mensaje_final;



  return mensaje_final;


    }






};



encriptando emisor;
encriptando receptor;


int main(){



    string mensaje= "hola que tal";

    string mensaje_oculto;

    string mensaje_final;


    mensaje_oculto= emisor.cifrando(mensaje);

    cout << mensaje_oculto;

    mensaje_final =  receptor.descifrando(mensaje_oculto);




}
