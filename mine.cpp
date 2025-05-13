/*
    Buatlah sebuah class bernama bangunDatar yang memiliki
    member sebagai berikut:
    panjang, lebar, method hitungLuas dan hitungKeliling
    Buatlah class persegiPanjang
    Buatlah friend function untuk method hitungLuas dan hitungKeliling
    gunakan pointer untuk menggunakan method yang ada pada class
*/

#include <iostream>
using namespace std;

class BangunDatar {
    public:
        float panjang, lebar;

    private:
        float hitungLuas(BangunDatar *bd) {
            return bd->panjang * bd->lebar;
        }

        float hitungKeliling(BangunDatar *bd) {
            return 2 * (bd->panjang + bd->lebar);
        }

    public:
        void input(BangunDatar *bd);
        void output(BangunDatar *bd);

        friend class PersegiPanjang;
};

class PersegiPanjang {
    public:
        BangunDatar bd;

        friend float BangunDatar::hitungLuas(BangunDatar *bd);
        friend float BangunDatar::hitungKeliling(BangunDatar *bd);
};

void BangunDatar::input(BangunDatar *bd) {
    cout << "Masukkan panjang : ";
    cin >> bd->panjang;
    cout << "Masukkan lebar : ";
    cin >> bd->lebar;
}

void BangunDatar::output(BangunDatar *bd) {
    cout << "Luas : " << bd->hitungLuas(bd) << " cm" << endl;
    cout << "Keliling : " << bd->hitungKeliling(bd) << " cm" << endl;
}

int main() {
    PersegiPanjang pp;

    pp.bd.input(&pp.bd);
    pp.bd.output(&pp.bd);

    return 0;
}