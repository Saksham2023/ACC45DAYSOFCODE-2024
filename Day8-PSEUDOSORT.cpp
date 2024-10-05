#include <iostream>
#include <vector>

using namespace std;

string isPseudoSorted(vector<int>& arr) {
    int n = arr.size();
    vector<int> violations;

    // Step 1: Identify violations
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            violations.push_back(i);
        }
    }

    // Step 2: Determine the result based on the number of violations
    if (violations.size() == 0) {
        return "YES";  // already sorted
    }
    if (violations.size() > 1) {
        return "NO";  // too many violations
    }

    // There is exactly one violation at index `violations[0]`
    int i = violations[0];

    // Step 3: Try swapping A[i] and A[i+1]
    swap(arr[i], arr[i + 1]);

    // Check if the array is sorted after the swap
    for (int j = 0; j < n - 1; ++j) {
        if (arr[j] > arr[j + 1]) {
            return "NO";
        }
    }

    return "YES";
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        cout << isPseudoSorted(A) << endl;
    }
    return 0;
}
