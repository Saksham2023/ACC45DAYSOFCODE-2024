#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to determine if candidate A can win the election
string can_candidate_a_win(int n, int x, const vector<int>& a_votes, const vector<int>& b_votes) {
    int a_wins = 0;
    int required_wins = (n / 2) + 1;
    vector<int> vote_diffs;

    // Calculate initial wins for candidate A and store needed votes for states where A is losing
    for (int i = 0; i < n; i++) {
        if (a_votes[i] > b_votes[i]) {
            a_wins++;  // A already wins this state
        } else {
            // Calculate additional votes needed for A to win in this state
            vote_diffs.push_back(b_votes[i] - a_votes[i] + 1);
        }
    }

    // If A already has enough wins
    if (a_wins >= required_wins) {
        return "YES";
    }

    // Sort the vote_diffs array to prioritize the states with smallest additional votes needed
    sort(vote_diffs.begin(), vote_diffs.end());

    // Try to gain more state wins by using Chef's additional votes
    for (int votes_needed : vote_diffs) {
        if (a_wins >= required_wins) {
            return "YES";
        }
        if (x >= votes_needed) {
            x -= votes_needed;
            a_wins++;
        } else {
            break;
        }
    }

    // Check if we reached the required number of state wins
    return a_wins >= required_wins ? "YES" : "NO";
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, x;
        cin >> n >> x;

        vector<int> a_votes(n), b_votes(n);
        for (int i = 0; i < n; i++) {
            cin >> a_votes[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b_votes[i];
        }

        // Call the function and print the result
        cout << can_candidate_a_win(n, x, a_votes, b_votes) << endl;
    }

    return 0;
}
