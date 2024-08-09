// NAME -SHIVENDRA DWIVEDI 
// PRN - 23070123122
// EXPERIMENT - 7(D) 
// Search an element in array. 
#include<iostream>
using namespace std;

int main() {
    int marks[5], i, j, num, a=0, count=0;
    for(i=0;i<5;i++) {
        cout<<"Enter element-"<<i+1<<": ";
        cin>>marks[i];
    }
    cout<<"Enter element to be searched: ";
    cin>>num;
    for(j=0;j<5;j++) {
        if(marks[j]==num) {
            cout<<"Position of "<<num<<": "<<j+1<<endl;
            count++;
            a=1;
        }
    }
    if(a==0) {
        cout<<"Element not present";
    }
    else if(a==1) {
        cout<<"Element is present: "<<count<<" times";
    }
}

// Enter element-1: 36
// Enter element-2: 4
// Enter element-3: 3 
// Enter element-4: 45
// Enter element-5: 67
// Enter element to be searched: 5
// Element not present
// PS C:\Users\dell\AppData\Local\Temp>