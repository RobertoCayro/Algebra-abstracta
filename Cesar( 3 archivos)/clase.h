#ifndef CLASE_H_INCLUDED
#define CLASE_H_INCLUDED

#include "funciones.cpp"

//Cifrado de Cesar- Roberto Juan Cayro Cuadros


int division(int a, int b);

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



#endif // CLASE_H_INCLUDED
