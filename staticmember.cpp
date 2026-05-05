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

void Mahasiswa::printAll() {
    
    cout << "ID : " << id << endl;
    cout << "Nama : " << nama << endl;
    cout << endl;
};

int main(){
    Mahasiswa mhs1("Lia Kurnia");
    Mahasiswa mhs2("Fawwaz Sratus");
    Mahasiswa mhs3("Andi Kurniawan");
    Mahasiswa mhs4("Bagas Satya Widhi");

    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();
}