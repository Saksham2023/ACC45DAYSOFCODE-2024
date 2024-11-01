#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        int A, B, C, D;
        cin >> A >> B; // Current scores
        cin >> C >> D; // Desired scores

        // Check if the transition is possible
        if (C >= A && D >= B) {
            cout << "POSSIBLE" << endl;
        } else {
            cout << "IMPOSSIBLE" << endl;
        }
    }

    return 0;
}
