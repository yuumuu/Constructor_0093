// constructor
#include <iostream>
using namespace std;

class Mahasiswa {
    public:
    Mahasiswa();
};

Mahasiswa::Mahasiswa() {
    cout << "Constructor Terpanggil" << endl; // definisi constructor
}

int main() {
    Mahasiswa mhs; // pembuatan object

    return 0;
}