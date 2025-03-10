#include <iostream>
using namespace std;
 
float panjang, lebar ;//ver global

void inputdata(){
    cout << "Masukkan Panjangnya: ";
    cin >> panjang;

    cout << "Masukkan Lebarnya: ";
    cin >> lebar;

}

float fungsiLuas(){
    return panjang * lebar;
}

float hitungLuasBerparameter(float a, float b){
    return a * b;

}

void tampilkanFungsiLuas(){
    cout << "Luas persegi panjang (fungsi tidak berparameter): " << fungsiLuas()<< endl;
}

void tampilkanFungsiLuasBerparameter(){
    cout << "Luas persegi panjang (fungsi berparameter): " << hitungLuasBerparameter(panjang, lebar);
}

int main()
{
    inputdata();
    tampilkanFungsiLuas();
    tampilkanFungsiLuasBerparameter();
}