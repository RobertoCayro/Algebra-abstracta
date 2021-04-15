// 18.21 reeemplazar puntuacion con espacios -Roberto Juan Cayro Cuadros
#include<iostream>
#include<string>
#include<cstring>
#include<stdlib.h>

using namespace std;



const int l= 23;
/*

char cambiaso(char &mensaje){




for (int i=0; i<l;i++){

    if ( mensaje[i] == ';' || mensaje[i] == ',' || mensaje[i] == '.' || mensaje[i] == ':'){
        mensaje[i] = ' ';
    }
}


return mensaje;





}
*/

int main(){

char mensaje[] = "hola;que;tal;como;estas";


char *tok_ptr;

tok_ptr=strtok(mensaje, ";");


while( tok_ptr != NULL){

    cout << tok_ptr << endl;
    tok_ptr=strtok(NULL,";");
}





}
