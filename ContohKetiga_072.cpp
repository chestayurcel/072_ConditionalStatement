#include <iostream>
using namespace std;

int main(){
    string status;
    int nBilA, nBilB;
    srand(time(0));

    nBilA = rand() % 10;
    nBilB = rand() % 10;

    cout << "Tampilkan bilangan A = " << nBilA << endl;
    cout << "Tampilkan bilangan B = " << nBilB << endl;

    if(nBilA == nBilB){
        status = "bilangan A dan bilangan B sama besar";
    }
    else if(nBilA > nBilB){
        status = "bilangan A lebih besar dari bilangan B";
    }
    else{
        status = "bilangan A lebih kecil dari bilangan B";
    }
    cout << "Tampilkan Status = " << status << endl;

    return 0;

}