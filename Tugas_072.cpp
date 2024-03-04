#include <iostream>
using namespace std;

int main(){
    string status;
    int nMTK, nFIS, nRerata;

    cout << "Masukkan Nilai Matematika = ";
    cin >> nMTK;

    cout << "Masukkan Nilai Fisika = ";
    cin >> nFIS;
    nRerata = nMTK + nFIS / 2;

    if(nRerata >= 60){
        status = "Lulus";
    }
    else if(nMTK >= 70){
        status = "Lulus";
    }
    else{
        status = "Tidak Lulus";
    }
    cout << "Tampilkan Status = " << status << endl;

    return 0;
}