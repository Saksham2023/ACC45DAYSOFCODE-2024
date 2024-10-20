#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        
        int f = -1;
        while(a) {
            a /= 2;
            f++;
        }
        int k = f * b + (f - 1) * c;
        cout << k << endl;
    }
    
    return 0;
}
