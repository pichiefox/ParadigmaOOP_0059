#include < iostrem>
using namespace std:

class Mahasiswa{
    public:
        int nim;
        string nama;
        float nilai;
        void printData(){
            cout<<"NIM = "<< nim << endl;
            cout<<"Nama = "<< nama << endl;
            cout<<"Nilai = "<< nilai << endl;
        }
}

int main(){
    Mahasiswa mhs1;
    
    mhs1.nim = 111;
    mhs.nama = "Joko Susilo";
    mhs.nilai = 75.5;
}