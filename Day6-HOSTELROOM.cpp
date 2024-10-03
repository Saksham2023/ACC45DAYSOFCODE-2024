#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int N, X; // Length of array A and initial number of people
        cin >> N >> X;

        vector<int> A(N); // Array for events
        for (int i = 0; i < N; ++i) {
            cin >> A[i]; // Read events
        }

        int current_people = X; // Current number of people in the room
        int max_people = X; // Maximum number of people at any point in time

        for (int i = 0; i < N; ++i) {
            current_people += A[i]; // Update current people count
            if (current_people > max_people) {
                max_people = current_people; // Update max if current is greater
            }
        }

        cout << max_people << endl; // Output the result for the test case
    }

    return 0;
}
