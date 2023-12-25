#include <iostream>
using namespace std;

int main() {
    char ch = 'B';
    int ascii_value = static_cast<int>(ch);
    cout << "The ASCII value of '" << ch << "' is: " << ascii_value << endl;
    return 0;
}