#include <iostream>

int main() {
    int T;
    std::cin >> T; // Read the number of test cases

    while (T--) {
        int P, Q;
        std::cin >> P >> Q; // Read the scores of Alice and Bob

        int totalPoints = P + Q; // Calculate total points scored
        int serveNumber = totalPoints + 1; // Determine the current serve number

        // Determine whose serve it is
        // Each player serves 2 times in sequence
        if ((serveNumber - 1) / 2 % 2 == 0) {
            std::cout << "Alice\n"; // Even group, it's Alice's serve
        } else {
            std::cout << "Bob\n";   // Odd group, it's Bob's serve
        }
    }

    return 0;
}
