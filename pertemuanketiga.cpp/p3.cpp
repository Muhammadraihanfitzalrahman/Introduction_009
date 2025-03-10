#include <iostream>
using namespace std;

float hitungRerata(int x, int y){
    return (x+y)/2;
}

string statusKelulusan(float a){
    if (a >= 75)
        return "LULUS";
    else
        return "GAGAL";
}

int main(){ //begin
    //numeric nilai1, nilai2,rerata;
    int nilai1, nilai2;
    float rerata;
    //character status;
    string status;

    //display "masukkan nilai pertama"
    cout << "masukkan nilai pertama: ";
    //accept nilai1
    cin >> nilai1;
    //display "masukkan nilai kedua: "
    cout << "masukkan nilai kedua: ";
    //accept nilai
    cin >> nilai2;
    

    //rerata = (nilai1+nilai2)/2;

    //if (rerata >= 75)
    //    status = "LULUS";
    //else
    //    status = "GAGAL";

    //display "status kelulusan =" + status
    cout << "status kelulusan: " << statusKelulusan(hitungRerata(nilai1, nilai2));
}