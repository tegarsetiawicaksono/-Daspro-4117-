#include <iostream>

using namespace std;

int main()
{

    //Fungsi cin digunakan untuk mengambil input data dari teks yang dituliskan.
    //Di Dalam perintah Cin membutuhkan variabel untuk menyimpan data yang diinputkan.

    cout << "--------------------------------------------------------------------- \n\n";
    cout << "\t\tHallo Semuaa!!! \n \n" << endl;
    // \t untuk memberikan tab

    string nama, nim, hobi;
    int umur;
    float tb;
    char jk;


    cout << "\tMasukan Nama           : ";
    getline (cin, nama);
    //getline berfungsi untuk menambahkan spasi antar kata

    cout << "\tMasukan NIM            : ";
    cin >> nim;

    cout << "\tMasukan Umur           : ";
    cin >> umur;

    cout << "\tTinggi Badan           : ";
    cin >> tb;

    cout << "\tJenis Kelamin          : ";
    cin >> jk;

    cout << "\tHobi                   : ";
    cin >> hobi;
    cout << "\n";

    cout << "\tPerkenalkan Nama Saya" << nama << "" << endl;
    cout << "\tNIM saya adalah " << nim << "." << endl;
    cout << "\tUsia saya sekarang " << umur << " tahun." << endl;
    cout << "\tTinggi badan saya adalah " << tb << " cm." << endl;
    cout << "\tJenis Kelamin saya " << jk << endl;
    cout << "\tHobi saya adalah " << hobi << ".\n" << endl;


    cout << "---------------------------------------------------------------------";
    return 0;
}
