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
    void output_data()
    {
        cout << "Harga mobil: = " << harga_mobil << endl;
    }
};
int main()
{

    mobil rfiamar;
    rfiamar.input_data();
    cout << "Nama mobil: = " << rfiamar.nama_mobil << endl;
    cout << "Tipe mobil: = " << rfiamar.tipe_mobil << endl;
    rfiamar.output_data();
};
int main()
{
    mobil rfiamar;
    rfiamar.intput_data();
    cout << "Nama mobil: " << rfiamar.nama_mobil << endl;
    cout << "Tipe mobil: " << rfiamar.tipe_mobil << endl;
    rfiamar.output_data();
}
