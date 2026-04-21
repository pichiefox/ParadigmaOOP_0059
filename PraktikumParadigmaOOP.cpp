#include <iostream>
using namespace std;

class Barang{
    public:
        string nama;
        int jumlah;
        string kategori;
        string tanggalProduksi;

        void printData(){
            cout<<"Nama = "<< nama << endl;
            cout<<"Jumlah = "<< jumlah << endl;
            cout<<"Tanggal Produksi = "<< tanggalProduksi<< endl;
            cout<<"Kategogi = "<< kategori<< endl;
        }
};

int main(){
    Barang elektronik;
    Barang nonElektronik;

    elektronik.nama = "Kulkas electrolux";
    elektronik.jumlah = 10;
    elektronik.tanggalProduksi = "12-12-2025";
    elektronik.kategori = "Elektronik";
    elektronik.printData();

    nonElektronik.nama = "Meja";
    nonElektronik.jumlah = 10;
    nonElektronik.tanggalProduksi = "22-12-2025";
    nonElektronik.kategori = "nonElektronik";
    nonElektronik.printData();
}