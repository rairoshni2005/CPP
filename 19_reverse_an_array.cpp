#include<iostream>
using namespace std;
int main()
{
    int n, reverseIndex = 0;
    cout<<"Enter the size of array ";
    cin>>n;
    int arr[n];
    int reverseArr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    
    cout<<"Original array:  ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i];
        cout<<" ";
    }
    cout<<endl;

    for(int i = n-1; i>=0; i--) 
    {
        reverseArr[reverseIndex] = arr[i];
        reverseIndex++;
    }

    cout << "Reverse array is: " ;
    for(int i=0; i<n; i++)
    {
        cout<<reverseArr[i];
            cout<<" ";
        }
    }