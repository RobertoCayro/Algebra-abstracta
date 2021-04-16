//ROBERTO JUAN CAYRO CUADROS


#include<iostream>

#include<string>


using namespace std;


int main(){



int numero;

cout << "ingrese numero de bloques: ";
cin >> numero;


cout << endl;
string palabra = "intente analizar mas profundamente los mensajes recibidos";





string nuevo_str;

//cin >> palabra

string aux;





int j=0;





//parte A,B,C del ejercicio


while ( j < palabra.length()){



    for (int i=j; i<j+numero; i=i+1){


           // cout << i << endl;

        cout << palabra[i] ;
    }

    cout << endl;

    j = j+numero;

}

cout << endl << endl << endl;

int contador=0;
int contador_2=0;


// parte E del ejercicio

j=0;


while ( j < palabra.length()){



    for (int i=j; i<j+numero; i=i+1){

            aux = palabra[i];

        nuevo_str.append(aux) ;


    }

    nuevo_str.append("*");

    j = j+numero;
    contador = contador+1;

}


cout << nuevo_str;


string vector_[contador];

string aux_2;


//parte F


while ( j < palabra.length()){



    for (int i=j; i<j+numero; i=i+1){


           aux= aux + palabra[i];

    }


     vector_[contador_2] = aux;

    j = j+numero;
    contador_2 = contador_2+1;

}



}
