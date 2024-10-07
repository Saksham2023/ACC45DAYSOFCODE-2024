#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases
    
    while (T--) {
        long long X, Y;
        cin >> X >> Y; // Cost of renting per month and cost of purchasing
        
        if (X >= Y) {
            cout << 0 << endl; // If renting is more expensive or equal, output 0
        } else {
            // Calculate maximum months
            long long maxMonths = (Y - 1) / X; // Using integer division
            cout << maxMonths << endl;
        }
    }

    return 0;
}
