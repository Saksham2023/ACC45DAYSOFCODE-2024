#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int N; // Size of array A
        cin >> N;
        
        vector<long long> B(N);
        for (int i = 0; i < N; i++) {
            cin >> B[i]; // Read array B
        }

        // Calculate S
        long long sumB = 0;
        for (int i = 0; i < N; i++) {
            sumB += B[i];
        }
        long long S = sumB / (N + 1); // S = (B1 + B2 + ... + BN) / (N + 1)

        vector<long long> A(N);
        for (int i = 0; i < N; i++) {
            A[i] = B[i] - S; // A[i] = B[i] - S
        }

        // Output the result for the current test case
        for (int i = 0; i < N; i++) {
            cout << A[i] << (i == N - 1 ? "\n" : " ");
        }
    }

    return 0;
}
