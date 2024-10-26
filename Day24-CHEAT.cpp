#include <iostream>
using namespace std;

int countTuesdays(int N) {
    return (N + 5) / 7;
}

int main() {
    int T, N;
    cin >> T;
    while (T--) {
        cin >> N;
        cout << countTuesdays(N) << endl;
    }
    return 0;
}

