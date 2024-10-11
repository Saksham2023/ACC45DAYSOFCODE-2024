#include <iostream>
#include <algorithm>

int main() {
    int T;
    std::cin >> T;  // Read number of test cases

    while (T--) {
        int a, b, c, d;
        std::cin >> a >> b >> c >> d;  // Read tastiness values

        // Calculate all possible tastiness combinations
        int tastiness1 = a + c;
        int tastiness2 = a + d;
        int tastiness3 = b + c;
        int tastiness4 = b + d;

        // Find the maximum tastiness
        int max_tastiness = std::max({tastiness1, tastiness2, tastiness3, tastiness4});

        // Output the result for the current test case
        std::cout << max_tastiness << std::endl;
    }

    return 0;
}
