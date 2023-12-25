#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number ";
    cin>>n;
    if(n>0){
        cout<< "It is positive " ;
    }else if(n==0){
        cout<< "It is equal to 0" ;
    }
    if(n<0){
        cout<< "It is negative " ;
    }
    return 0;
}
