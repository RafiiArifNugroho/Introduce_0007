#include <iostream>
using namespace std;

class mobil
{
public:
    string nama_mobil;
    string tipe_mobil;

private:
    int input_data()
    {
        cout << "Masukkan nama mobil: ";
        cin >> nama_mobil;
        cout << "Masukkan tipe mobil: ";
        cin >> tipe_mobil;
        cout << "Masukkan harga mobil: ";
        cin >> harga_mobil;
    }
