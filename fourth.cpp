// this
#include <iostream>
using namespace std;

class Buku {
    string judul;
    public:
        string setget(string judul) {
            this->judul = judul; // nilai parameter 'judul' untuk member variabel 'judul'
            return this->judul; // return nilai member variabel 'judul'
        }
};

int main() {
    Buku b;
    cout << b.setget("Matematika");

    return 0;
}