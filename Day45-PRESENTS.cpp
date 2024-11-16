#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    vector<int> results(T);
    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;
        results[i] = N - (N / 5);
    }
    for (int res : results) {
        cout << res << endl;
    }
    return 0;
}
