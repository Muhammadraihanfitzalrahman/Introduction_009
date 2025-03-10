#include <iostream>
using namespace std;

float luas, panjang, lebar;

void inputData(){
    cout << "Msukkan panjangnya =";
    cin >>panjang;

    cout << "Masukkan Lebar = ";
    cin >> lebar;
}

void prosedurLuas (){
    luas = panjang * lebar;
}

void tampilkanLuas(){
    cout << "Luas persegi panjang =" << luas << endl;

}

int main ()
{
    inputData();
    prosedurLuas();
    tampilkanLuas();
}