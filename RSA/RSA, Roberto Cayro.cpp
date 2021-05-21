#include <iostream>
#include<time.h>
#include<math.h>
using namespace std;
int euclides(int a, int b);
int primos(int a);
int primos1(int a);
int publica(int a);
int ext_euclides(int a, int b);
int modulo(int a, int b);
int inversa(int a, int b);
int exp_modular(int a, int exp, int mod);




class RSA{

private:
  int k_privada; //
  int p;
  int q;
  int phi_N; //φN

public:
  int k_publica;
  int N;

// RECEPTOR
RSA(){
//PUBLICA
p=primos1(100);
q=primos(100);
N = p*q;
phi_N = (p-1)*(q-1);
k_publica = publica(phi_N);


  cout << "clave publica (" << k_publica << "," << N << ")";

  cout << endl << endl;


//PRIVADA

  k_privada = inversa(k_publica,phi_N);

  cout << "clave privada (" << k_privada << "," << N << ")";


  }

//EMISOR
RSA(int k_publica, int N){
  this->k_publica = k_publica;
  this->N = N;
}

int cifrar(){
  int num = 549;

  int cifrado = exp_modular(num,k_publica,N);

  return cifrado;
}

int descifrar(int c){
  int num = c;

  int descifrado = exp_modular(num,k_privada,N);

  return descifrado;
}






};


int main() {

  RSA uno = RSA();

  RSA dos = RSA(uno.k_publica,uno.N);

  int aux = dos.cifrar();



  int aux2 = uno.descifrar(aux);


  cout << endl << endl <<aux<<" ; "<<aux2;


}






int primos(int a){
  srand(time(NULL));
  int contador=0;
  int encontrado=0;
  int b;

  while (encontrado ==0){
  b = rand()% a;



  if(b%b==0){
    contador++;
  }

  if(b%2==0){
    contador++;
  }

  if(b%3==0){
    contador++;
  }

  if(b%4==0){
    contador++;
  }

  if(b%5==0){
    contador++;
  }

    if(b%7==0){
    contador++;
  }
     if(b%8==0){
    contador++;
  }
     if(b%9==0){
    contador++;
  }

  if (contador == 1){
    encontrado =1;
  }

    contador =0;
}
   //cout << b << endl;
  return b;
  }


int primos1(int a){
  srand(time(NULL));
  int contador=0;
  int encontrado=0;
  int b;

  while (encontrado ==0){
  b = rand()% a+1;



  if(b%b==0){
    contador++;
  }

  if(b%2==0){
    contador++;
  }

  if(b%3==0){
    contador++;
  }

  if(b%4==0){
    contador++;
  }

  if(b%5==0){
    contador++;
  }

    if(b%7==0){
    contador++;
  }
     if(b%8==0){
    contador++;
  }
     if(b%9==0){
    contador++;
  }

  if (contador == 1){
    encontrado =1;
  }

    contador =0;
}
   //cout << b << endl;
  return b;
  }



int euclides(int a, int b){
  int r;
  int q;

r =  a%b;
q= a/b;


if (q < 0 && r<0){
  q =  q -1;
  r = r+b;
    }

  if (r == 0){
return b;
    }

 return  euclides(b,r);

  }


int publica(int a){

  srand(time(NULL));

  int b;
  b = rand()% a+1;

  int p = euclides(b,a);

  while (p != 1){
    b = rand()% a+1;
    p = euclides(b,a);
  }

  return b;
}


int ext_euclides(int a, int b){

    int mod;
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


        mod = modulo(s1,b);
        return mod;
    }

else{

    return s1;
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

  int inversa(int a, int b){
    int i;
    i = ext_euclides(a,b);
    return i;
  }



int exp_modular(int a, int exp, int mod){
  int respuesta = 0;
  int contador=1;

  int aux=a;
  int aux2;
  int aux3=a;
  int n=exp;
  int acumulado = a%mod;
  aux=acumulado;
  int guardado=acumulado;
  int n_mod=n%2;
  int cont=0;


    acumulado = a%mod;
    guardado = acumulado;
    cont++;

  while (n/2 != 0){


    if(n%2 ==1 && cont >1){

      guardado = (aux3*acumulado)%mod;
      acumulado = guardado;
    }


//cout << a << "("<<contador<<") "<< "; n= " <<n<< " ;residuo de n= "<< n%2<< " el_mod(731)= " << aux  <<" ; acumulados= " <<acumulado << " ; n/2= " << n/2 ;
//cout <<"residuon="<< n%2 <<" ;aux3= "<<aux3<<" acumulado = "<< acumulado <<" guardado= "<<guardado <<endl << endl;

    cont++;
    aux2 = pow(aux,2);
    aux3 = aux2%mod;
    aux = aux3;
   contador = contador*2;


  n = n/2;
    }

  if(n%2 ==1 && cont >1){
      guardado = (aux3*acumulado)%mod;
      acumulado = guardado;
    }
respuesta = guardado;
return respuesta;

}

