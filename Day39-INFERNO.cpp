#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N, X;
        cin >> N >> X;
        
        vector<int> health(N);
        for (int i = 0; i < N; ++i) {
            cin >> health[i];
        }
        
        // Multi-Target Mode: Max health among all enemies
        int multi_target_time = *max_element(health.begin(), health.end());
        
        // Single-Target Mode: Sum of ceil(health[i] / X) for each enemy
        int single_target_time = 0;
        for (int h : health) {
            single_target_time += (h + X - 1) / X; // Equivalent to ceil(h / X)
        }
        
        // Minimum of the two modes
        int min_time = min(multi_target_time, single_target_time);
        cout << min_time << endl;
    }
    
    return 0;
}
