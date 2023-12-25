
#include <iostream>


using namespace std;


int main(){
    int n , k; 
    cout<<"Enter the range of array ";
    cin>>n;  

    float arr[n]; 

    
    for(int i = 0 ; i<n ; i++){
        cout<<"\nEnter "<<i+1<<" Number : "; 
        cin>>arr[i];  
    }

     
    sort (arr,arr + n); 
    
    cout<<"\nEnter the rank of smallest number you want : ";
    cin>>k;

    
    cout<<"\n"<<k<<" Smallest number is "<<arr[k-1] << endl ; 

    
    return 0;
}
 