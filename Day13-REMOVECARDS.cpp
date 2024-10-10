#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases
    while (T--) {
        int N;
        cin >> N; // Number of cards
        vector<int> cards(N);
        unordered_map<int, int> frequency; // To count the frequency of each card
        
        for (int i = 0; i < N; i++) {
            cin >> cards[i];
            frequency[cards[i]]++; // Count the frequency of each card number
        }

        int maxFrequency = 0;
        for (const auto& entry : frequency) {
            maxFrequency = max(maxFrequency, entry.second); // Find the maximum frequency
        }

        // The result is the total number of cards minus the maximum frequency
        int minMoves = N - maxFrequency;
        cout << minMoves << endl; // Output the result for the current test case
    }
    return 0;
}
