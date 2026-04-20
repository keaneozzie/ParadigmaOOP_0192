#include <iostream>
using namespace std;

class Mahasiswa{
    string nama;
    string nim;
    public:
    float nilai;

     void printdata(){
        cout<< " << nim " << endl;
        cout << " << nama" << endl;
        cout << " << nilai" << endl;
    }
}; //batas class

int main(){
    Mahasiswa mhs;
    mhs.nim = 2022;
    mhs.nama = "abra"; 
    mhs.nilai = 90.5;

    mhs.printdata();
}