#include <iostream>

using namespace std;
int main() {
  int arr[] = {10, 20, 30, 40, 50};
  int largest1 = arr[0];
  int largest2 = arr[1];
  int largest3 = arr[2];

  
  for (int i = 3; i < 5; i++) {
  
    if (arr[i] > largest1) {
      largest3 = largest2;
      largest2 = largest1;
      largest1 = arr[i];
    } else
 
if (arr[i] > largest2) {
      largest3 = largest2;
      largest2 = arr[i];
    } else
 
if (arr[i] > largest3) {
      largest3 = arr[i];
    }
  }

  // Print the largest three elements
  cout << "The largest three elements are: " << largest1 << ", " << largest2 << ", " << largest3 << endl;
}

