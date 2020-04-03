#include <algorithm>
#include <iostream>
#include <array>
using namespace std;

const size_t jml_arr = 10;

// prototyping
void printArray(array <int, jml_arr> nilaiARR);


int main(){
	int mencari, nilai;
	array <int, jml_arr> nilaiARR = {1,9,7,4,5,3,2,0,6,8};
	// sebelum di-sorting
	printArray(nilaiARR);

	cout << endl << endl;

	// sesudah di-sorting
	sort(nilaiARR.begin(), nilaiARR.end());
	printArray(nilaiARR);

	cout << endl << endl;
	
	// searching index array
	cout << "Mencari nilai pada array : ";
	cin >> nilai;
	mencari = binary_search(nilaiARR.begin(), nilaiARR.end(), nilai);

	// kondisi
	if (mencari){
		cout << "Ada" << endl;
	} else {
		cout << "Tidak Ada" << endl;
	}

	cout << endl;
	return 0;
}


void printArray(array <int, jml_arr> nilaiARR){
	for (int data : nilaiARR){
		cout << data << " ";
	}
}
