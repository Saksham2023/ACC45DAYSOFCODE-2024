#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Function to process a single test case
int maxPeopleInOffice(const vector<int>& swipes) {
    unordered_map<int, bool> active; // Tracks if an ID is in the office
    int currentCount = 0;            // Current number of people in the office
    int maxCount = 0;                // Maximum number of people in the office

    for (int id : swipes) {
        if (active[id]) {
            // Swipe out
            currentCount--;
            active[id] = false;
        } else {
            // Swipe in
            currentCount++;
            active[id] = true;
        }
        maxCount = max(maxCount, currentCount);
    }

    return maxCount;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T; // Number of test cases

    vector<int> results;

    while (T--) {
        int N;
        cin >> N; // Number of swipes in the test case

        vector<int> swipes(N);
        for (int i = 0; i < N; ++i) {
            cin >> swipes[i];
        }

        // Compute the result for this test case
        results.push_back(maxPeopleInOffice(swipes));
    }

    // Output all results
    for (int result : results) {
        cout << result << "\n";
    }

    return 0;
}
