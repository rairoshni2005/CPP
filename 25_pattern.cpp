#include <iostream>

using namespace std;

int main(){
    int n;

    cout<<"Enter the no. of lines you want : \n";
    cin>>n;

    
    for(int i = 0 ; i< n; i++){
        if(i==0 || i == (n-1)){
            cout<<"*********\n";
        }
        else{
            cout<<"*       *\n";
        }
    }

    return 0;
}