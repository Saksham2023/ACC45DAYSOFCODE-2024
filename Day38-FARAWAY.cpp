#include <iostream>
#include <vector>
using namespace std;

long long max_distance(int N, int M, const vector<int>& A) {
    long long distance = 0;
    double half_M = M / 2.0;  // Calculate the midpoint of M

    for (int i = 0; i < N; i++) {
        if (A[i] <= half_M) {
            distance += M - A[i];  // Maximize distance by setting B[i] to M
        } else {
            distance += A[i] - 1;  // Maximize distance by setting B[i] to 1
        }
    }

    return distance;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);  // Fast input/output
    int T;
    cin >> T;  // Read number of test cases

    while (T--) {
        int N, M;
        cin >> N >> M;
        
        vector<int> A(N);  // Using vector to store array A
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        
        long long result = max_distance(N, M, A);
        cout << result << "\n";  // Output the result for the current test case
    }

    return 0;
}
