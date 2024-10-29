#include <iostream>
#include <algorithm> // For std::max

using namespace std;

int main() {
    int T;
    cin >> T; // Read the number of test cases

    while (T--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d; // Read the tastiness values

        // Calculate the four possible tastiness sums
        int tastiness1 = a + c;
        int tastiness2 = a + d;
        int tastiness3 = b + c;
        int tastiness4 = b + d;

        // Find the maximum tastiness
        int max_tastiness = max({tastiness1, tastiness2, tastiness3, tastiness4});

        // Output the result
        cout << max_tastiness << endl;
    }

    return 0;
}

