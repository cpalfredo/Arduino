#include <iostream> 

using namespace std;

int main (){

    int x = 0;
    int y = 0;

    cout << "ingresa tu primer cantidad a comparar: ";
    cin >> x ;
    cout << "ingresa tu segunda cantidad a comparar: ";
    cin >> y;

    if (x < y){
        cout << "la segunda cantidad es mayor que la primera" << endl;
        cout << x << endl ; 
        cout << y << endl ;
    } else if (x > y) {
        cout << "la primer cantidad es mayor que la segunda." << endl;
        cout << x << endl;
        cout << y << endl;
    }
}