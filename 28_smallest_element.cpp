#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) { 
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    int smallest = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    cout << "The smallest element in the array is: " << smallest << endl;
    return 0;
}



     