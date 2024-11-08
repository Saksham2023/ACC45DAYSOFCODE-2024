#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, X, S;
        cin >> N >> X >> S;

        int coin_position = X;

        // Process each swap
        for (int i = 0; i < S; i++) {
            int A, B;
            cin >> A >> B;

            // Perform the swap
            if (coin_position == A) {
                coin_position = B;
            } else if (coin_position == B) {
                coin_position = A;
            }
        }

        // Output the final position of the coin
        cout << coin_position << endl;
    }

    return 0;
}
