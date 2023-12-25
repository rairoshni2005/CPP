#include <iostream>
#include <string>


using namespace std;

bool isPalindrome(const string &s)
{
    int start = 0;
    int end = s.length() - 1;

    while (start < end)
    {
        if (s[start] != s[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main()
{
    string input;

    cout << "Enter a number: ";
    getline(cin, input);

    if (isPalindrome(input))
    {
        cout << "The number is a palindrome." << endl;
    }
    else
    {
        cout << "The number is not a palindrome." << endl;
    }

    return 0;
}
