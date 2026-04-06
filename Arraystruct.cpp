#include <iostream>
using namespace std;

int main() {
    // deklarasi dengan inisialisasi
    int aku[5] = {10,20,30,40,50};
    // deklrasi array tanpa inisialisasi
    int kamu[5];
    // tampilkan data
    cout << "Data pada index 1 = " << aku[1] << endl;
    // ganti index 1
    aku[1] = 200
    cout << endl;
    cout << "data pada index 1 = " << aku[1] << endl;
    // mengisi satu persatu
    cout << "data index 0 = ";
    cin >> kamu[0];
    cout << "data index 1 = ";
    cin >> kamu[1];
    cout << "data index 2 = ";
    cin >> kamu[2];
    cout << "data index 3 = ";
    cin >> kamu[3];
    cout << "data index 4 = ";
    cin >> kamu[4];
    cout << endl;
    // menampilkan satu persatu
    cout << "Data pertama = " << kamu[0] << endl;
    cout << "Data kedua = " << kamu[1] << endl;
    cout << "Data ketiga = " << kamu[3] << endl;
    cout << "Data keempat = " << kamu[4] << endl;
    cout << "Data kelima = " << kamu[5] << endl;
    cout << endl;

    
}