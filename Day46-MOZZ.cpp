#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;
    vector<int> results(T);
    for (int i = 0; i < T; i++) {
        int X, Y, R;
        cin >> X >> Y >> R;
        int extra_sticks = R / 30;
        int total_sticks = X + extra_sticks;
        results[i] = (total_sticks + Y - 1) / Y;
    }
    for (int res : results) {
        cout << res << endl;
    }
    return 0;
}

