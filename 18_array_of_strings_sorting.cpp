#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    // Define an array of strings
    string arr[] = {"banana", "apple", "grape", "pineapple", "cherry"};

    // Get the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);

    // Sort the array in alphabetical order
    sort(arr, arr + size);

    // Display the sorted array
    cout << "Strings in alphabetical order:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
