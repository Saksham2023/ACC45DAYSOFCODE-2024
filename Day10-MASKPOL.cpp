#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases
    
    while (T--) {
        int N, A;
        cin >> N >> A; // Total number of people and number of infected
        
        // Calculate the minimum number of masks required
        int minimumMasks = min(A, N - A);
        
        cout << minimumMasks << endl;
    }

    return 0;
}