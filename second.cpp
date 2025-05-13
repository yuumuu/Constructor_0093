// constructor parameter
#include <iostream>
using namespace std;

class Mahasiswa {
    public:
        Mahasiswa(int nim, string nama); // constructor dengan parameter
};

// definisi constructor dengan parameter
Mahasiswa::Mahasiswa(int nim, string nama) {
    cout << "Constructor Dengan Parameter Terpanggil" <<  endl;
    cout << "NIM    : " << nim << endl;
    cout << "Nama   : " << nama << endl;
}

int main() {
    Mahasiswa mhs(12345, "Haidar"); // memanggil constructor dengan parameter
    return 0;
}