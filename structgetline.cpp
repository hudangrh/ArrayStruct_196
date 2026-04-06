#include <iostream>
using namespace std;

struct detailAlamat
{
    string desa;
    string kecamatan;
}
struct orang
 {
    string nama;
    string alamat;
    int umur;
 };

int main() {
    orang mhs;
    cout << "nama : " ;
    getline(cin, mhs.nama);
    cout << "alamat desa : ";
    getline(cin, mhs.alamat.desa);
    cout << "alamat kota : ";
    getline(cin, mhs.alamat.kota);
    cout << "umur : ";
    cin >> mhs.umur;
    cout << endl;
    //tampilkan
    cout << " nama :" << mhs.nama << endl;
    cout << " desa :" << mhs.alamat.desa << endl;
    cout << " kota :" << mhs.alamat.kota << endl;
    cout << " umur :" << mhs.umur << endl;
}