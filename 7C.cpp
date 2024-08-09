// NAME - SHIVENDRA DWIVEDI
// PRN -23070123122
// EXPERIMENT - 7(C)
#include<iostream>
using namespace std; 

int main() {
    int i,n;
    cout<<"Enter the size of array: ";
    cin>> n;
    int a[n]; 
    //create array
    for(i=0;i<n;i++)
    {
        cout<<"Enter elements "<<i+1<<": ";
        cin>>a[i];
    }
    //display input array
     cout<<"Array entered by the user is: ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"";
    }

    //reverse array
    cout<<"\n Reverse of the entered array is: "; 
    for (i=n-1; i>=0; i--) {
        cout<<a[i]<<"";
    }
    return 0; 
}

// Enter the size of array: 5
// Enter elements 1: 4
// Enter elements 2: 5
// Enter elements 3: 6
// Enter elements 4: 3
// Enter elements 5: 7
// Array entered by the user is: 45637
//  Reverse of the entered array is: 73654
