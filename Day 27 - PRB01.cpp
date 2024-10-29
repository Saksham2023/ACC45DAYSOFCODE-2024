#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false; // 1 and less are not prime
    if (n <= 3) return true;  // 2 and 3 are prime
    if (n % 2 == 0 || n % 3 == 0) return false; // eliminate multiples of 2 and 3

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false; // found a divisor
        }
    }

    return true; // no divisors found, n is prime
}

int main() {
    int T;
    cin >> T; // Number of test cases
    vector<string> results;

    for (int i = 0; i < T; ++i) {
        int N;
        cin >> N;
        if (is_prime(N)) {
            results.push_back("yes");
        } else {
            results.push_back("no");
        }
    }

    for (const auto& result : results) {
        cout << result << endl; // Output results
    }

    return 0;
}

