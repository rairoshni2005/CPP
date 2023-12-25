#include <iostream>  
using namespace std; 
int main() {
    int n; 
    cout << "Enter the number of elements: ";
    cin >> n;  

    int arr[n];  

    cout << "Enter array elements: ";
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];  
    }

    
    if (is_sorted(arr, arr + n)) {
        cout << "The array is sorted in ascending order." << endl;
    } else {
        cout << "The array is not sorted in ascending order." << endl;
    } 

    return 0;  
}
