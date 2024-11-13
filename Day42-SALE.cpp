#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int A, B, C;
        cin >> A >> B >> C;
        cout << (A + B + C - min({A, B, C})) << endl;
    }
    return 0;
}
