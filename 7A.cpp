// NAME -SHIVENDRA DWIVEDI 
// PRN - 23070123122
// EXPERIMENT - 7(A) 

#include<iostream>
using namespace std; 

// Program to print an array. 
int main() {
    int i;
    int a1[5]={19, 20, 5, 6, 7};
    int a2[5]={5,6,9,0,6};
    cout<<"Array is: ";

    for(i=0; i<5; ++i) {
        cout<<"Array is: "<<a1[i]<<" "<<"\n";
    }
    for(i=0; i<5; ++i) {
        cout<<"Array is: "<<a2[i]<<" "<<"\n";
    }
    return 0;
}

// Array is: 19 
// Array is: 20
// Array is: 5
// Array is: 6
// Array is: 7
// Array is: 5
// Array is: 6
// Array is: 9
// Array is: 0
// Array is: 6
