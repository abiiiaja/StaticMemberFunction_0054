// Buatlah sebuah program C++ sederhana dengan constructor pada class Produk,
// di mana diminta untuk mengelola data inventaris toko yang memiliki
// atribut private berupa id produk dan nama produk dengan menyediakan
// empat metode inisialisasi objek, pertama menggunakan constructor tanpa parameter untuk nilai default,
// kedua hanya dengan parameter id, ketiga hanya dengan parameter nama, dan
// keempat dengan parameter lengkap, lalu tampilkan untuk menyajikan informasi produk yang telah dibuat sebelumnya.

#include <string>
#include <iostream>
using namespace std;

class Produk {
private:
    int id;
    string nama;

public:

    void tampilkan() {
        cout << "ID: " << id << endl;
        cout << "Nama: " << nama << endl;
        cout << endl;
    }

    // 1. Constructor tanpa parameter (default)
    Produk() {
        id = 14;
        nama = "Baju";
    }

    // 2. Constructor dengan parameter id
    Produk (int Pid){
        id=Pid;
        nama = "Meja";
    }

    // 3. Constructor dengan parameter nama
    Produk (string Pnama){
        id = 1;
        nama=Pnama;
    }

    // 4. Constructor dengan parameter lengkap
    Produk (int Pid,string Pnama){
        id=Pid;
        nama=Pnama;
    }

};

int main() {
    cout << "--- Daftar Inventaris Toko ---" << endl;
    
    // Inisialisasi objek menggunakan berbagai constructor
    Produk Produk1;
    Produk Produk2 (3);
    Produk Produk3 ("Meja");
    Produk Produk4 (4, "Kursi");

    // Menampilkan informasi produk
    Produk1.tampilkan();
    Produk2.tampilkan();
    Produk3.tampilkan();
    Produk4.tampilkan();

    return 0;
}