/*
Programa_3: servir� para calcular el area de un rectangulo
Estructura: secuencial
Autor: Luis Alberto Garc�a Rodr�guez
N� lista: 11
Fecha: 4 de febrero del 2015
*/
#include <stdlib.h>
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    float A, B, C;

    cout<<endl;
    cout<<"Calculadora del area de un rectangulo"<<endl<<endl;
    cout<<"Base del rectangulo:    ";
    cin>>A;
    cout<<endl;
    cin.ignore();
    cout<<"Altura del rectangulo:  ";
    cin>>B;
    cout<<endl;
    cin.ignore();
    C=A*B;
    cout<<"Area del rectangulo=    ";
    cout<<C;
    cout<<endl<<endl;

    system ("pause");

    return 0;

}
