#include <iostream>
using namespace std;

class angka
{
    private:
    int *arr;
    int panjang;

    public:
    angka(int);  // Constructor
    ~angka();     // Destructor
    void cetakData();
    void isiData();
};

angka::angka(int i) {
    panjang = i;
    arr = new int[i];
    isiData();
}

angka::~angka() {
    cout << endl;
    cetakData();
    delete[] arr;
    cout << "Alamat Array Sudah Dilepaskan" << endl;
}

void angka::cetakData()
{
    for (int i = 0; i <= panjang; i++)
    {
        cout << i << "=" << arr[i] << endl;
    }
}

void angka::isiData()
{
    for (int i = 0; i <= panjang; i++)
    {
        cout << i << " = ";
        cin >> arr[i];
    }
    cout << endl;
}

int main()
{
    angka belajarcpp(3);                    // Constructor Terpanggil
    angka *ptrBelajarcpp = new angka(5);    // Constructor Terpanggil
    delete ptrBelajarcpp;                   // Destructor Terpanggil

    return 0;
}