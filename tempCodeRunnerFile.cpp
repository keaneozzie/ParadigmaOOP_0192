#include <iostream>
using namespace std;

class Mahasiswa{
    string Nama;
    string Nim;
    public:
    float nilai;

    void printData(){
        cout << "NIM : " << Nim << endl;
        cout << "Nama : " << Nama << endl;
        cout << "Nilai : " << nilai << endl;
    }
}; // batas class

int main(){
    Mahasiswa mhs;
    mhs.Nim = 2000;
    mhs.Nama = "Alex"
    mhs.nilai = 100;

    mhs.printData();
}

   