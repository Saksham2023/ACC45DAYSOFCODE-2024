#include <iostream>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int N; // Number of players
        cin >> N;

        // Calculate the number of choices for captain and vice-captain
        int choices = N * (N - 1);
        cout << choices << endl; // Output the result
    }

    return 0;
}

