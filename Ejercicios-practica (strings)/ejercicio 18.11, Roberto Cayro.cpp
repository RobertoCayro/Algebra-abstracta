// 18.11 - concatenacion de nombre y apellido -Roberto Juan Cayro Cuadros
#include<iostream>
#include<string>

using namespace std;

/*
string concatenar(string nombre, string apellido){

        string salida = nombre.append(apellido);
        return salida;
}
*/
int main(){

string nom;
string apell;
string nomb_completo;

cout << "Nombre : ";
cin >> nom;
cout << endl;
cout << "Apellido: ";
cin >> apell;

nomb_completo = nom.append(apell);

cout << endl << nomb_completo;

}
