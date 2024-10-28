
#include <iostream>
#include <vector>
using namespace std;

int count_wolverine_minions(int N, int K, vector<int>& characteristics) {
    int count = 0;
    for (int value : characteristics) {
        int mutated_value = value + K;
        if (mutated_value % 7 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<int> characteristics(N);
        for (int i = 0; i < N; i++) {
            cin >> characteristics[i];
        }

        int result = count_wolverine_minions(N, K, characteristics);
        cout << result << endl;
    }

    return 0;
}
