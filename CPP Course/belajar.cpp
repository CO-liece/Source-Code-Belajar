#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

const size_t sizeArr = 10;

// overloading printArray
void printArray(array <int, sizeArr> nilai){
    for (int loopArr : nilai){
        cout << loopArr << " ";
    }
    cout << endl;
}

void printArray(array <char, sizeArr> nilai){
    for (char loopArr : nilai){
        cout << loopArr << " ";
    }
    cout << endl;
}

int main(){
    array <int, sizeArr> nilaiARR = {1,9,7,8,6,3,2,4,0,5};
    array <char, sizeArr> charARR = {'a','c','e','f','d','h','g','l','k','j'};

    sort(nilaiARR.begin(), nilaiARR.end());
    printArray(nilaiARR);
    
    sort(charARR.begin(), charARR.end());
    printArray(charARR);

    system()
    return 0;
}