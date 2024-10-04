#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int N, K; // Number of people and initial amount of money in the ATM
        cin >> N >> K;

        vector<int> A(N); // Withdrawal amounts
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        string result; // To store the result for this test case
        for (int i = 0; i < N; ++i) {
            if (K >= A[i]) {
                result += '1'; // Successful withdrawal
                K -= A[i];     // Deduct the amount from ATM
            } else {
                result += '0'; // Unsuccessful withdrawal
            }
        }

        cout << result << endl; // Output the result for this test case
    }

    return 0;
}
