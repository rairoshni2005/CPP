#include <iostream>
using namespace std ;


bool isVowel(char c) {
   
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (isVowel(ch)) {
        cout << ch << " is a vowel." << endl;
    } else {
        cout << ch << " is a consonant." << endl;
    }

    return 0 ;
}



