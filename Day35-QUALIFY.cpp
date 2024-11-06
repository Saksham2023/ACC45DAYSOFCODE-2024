#include <iostream>
using namespace std;

int main() {
    int T;  // Number of test cases
    cin >> T;

    // Process each test case
    while (T--) {
        int X, A, B;
        cin >> X >> A >> B;

        // Calculate the total points Chef earned
        int total_points = A + 2 * B;

        // Check if Chef qualifies or not
        if (total_points >= X) {
            cout << "Qualify" << endl;
        } else {
            cout << "NotQualify" << endl;
        }
    }

    return 0;
}

