#include <iostream>

using namespace std;

int main() {

    int a = 0;
    string input_string;

    cout<<"Enter a word : ";
    cin>>input_string;


    sort(input_string.begin(), input_string.end());

    do {
        cout << input_string << endl;
        a++;

    } while (next_permutation(input_string.begin(), input_string.end()));

    cout<<"\n\nTOTAL PERMUTATIONS : "<<a;
    return 0;
}