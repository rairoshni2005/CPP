#include <iostream>
using namespace std;

int findMajorityElement(int arr[], int n) {
    int candidate = arr[0];
    int count = 1;

    // Phase 1: Find a potential majority candidate
    for (int i = 1; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Phase 2: Verify if the candidate is a majority element
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }

    if (count > n / 2) {
        return candidate;
    } else {
        return -1;  // No majority element found
    }
}

int main() {
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array: \n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int majorityElement = findMajorityElement(arr, n);

    if (majorityElement != -1) {
        cout << "The majority element is: " << majorityElement << endl;
    } else {
        cout << "No majority element found in the array." << endl;
    }

    return 0;
}