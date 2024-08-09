// NAME -SHIVENDRA DWIVEDI 
// PRN - 23070123122
// EXPERIMENT - 7 (E.1) 

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

// The numbers are: 7.5  2.5  3.6  5.12  7.35  24.27  
// Sum = 50.34
//  
// Their Average = 8.39      