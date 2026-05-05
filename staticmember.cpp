#include <iostream>
using namespace std;

class Mahasiswa{ //membuat class mahasiswa
public:
    static int nim; //deklarasi variabel static yaitu variabel nim
    int id;
    string nama;

    void setID();
    void printAll();

    Mahasiswa(string pnama) :nama(pnama) {
    setID();
    }
};

int Mahasiswa::nim = 10;

void Mahasiswa::setID() {
    id = ++nim;
};