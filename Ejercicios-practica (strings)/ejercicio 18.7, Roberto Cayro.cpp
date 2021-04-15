// 18.7- cifrado simple -Roberto Juan Cayro Cuadros
#include<iostream>
#include<string>

using namespace std;


char buscador(string alfabeto, char letra){


    for (int a=0; a<alfabeto.length(); a++){
            if (alfabeto[a] == letra){

                    //cout << a << endl;


                return a;
            }
    }
}


char buscador_n(string alfabeto, int posicion,int clave){

      char letra;
      int n_clave;

      if ((posicion+clave) > alfabeto.length()){


            n_clave= (posicion+clave)-alfabeto.length();
            letra = alfabeto[n_clave];


      }

      else{

            letra = alfabeto[posicion+clave];

      }



      return letra;



}




char buscador_n2(string alfabeto, int posicion,int clave){

      char letra;
      int n_clave;

      if ((posicion-clave) < 0){


            n_clave= alfabeto.length()+(posicion-clave);
            letra = alfabeto[n_clave];


      }

      else{

            letra = alfabeto[posicion-clave];

      }



      return letra;



}


string b_patron(int longitud,string patron,string alfabeto,string mensaje,int clave){


    for (int i=0; i< longitud; i++){

            patron = patron + buscador_n(alfabeto,buscador(alfabeto,mensaje[i]), clave);

    }


    cout << patron;
    return patron;


}

string b_patron2(int longitud,string patron,string alfabeto,string mensaje,int clave){


    for (int i=0; i< longitud; i++){

            patron = patron + buscador_n2(alfabeto,buscador(alfabeto,mensaje[i]), clave);

    }


    cout << patron;
    return patron;


}




int main (){


    string alfabeto = "abcdefghijklmnopqrstuvwxyz ";

    string mensaje = "hola que tal";



    int longitud = mensaje.length();
    int letra;
    int clave=13;
    string patron;
    string cifrado;
    string descifrado;


    cifrado = b_patron(longitud,patron,alfabeto, mensaje,clave);

    cout << endl;



         b_patron2(longitud,patron,alfabeto,cifrado,clave);

    //cifrado

}
