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
       cout << "TanggalProduksi : " << tanggalproduksi << endl;
    }
}; //batas class 

int main(){
    Barang elektronik;
    elektronik.nama = "Handphone";
    elektronik.jumlah = 10;
    elektronik.kategori = "komunikasi";
    elektronik.tanggalproduksi = "19 oktober 2019";

    Barang NonElektronik;
    NonElektronik.nama = "meja";
    NonElektronik.jumlah = 5;
    NonElektronik.kategori = "fasilitas";
    NonElektronik.tanggalproduksi = "25 desember 2015";

    elektronik.printData();
    NonElektronik.printData();
}



