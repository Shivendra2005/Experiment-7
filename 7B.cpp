// NAME - SHIVENDRA DWIVEDI 
// PRN -23070123122
// EXPERIMENT - 7(B) 

#include <iostream>
#define S 4
using namespace std;

int main() {
    int array1[S];
    //take input from user
    cout << "Enter " << S << " elements of array: ";
    for (int index = 0; index < S; index++) {
        cin >> array1[index];
    }
  cout << endl;

    // display entered array ekements
    for (int j : array1) {
        cout << j << "  ";
    }

   return 0;
}

// Enter 4 elements of array: 3
// 4
// 5
// 6
//
// 3  4  5  6
