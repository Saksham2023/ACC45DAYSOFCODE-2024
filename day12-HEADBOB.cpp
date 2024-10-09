#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T; // Read the number of people
    while (T--) {
        int N;
        cin >> N; // Read the number of gestures
        string gestures;
        cin >> gestures; // Read the gesture string
        
        // Determine the nationality based on gestures
        if (gestures.find('I') != string::npos) {
            cout << "INDIAN" << endl;
        } else if (gestures.find('Y') != string::npos) {
            cout << "NOT INDIAN" << endl;
        } else {
            cout << "NOT SURE" << endl;
        }
    }
    return 0;
}
