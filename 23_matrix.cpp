#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Sample matrix
    vector<vector<int> >matrix =
     {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Using size_t instead of int for indices, as size() returns size_t
    for(size_t i = 0; i < matrix.size(); ++i) {
        int sum = 0;
        for(size_t j = 0; j < matrix[i].size(); ++j) {
            sum += matrix[i][j];
        }
        cout << "Sum of elements in row " << i << " = " << sum << endl;
    }

    return 0;
}
