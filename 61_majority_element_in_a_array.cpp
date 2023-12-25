#include <iostream>
using namespace std;

int Majorityfunc(int arr[], int n) {
    int majority = arr[0];
    int count = 1;

    // Find the potential majority element
    for (int i = 1; i < n; ++i) {
        if (arr[i] == majority) {
            count++;
        } else {
            count--;
            if (count == 0) {
                majority = arr[i];
                count = 1;
            }
        }
    }

    // Verify if the potential majority element is the actual majority
    count = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == majority) {
            count++;
        }
    }

    if (count > n / 2) {
        return majority;
    }

    return -1; // No majority element found
}

int main() {
    int n;

    cout<<"Enter the number of elements : \n";
    cin>>n;

    int arr[n];

    for(int i = 0 ; i<n; i++){
        cout<<"\nEnter "<<i+1<<" Number : ";
        cin>>arr[i];
    }

    

    int majority = Majorityfunc(arr, n);

    if (majority != -1) {
        cout << "\nMajority element is: " << majority << "\n\n\n";
    } else {
        cout << "\nNo majority element found." << "\n\n\n";
    }

    return 0;
}