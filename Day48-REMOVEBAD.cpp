#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        int N;
        cin >> N; // Length of the array

        vector<int> A(N);
        unordered_map<int, int> frequency;

        // Read the array and calculate frequency of each element
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
            frequency[A[i]]++;
        }

        // Find the maximum frequency
        int max_frequency = 0;
        for (const auto &entry : frequency) {
            max_frequency = max(max_frequency, entry.second);
        }

        // Minimum operations = total elements - frequency of the most common element
        cout << (N - max_frequency) << "\n";
    }

    return 0;
}
