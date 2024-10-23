#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int h, x, y;
        cin >> h >> x >> y;
        if (x >= y) {
            cout << ceil((double)h / x) << endl;
        } else {
            cout << ceil((double)(h - y) / x) + 1 << endl;
        }
    }
    return 0;
}

