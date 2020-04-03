#include <iostream>
using namespace std;

int main(){

	// deklarasi
	int n,f_n,f_n1,f_n2;

	cout << "Masukan nilai n : ";
	cin >> n;

	f_n1 = 1;
	f_n2 = 0;

	for (int i = 1; i <= n; i++){
		f_n = f_n2 + f_n1; // 1
		f_n2 = f_n1;	   // 
		f_n1 = f_n; // 

		cout << f_n << endl;
	}
	/* code */
	return 0;
}