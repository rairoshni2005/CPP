#include <iostream>
#include <string>

using namespace std;

string reverseString(string s) {
    int start = 0;
    int end = s.size() - 1;

    while (start < end) {
        swap(s[start], s[end]);
        start++;
        end--;
    }

    return s;
}

int main() {
    string input = "Vrishank";
    cout << "Original: " << input << endl;
    cout << "Reversed: " << reverseString(input) << endl;
    return 0;
}
