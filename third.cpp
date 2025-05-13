// constructor overloading
#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
    private:
        int nim;
        string nama;
    public:
        Mahasiswa();
        Mahasiswa(int);
        Mahasiswa(string);
        Mahasiswa(int nim, string nama);
        void cetak();
};

Mahasiswa::Mahasiswa() {}

Mahasiswa::Mahasiswa(int inim) {
    nim = inim;
}

Mahasiswa::Mahasiswa(string inama) {
    nama = inama;
}

Mahasiswa::Mahasiswa(int inim, string inama) {
    nim = inim;
    nama = inama;
}

void Mahasiswa::cetak() {
    cout << "NIM    : " << nim << endl;
    cout << "Nama   : " << nama << endl;
}

int main() {
    Mahasiswa mhs1(5);
    Mahasiswa mhs2("Haidar");
    Mahasiswa mhs3(23, "Haidar");

    cout << "============================" << endl;
    cout << "Mahasiswa 1 : ";  cout << endl;
    mhs1.cetak(); cout << endl;
    cout << "Mahasiswa 2 : ";  cout << endl;
    mhs2.cetak(); cout << endl;
    cout << "Mahasiswa 3 : ";  cout << endl;
    mhs3.cetak();
    cout << "============================" << endl;


    return 0;
}