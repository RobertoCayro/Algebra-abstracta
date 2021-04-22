#include<iostream>

//Cifrado de Cesar- Roberto Juan Cayro Cuadros
using namespace std;


int division(int a, int b){

      int r;

    int q;


r =  a%b;
q = a/b;

if (q <= 0 && r<0){

q =  q -1;

r = r+b;
}

return r;

}


class cesar{
public:
    string mensaje;
    string alfabeto;
    int longitud = mensaje.length();
    int clave;


cesar(string m, string a, int c){

    mensaje = m;
    alfabeto = a;
    clave = c;
}


int buscador_p(char letra){


    for (int a=0; a<alfabeto.length(); a++){
            if (alfabeto[a] == letra){

                return a;
            }
    }

}



char buscar_c(int posicion){

    char letra;
    int n_clave;

    if (  (posicion+clave) > alfabeto.length()){

            n_clave = division((posicion+clave),alfabeto.length());
            letra = alfabeto[n_clave];

    }

    else{

        letra = alfabeto[posicion+clave];
    }

    return letra;


}

// funcion cifrador

string cifrador(string patron){


    for (int i=0; i< mensaje.length(); i=i+1){

            patron = patron + buscar_c(buscador_p(mensaje[i]));

    }

return patron;

}



char buscar_d(int posicion){

    char letra;
    int n_clave;

    if ((posicion-clave) < 0){

        n_clave = division((posicion-clave),alfabeto.length()  );
        letra = alfabeto[n_clave];

    }


    else{

        letra = alfabeto[posicion-clave];
    }

    return letra;

}




string descifrador(string patron,string mensaje){

    for (int i=0; i< mensaje.length(); i=i+1){

            patron = patron + buscar_d(buscador_p(mensaje[i]));

    }

return patron;



}

};



int main(){
    string mensaje = "paz";
    string alfabeto = "abcdefghijklmnopqrstuvwxyz ";
    int clave = 13;
    string patron;
    string cifrado;
    string descifrado;



cesar emisor = cesar(mensaje,alfabeto,clave);
cesar receptor= cesar(mensaje,alfabeto,clave);

cifrado = emisor.cifrador(patron);
descifrado = receptor.descifrador(patron,cifrado);


cout << cifrado << endl << descifrado;

}
