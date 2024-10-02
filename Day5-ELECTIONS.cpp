#include <iostream>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;
    
    while (T--) {
        int X_A, X_B, X_C; // Votes for parties A, B, and C
        cin >> X_A >> X_B >> X_C;
        
        // Check for majority
        if (X_A > 50) {
            cout << "A" << endl;
        } else if (X_B > 50) {
            cout << "B" << endl;
        } else if (X_C > 50) {
            cout << "C" << endl;
        } else {
            cout << "NOTA" << endl;
        }
    }
    
    return 0;
}
