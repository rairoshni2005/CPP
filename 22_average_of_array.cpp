#include <iostream>
using namespace std;
int main(){
    int n,sum=0,avg=0;
    cout<<"Enter the number of elements you want to enter : ";
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n;i++){
    cout<<"enter"<<i+1<<"number";
    cin>>arr[i];
    }
    for(int i = 0 ; i<n;i++){
        sum+=arr[i];
    }
    avg= int(sum)/int(n);
    cout<<"average = "<<int(avg);
}  