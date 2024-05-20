
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

class dokter {
public:
    string nama;
    vector<pasien*> daftar_pasien;

    dokter(string pNama) :nama(pNama) {
        cout << "Dokter \"" << nama << "\" ada\n";
    }
    ~dokter() {
        cout << "Dokter \"" << nama << "\" tidak ada\n";
    }

    void tambahpasien(pasien*);
    void cetakpasien();
};




int main()
{
    std::cout << "Hello World!\n";
}

