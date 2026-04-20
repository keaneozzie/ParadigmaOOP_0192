#include <iostream>
using namespace std;

class Barang{
    public :
    string nama;
    int jumlah;
    string kategori;
    string tanggalproduksi;

    void printData(){
        cout << "Nama : " << nama << endl;
        cout << "Jumlah : " << jumlah << endl;
        cout << "Kategori : " << kategori << endl;
        cout << "TanggalProduksi : " << tanggalProduksi << endl;
    }
}; //batas class

int main(){
    Barang elektronik;
    elektronik.nama = "Handphone";
    elektronik.jumlah = 10;
    elektronik.kategori = "Komunikasi";
    elektronik.tanggalProduksi = "14-Desember-2019";
    elektronik.printData();
    cout << endl;
    



