#include <iostream>
#include <string>
using namespace std;

// mengenal string
// string merupakan kumpulan char/huruf
// untuk operasi string tambahkan standar library string

int main(){
	char huruf[5] = {'m','o','b','i','l'};
	cout << huruf << endl;

	// diatas contoh penggunaan char
	// bandingkan dengan string
	cout << endl;
	
	// berikut cara membuat string
	string nama_depan("Udin");

	// menggunakan inisialisasi
	string nama_belakang = "Saputra";

	// menggunakan deklarasi
	string kata;

	cout << "Masukan kata : ";
	cin >> kata;
	cout << kata << endl;
	cout << nama_depan << ' ';
	cout << nama_belakang << endl;


	// catatan ketika menggunakan input untuk string
	// saat kita menggunakan spasi yang akan ditampilkan
	// kata pertama saja, so string sama seperti char array

	return 0;
}