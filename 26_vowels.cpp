#include <iostream>
using namespace std;

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);


    int vowelCount = 0;
    for(char c : sentence) {
        if(isVowel(c)) {
            vowelCount++;
        }
    }
    cout << "Number of vowels: " << vowelCount << endl;
    return 0;
}
