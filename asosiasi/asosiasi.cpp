
#include <iostream>
#include <vector>
using namespace std;

class dokter;
class pasien {// asosiasi
public:
    string nama;
    vector<dokter*> daftar_dokter;
    pasien(string pNama) {
        cout << "Pasien \"" << nama << "\"ada\n";
    }
    ~pasien() {
        cout << "pasien \"" <<nama <<"\"tidak ada\n";
    }
    void tambahDokter(dokter*);
    void cetakDokter();
};


int main()
{
    std::cout << "Hello World!\n";
}

