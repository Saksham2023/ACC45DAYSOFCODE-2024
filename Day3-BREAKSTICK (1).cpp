#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; // Read number of test cases
    while (T--) {
        long long N, X;
        cin >> N >> X;

        // Check the conditions based on parity
        if (N % 2 == 0) {
            // N is even
            cout << "YES" << endl; // X can be anything (even or odd)
        } else {
            // N is odd
            if (X % 2 == 1) {
                cout << "YES" << endl; // X can only be odd
            } else {
                cout << "NO" << endl; // X is even, which is not possible
            }
        }
    }
    return 0;
}
