#include <iostream>
using namespace std;

int binarySearch(int input[], int size, int element) {
int mid= size/2;
// base case
if (element > input[size - 1] || element < input[0] || (size == 1 && element != input[mid]) ) {
  return -1;
}
if (element == input[mid]) {
  return mid;
} else if (element > input[mid]) {
  int mid1 = binarySearch(input + mid, size - mid, element);
  return mid + mid1;
} else if (element < input[mid]) {
  return binarySearch(input, mid, element);
}
}

int main() {
    int input[100000],length,element, ans;
    cin >> length;
    for(int i =0;i<length;i++)
    { 
        cin >> input[i];;
    }

    cin>>element;
    ans = binarySearch(input, length, element);
    cout<< ans << endl;
}
