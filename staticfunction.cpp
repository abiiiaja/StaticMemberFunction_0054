#include <iostream>
#include <string> // Menyertakan library string
using namespace std;

class Mahasiswa{
private:
    static int nim;

public:
    int id;
    string nama;

    void setID();
    void printAll();

    static void setNim(int pnim) {
        nim = pnim;
    }

    static int getNim() {
        return nim;
    }

};