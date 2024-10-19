#include <iostream>
#include <vector>
using namespace std;

// Function to determine the faster transport
vector<string> faster_transport(int T, vector<pair<int, int>> test_cases) {
    vector<string> results;
    for (int i = 0; i < T; i++) {
        int X = test_cases[i].first;
        int Y = test_cases[i].second;
        if (X < Y) {
            results.push_back("BIKE");
        } else if (X > Y) {
            results.push_back("CAR");
        } else {
            results.push_back("SAME");
        }
    }
    return results;
}

int main() {
    int T;
    cin >> T;  // number of test cases
    vector<pair<int, int>> test_cases(T);
    
    // Reading input
    for (int i = 0; i < T; i++) {
        cin >> test_cases[i].first >> test_cases[i].second;
    }
    
    // Getting the result
    vector<string> results = faster_transport(T, test_cases);
    
    // Outputting the result
    for (const string &result : results) {
        cout << result << endl;
    }
    
    return 0;
}
