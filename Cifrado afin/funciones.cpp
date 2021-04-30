#include"clases.h"




#include<iostream>
#include<time.h>
using namespace std;



int euclides(int a, int b);
int clave_a_e(int b);
int clave_b_e(int c);
int posicion(string mensaje);
int modulo(int a, int b);


int euclides(int a, int b){





    int r;

    int q;
// residuo

r =  a%b;

//

q = a/b;

if (q < 0 && r<0){

q =  q -1;

r = r+b;



}


//cout << endl << a << "= " << q << "*" << b << " + " << r;



if (r == 0){

        //cout << endl << endl <<"MCD = " << b;

    return b;
}

euclides(b,r);

}



int clave_a_e(int b){
    srand(time(NULL));
    int num;
    int a = rand()% b;
    num = euclides(a,b);

    while( num != 1){
        a = rand()%b;
        num = euclides(a,b);
    }
        a=17;

    return a;


}


int clave_b_e(int c){
    srand(time(NULL));

    int num;
    int a = rand()% c;

    a=25;


    return a;


}



int inversa(int a, int b){

    int mod;

    //    ax  + by = d

    //int a = 550;
    //int b = 210;

    //int d = euclides(a,b);
    int d=1;


    int r1 = a;
    int r2 = b;

    int s1 = 1;
    int s2 = 0;

    int t1 = 0;
    int t2 = 1;

    int q;
    int r;
    int s;
    int t;


    while(r2 >0){

            q= r1/r2;

    r = r1 -(q*r2);
    r1 = r2;
    r2 =r;

    s = s1 -(q*s2);
    s1 = s2;
    s2 =s;

    t = t1 -(q*t2);
    t1 = t2;
    t2 =t;


    }


    //cout << endl <<"x= "<<s1 << endl << "y= " << t1<< endl << t1;

    if (s1 < 0){

        //modulo


        mod = modulo(s1,b);
        return mod;
    }

else{

    return s1;
}




}




int posicion(char l, string alfabeto){

    for (int j=0; j< alfabeto.length(); j++){
        if (l == alfabeto[j]){
            return j;
        }
    }
}


int modulo(int a, int b){
    int r;

    int q;
// residuo

r =  a%b;

//

q = a/b;

if (q < 0 && r<0){

q =  q -1;

r = r+b;



}


if (-a < b){
            r= b+a;

    }


if ( a > 0 && b>0){
        r = a%b;
    }

if( a == 0){
    r = 0;
}

return r;

}

