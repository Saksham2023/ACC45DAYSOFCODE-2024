#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;  // Read number of test cases
    while (T--) {
        int N;
        cin >> N;  // Read the length of the array
        vector<int> A(N);
        
        // Read the array elements
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        // Count the frequency of each element
        unordered_map<int, int> frequency;
        for (int num : A) {
            frequency[num]++;
        }

        // Find the maximum frequency
        int max_count = 0;
        for (const auto& pair : frequency) {
            max_count = max(max_count, pair.second);
        }

        // Minimum operations required
        int min_operations = N - max_count;
        cout << min_operations << endl;  // Output the result
    }
    return 0;
}
