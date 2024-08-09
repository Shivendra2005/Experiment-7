// NAME -SHIVENDRA DWIVEDI 
// PRN - 23070123122
// EXPERIMENT - 7 (F) 

// Finding minimum and maximum element of an array.          

#include<iostream> 
using namespace std; 

int main() {
    int n, i, max=0;  
    cout<<"Enter the number of elements: ";
    cin>>n;
    int a[n];
    for(i=0; i<n; i++) 
    {
        cout<<"Element "<<i<<" is: ";
        cin>>a[i];
    }
    for (i=0;i<n; i++) 
    {
        if (a[i]>max) 
        {
            max=a[i];
        }
    }
    int  min=a[0]; 
    for (i=0; i<n;i++) 
    {
        if (min>a[i]) 
        {
            min=a[i];
        }
    }
    cout<<"Maximum: "<<max<<"\n"<<"Minimum: "<<min;
}

// Enter the number of elements: 4
// Element 0 is: 6
// Element 1 is: 7
// Element 2 is: 89
// Element 3 is: 23
// Maximum: 89
// Minimum: 6