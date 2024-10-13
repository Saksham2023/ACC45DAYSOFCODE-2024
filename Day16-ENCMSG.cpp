#include <iostream>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T; // Read number of test cases

    while (T--) {
        int N;
        cin >> N; // Read length of string
        string S;
        cin >> S; // Read the actual string

        // Step 1: Swap pairs of characters
        for (int i = 0; i < N - 1; i += 2) {
            swap(S[i], S[i + 1]);
        }

        // Step 2: Replace characters
        for (char &c : S) {
            c = char(219 - int(c)); // Maps 'a' to 'z', 'b' to 'y', etc.
        }

        cout << S << endl; // Output the encoded message
    }

    return 0;
}
