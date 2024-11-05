#include <iostream>
using namespace std;

int main() {
    int T;  // Number of test cases
    cin >> T;  // Read the number of test cases

    while (T--) {
        int A, B;
        cin >> A >> B;  // Read the two numbers A and B

        int C = 21 - (A + B);  // Calculate the required third number

        // Check if C is between 1 and 10 inclusive
        if (C >= 1 && C <= 10) {
            cout << C << endl;  // Output the third number
        } else {
            cout << -1 << endl;  // Impossible to win, output -1
        }
    }

    return 0;
}
