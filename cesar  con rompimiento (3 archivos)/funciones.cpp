#include "clase.h"
#include<iostream>

using namespace std;

//Cifrado de Cesar- Roberto Juan Cayro Cuadros


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
