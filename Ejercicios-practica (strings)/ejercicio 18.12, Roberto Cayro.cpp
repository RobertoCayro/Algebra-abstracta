// 18.12- ahorcado -Roberto Juan Cayro Cuadros
#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;


string cifrador(string mensaje){

    string mensaje_oculto;

for (int i=0; i< mensaje.length(); i++){

 mensaje_oculto = mensaje_oculto + "X";
}


return mensaje_oculto;
}


string colgado(int contador);



string dibujante(string mensaje_oculto,string palabra){


    system("cls");

    char letra;
    int intentos =0;
    int fallo;

    while ( intentos < 8){

            colgado(intentos);

            if (intentos == 7){
                cout << endl <<"GAME OVER" ;
                intentos = 8;
                break;

            }


            for (int j=0; j< mensaje_oculto.length(); j++){
                    cout << mensaje_oculto[j];
            }




            cout << endl << "ingresar letra: ";

            cin >> letra;


            for (int j=0; j< mensaje_oculto.length(); j++){
                    if(letra == palabra[j]){
                        mensaje_oculto[j] = palabra[j];
                        fallo = 0;
                    }
            }


           if( fallo = 1){
                        intentos = intentos+1;
                    }

                    fallo = 1;

    }



    return palabra;

}


int main(){

    string palabra = "hola";

    dibujante(cifrador(palabra),palabra);





}




string colgado(int contador){

    cout << contador;

    cout << endl << endl;

    if (contador == 1){
             cout << " 0" << endl;
            cout << " " << endl;
            cout << "   " << endl;
            cout << "   " <<endl ;

    }

    if (contador == 2){

            cout << "  0  " << endl;
            cout << "  |  " << endl;
            cout << "   " << endl;
            cout << "   " <<endl ;
    }

    if (contador == 3){

            cout << "  0  " << endl;
            cout << "  |]" << endl;
            cout << "   " << endl;
            cout << "   " <<endl ;
    }

    if (contador == 4){

            cout << "  0  " << endl;
            cout << " [|]" << endl;
            cout << "   " << endl;
            cout << "   " <<endl ;
    }

    if (contador == 5){

            cout << "  0  " << endl;
            cout << " [|]" << endl;
            cout << "  | " << endl;
            cout << "    " <<endl ;
    }

    if (contador == 6){

            cout << "  0  " << endl;
            cout << " [|]" << endl;
            cout << "  | " << endl;
            cout << "   [" <<endl ;
    }

    if (contador == 7){

            cout << "  0  " << endl;
            cout << " [|]" << endl;
            cout << "  | " << endl;
            cout << " ] [" <<endl ;
    }
    cout << endl << endl;


}
