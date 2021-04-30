#ifndef CLASES_H_INCLUDED
#define CLASES_H_INCLUDED

#include"funciones.cpp"
#include<iostream>
#include<time.h>
#include<stdlib.h>


int euclides(int a, int b);
int clave_a_e(int b);
int clave_b_e(int c);
int posicion(string mensaje);
int modulo(int a, int b);




class afin{
public:
    int a;
    int b;
    int clave_a;
    int clave_b;
    string alfabeto;
    string mensaje;


//primer construtor
afin(string alfa, string msg){
    alfabeto = alfa;
    clave_a = clave_a_e(alfabeto.length());
    clave_b = clave_b_e(alfabeto.length());
    cout << endl<<"clave_a =  "<<clave_a << endl <<  "clave_b = "<<clave_b;
}

afin(int a, int b,string alfa){
    this ->a = a;
    this ->b = b;
    alfabeto = alfa;
    int c= alfabeto.length();
    clave_a = inversa(a,c);
    clave_b = b;
    cout << endl<<"clave_a =  "<<clave_a << endl <<  "clave_b = "<<clave_b;

}



string cifrado(string mensaje, string alfabeto){
    int p;
    int nueva_p;
    string salida;
    cout << endl << endl;

    for (int i=0; i< mensaje.length(); i++){
        p = posicion(mensaje[i], alfabeto);
         nueva_p = modulo((clave_a*(p) + clave_b) , alfabeto.length());
         salida=salida+alfabeto[nueva_p];

    cout << nueva_p << " ";
    }

    cout << endl << "salida : "<<salida;
    return salida;

}


string descifrado(string alfabeto, string mensaje){
    int p;
    int nueva_p;
    int p_1;
    int p_2;
    int p_3;
    string salida;


    for (int i=0; i< mensaje.length(); i++){
            p=posicion(mensaje[i],alfabeto);
            p_1 = p-clave_b;

            //cout <<  "p_1= "<<p_1 << "; "  ;

            //si la resta resulta negativa llamamos a la funcion modulo para encontrar el inverso
            if (p_1 < 0){
                p_2 = modulo(p_1,alfabeto.length());
            }

            else {
                p_2 = p_1;


            }
            // p_2 ya seria la inversa de p_1 en caso haya sido engativo

            cout <<  "p_2= "<<p_2 << ";" ;

            p_3 = p_2*clave_a;

            cout <<  "p_3= "<<p_3 << ";" ;

            nueva_p = modulo(p_3,alfabeto.length());



            cout <<  "nueva_p= "<<nueva_p << ";" ;



            //cout << "..n_p " << nueva_p << " ";

            //cout << nueva_p;

            salida = salida+alfabeto[nueva_p];




    }

    cout << endl << "salida= " << salida ;

    return salida;



}



};



#endif // CLASES_H_INCLUDED
