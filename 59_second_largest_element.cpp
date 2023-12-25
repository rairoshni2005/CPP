#include <iostream>
#include <algorithm> // for sort() function
using namespace std;

int main() {
    int n;

    // Ask user for number of elements
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    // Take array input from user
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort the array
    sort(arr, arr+n);

    // Print second largest element
    cout << "The second largest element is: " << arr[n-2] << endl;

    return 0;
}
