// Include the necessary header for input-output operations
#include <iostream>

// Using the standard namespace to avoid writing std:: before every standard C++ function or object
using namespace std;

// Starting point of the program
int main(){
    int n , k; // Variables to store the number of elements in the array and the rank of the desired smallest number

    // Prompt the user to enter the number of elements they want in the array
    cout<<"Enter the range of array ";
    cin>>n;  // Read the user input for number of elements

    float arr[n]; // Declare an array of floating point numbers with size n

    // Loop to read each element of the array from the user
    for(int i = 0 ; i<n ; i++){
        cout<<"\nEnter "<<i+1<<" Number : "; // Prompt user to input the (i+1)-th number
        cin>>arr[i];  // Store the input in the i-th position of the array
    }

    // Sort the array in ascending order. The sort function is provided by the C++ Standard Library
    // The two arguments (arr, arr+n) tell the function to sort from the beginning to the end of the array
    sort (arr,arr + n); 

    

    // Ask the user for the rank of the smallest number they're interested in (1 for the smallest, 2 for the second smallest, etc.)
    cout<<"\nEnter the rank of smallest number you want : ";
    cin>>k;

    // Display the k-th smallest number to the user. Since array indices are 0-based, the k-th smallest is located at position k-1.
    cout<<"\n"<<k<<" Smallest number is "<<arr[k-1] << endl ; 

    // Indicate that the program has finished executing successfully
    return 0;
}
