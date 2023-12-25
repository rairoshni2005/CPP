#include <iostream>
#include <string>

using namespace std; 
void permute(string s, int l, int r) {
    
    if(l == r){
         cout << s <<", "<< endl;
    }
    else{
        
        for (int i = l; i <= r; i++) {
            swap(s[l], s[i]);            
            permute(s, l + 1, r);        
        }
    }
}

int main() {
    string input; 
    
    cout << "Enter the string: ";
    cin >> input; 
    
   
    permute(input, 0, input.size() - 1); 
    
    return 0; 
}