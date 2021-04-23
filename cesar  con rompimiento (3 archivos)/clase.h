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


cesar(string m, string a){

    mensaje = m;
    alfabeto = a;
    clave = 0;
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

    if (  (posicion+clave) >= alfabeto.length()){

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



char buscar_d(int posicion,int clave){

    char letra;
    int n_clave;

    if ((posicion-clave) <= 0){

        n_clave = division((posicion-clave),alfabeto.length()  );
        letra = alfabeto[n_clave];

    }


    else{

        letra = alfabeto[posicion-clave];
    }

    return letra;

}




string descifrador(string patron,string mensaje, int clave){

    for (int i=0; i< mensaje.length(); i=i+1){

            patron = patron + buscar_d(buscador_p(mensaje[i]),clave);

    }

return patron;



}


//rompimiento

char mayor(string palabra){



string alfabeto ="abcdefghijklmnopqrstuvwxyz";
int tamano = alfabeto.length();

int contador[tamano];

int mayor =0;
char letra;

for (int i=0; i< alfabeto.length(); i=i+1){
    contador[i]= 0;
}

int posicion;

int j;

for (int i=0; i< palabra.length(); i=i+1){


for( j=0; j<alfabeto.length(); j=j+1){

    if (palabra[i] == alfabeto[j]){

        posicion = j;
    }


}




if (contador[posicion] == 0){


for (int k=0; k< palabra.length(); k=k+1){

    if (palabra[i] == palabra[k] ){
        contador[posicion] = contador[posicion]+1;
    }
}
}
}


int l;

for ( l=0; l< alfabeto.length(); l=l+1){

        //cout << contador[l] << " ";
        if (contador[l]> mayor){
            mayor = contador[l];
            letra = l;
        }



}

//cout << endl <<mayor << " " << letra << " " << alfabeto[letra] ;


return alfabeto[letra];


}



string rompimiento(string mensaje,string patron){

char mayor_ = mayor(mensaje);

int pos_a = 0; // para la letra a
int pos_e = 4; // para la letra e
int pos_i = 8; // para la letra i
int pos_o = 14; // para la letra o
int pos_u = 20; // para la letra u
int clave_a;
int clave_e;
int clave_i;
int clave_o;
int clave_u;
int pos_m;


for (int i=0; i<alfabeto.length(); i=i+1){

    if (alfabeto[i] == mayor_){
            pos_m = i;

    }
}

clave_a= pos_m-pos_a;
clave_e= pos_m-pos_e;
clave_i= pos_m-pos_i;
clave_o= pos_m-pos_o;
clave_u= pos_m-pos_u;


cout << endl;
cout << descifrador(patron,mensaje,clave_a);
cout << endl;
cout <<descifrador(patron,mensaje,clave_e);
cout << endl;
cout <<descifrador(patron,mensaje,clave_i);
cout << endl;
cout <<descifrador(patron,mensaje,clave_o);
cout << endl;
cout <<descifrador(patron,mensaje,clave_u);
cout << endl;

}

};



#endif // CLASE_H_INCLUDED
