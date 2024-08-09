# To study and implement C++ Arrays and Strings

Aim -> To study and implement C++ Arrays and Strings. <br> 

Software -> Visual Studio Code <br> 
 
Theory -> <br> 
Array: <br> 
•  An arry is a fixed-size sequential collection of the elemnts of same data type. It consists of continuous memory locations.<br> 
                 •	The array's indexes begin at 0. Meaning that the first item saved at index 0 is [0]. <br> 
                 •  The final element of an array with size n is kept at index (n-1).     <br> 

Strings: <br> 
• A string is a sequence of characters that is used as an object of a class. <br>  
• String class defines a number of functionalities that allow manifold operations on strings. <br> 

Code: <br> 

(A) <br> 
```
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
```
(B) <br> 
```
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

```
(C) <br>
```
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
```
(D) <br> 
```
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

```
(E.1)<br>
```
#include <iostream>
using namespace std;

int main() {
    
  // declare and initialize an array 
  double numbers[] = {7.5, 2.5, 3.6, 5.12, 7.35, 24.27};

  double sum = 0.0;
  double count = 0.0;
  double average;

  cout << "The numbers are: ";

  //  print array elements use of range-based for loop
  for (const double n : numbers) {
    cout << n << "  ";
    //  calculate the sum
    sum += n;
    // count the no. of array elements
    ++count;
  }
  // print the sum
  cout << "\nSum = " << sum << endl;

  // find the average
  average = sum / count;
  cout << "\nTheir Average = " << average << endl;
  return 0;
}

```
(E.2)<br> 
```
#include<iostream>
using namespace std;

int main() {
    int a1[5], i, j;
    float sum=0, avg;
    for(i=0;i<5;i++) {
        cout<<"Enter element-"<<i+1<<": ";
        cin>>a1[i];
    }
    for(j=0;j<5;j++) {
        sum = sum + a1[j];
    }
    cout<<"Sum of elements = "<<sum<<endl;
    avg = sum/5;
    cout<<"Average = "<<avg;
}
``` 
(F)<br>
```
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

```
(G)<br> 
```
#include<iostream> 
#include<string>
using namespace std; 

int main() 
{
    string a;
    cout<<"Enter any word: "; 
    cin>>a;
    cout<<"Entered string is "<<a<<"."<<"\n";
    return 0;
}

```
(H)<br> 
```
#include<iostream>
#include<string>
using namespace std;
int main() {
string a, b;
cout<<"Enter strings: ";
cin>>a>>b;
cout<<"CONCATENATION: "<<a+b;

return 0;
} 
```
(I)<br> 
```
#include<iostream>
#include<string>
using namespace std;
int main() {
string a;
cout<<"Enter string: ";
cin>>a;
int i;
for(i=a.length()-1;i>=0;i--) {
cout<<a[i];
}
return 0;
}
```
(J)<br> 
```
#include<iostream>
#include<string>
using namespace std;
int main() {
string a;
cout<<"Enter a string: ";
cin>>a;
int n=a.length(), i, flag=0;
for(i=0;i<a.length();i++){
if(a[i]==a[n-1]){
flag=1;
}
n--;
}
if(flag==1){
cout<<a<<" is palindrome";
}
else{
cout<<a<<" is not palindrome";
}
}
```

Output: <br> 

(A) <br> 
![](https://github.com/Shloka-Patel/Experiment---7/blob/main/Output_7A.png) <br> 

(B) <br> 
![](https://github.com/Shloka-Patel/Experiment---7/blob/main/Output_7B.png) <br> 

(C) <br> 
![](https://github.com/Shloka-Patel/Experiment---7/blob/main/Output_7C.png) <br> 

(D) <br> 
![](https://github.com/Shloka-Patel/Experiment---7/blob/main/Output_7D.png) <br> 

(E.1) <br> 
![](https://github.com/Shloka-Patel/Experiment---7/blob/main/Output_7E.1.png) <br> 

(E.2) <br> 
![](https://github.com/Shloka-Patel/Experiment---7/blob/main/Output_7E.2.png) <br> 

(F) <br> 
![](https://github.com/Shloka-Patel/Experiment---7/blob/main/Output_7F.png) <br> 

(G) <br> 
![](https://github.com/Shloka-Patel/Experiment---7/blob/main/Output_7G.png) <br> 

(H) <br> 
![](https://github.com/Shloka-Patel/Experiment---7/blob/main/Output_7H.png) <br> 

(I) <br> 
![](https://github.com/Shloka-Patel/Experiment---7/blob/main/Output_7I.png) <br> 

(J) <br> 
![](https://github.com/Shloka-Patel/Experiment---7/blob/main/Output_7J.png) <br> 


Conclusion -> I learnt about arraysa ans strings and perfrmed several programmes based on them. <br> 
