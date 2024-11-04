#include <iostream>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T; // Read number of test cases
    
    while (T--) {
        int N; // Memory size in bits
        cin >> N; // Read the memory size
        
        // Check if N is a multiple of 4
        if (N % 4 == 0) {
            cout << "Good" << endl; // Output "Good" if it's a multiple of 4
        } else {
            cout << "Not Good" << endl; // Output "Not Good" otherwise
        }
    }
    
    return 0;
}
