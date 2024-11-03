#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

void simpleSieve(int limit, vector<bool>& prime) {
    for (int p = 2; p * p <= limit; p++) {
        if (prime[p]) {
            for (int i = p * p; i <= limit; i += p) {
                prime[i] = false;
            }
        }
    }
}

void segmentedSieve(int m, int n) {
    int limit = floor(sqrt(n)) + 1;
    vector<bool> prime(limit + 1, true);
    simpleSieve(limit, prime);

    int rangeSize = n - m + 1;
    vector<bool> isPrimeRange(rangeSize, true);
    
    if (m == 1) {
        isPrimeRange[0] = false; // 1 is not prime
    }

    for (int i = 2; i <= limit; i++) {
        if (prime[i]) {
            int start = max(i * i, m + (i - m % i) % i);
            for (int j = start; j <= n; j += i) {
                isPrimeRange[j - m] = false;
            }
        }
    }

    for (int i = 0; i < rangeSize; i++) {
        if (isPrimeRange[i]) {
            cout << i + m << endl;
        }
    }
}

int main() {
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int m, n;
        cin >> m >> n;
        segmentedSieve(m, n);
        if (i < t - 1) {
            cout << endl; // Separate test cases by an empty line
        }
    }

    return 0;
}

