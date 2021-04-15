// 18.27 ordenamiento por seleccion de strings -Roberto Juan Cayro Cuadros
#include<iostream>
#include<string>



using namespace std;;




string sort_seleccion(string palabras[], int n,string dire){


        if (dire == "descendiente"){


    int maximo;

    for (int i=0; i <n-1; i++){
    maximo=i;
    for (int j=0; j<n; j++){
        if (palabras[j] >  palabras[maximo]){
            maximo = j;
        }


    }
palabras[maximo].swap(palabras[i]);

}

for (int k=0; k<n; k++){
    cout << palabras[k] << " " ;
}


    }




    if (dire == "ascendente"){

    int minimo;

    for (int i=0; i <n-1; i++){
    minimo=i;
    for (int j=0; j<n; j++){
        if (palabras[j] <  palabras[minimo]){
            minimo = j;
        }


    }
palabras[minimo].swap(palabras[i]);

}

for (int k=0; k<n; k++){
    cout << palabras[k] << " " ;
}
    }









}


int main(){

    string palabras[3] = {"hola","que","tal"};


    sort_seleccion(palabras,3, "descendiente");

    //al llamar a la vez a la funciona solo funciona la que este primera


   // sort_seleccion(palabras,3, "ascendente");

}
