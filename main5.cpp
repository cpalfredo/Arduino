#include <iostream>

using namespace std;

int main () {
    int lista [] = { 200 , 100 , 300} ; 
    int limite = sizeof(lista) / sizeof(lista[0]);
    cout << "limite: ";
    cin >> limite ;
    lista [1];
    for (int i = 0; i < limite; i += 1){
        cout << lista[i] << endl ;
        if (lista[i]){
            break;
        }
     }
}