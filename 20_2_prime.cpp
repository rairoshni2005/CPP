#include <iostream>
using namespace std;

int main(){

    int n;
    int i=2;
    cout<<"Enter number ";
    cin>>n;

    int counter =0;
    while(i<=n/2){
        i++;

        if(n%i==0)
        {
            counter = counter+1;
        }

    }
    if(counter>0)
    {
        cout<<"it is not a prime number ";

    }
    else
    {
        cout<<"it is a prime number ";

    }
    return 0;

}