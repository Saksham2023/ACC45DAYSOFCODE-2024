#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases
    while (T--) {
        int N;
        cin >> N; // Size of the array
        vector<int> A(N);
        int odd_count = 0;
        long long total_sum = 0;

        // Read the array, count odds, and calculate total sum
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
            if (A[i] % 2 != 0) { // Check if the number is odd
                odd_count++;
            }
            total_sum += A[i];
        }

        // Check if we can partition into S1 and S2 such that the product is odd
        if (total_sum % 2 == 0 && odd_count > 0) {
            cout << "YES" << endl; // Possible to form two odd sums
        } else {
            cout << "NO" << endl; // Not possible to form two odd sums
        }
    }
    return 0;
}