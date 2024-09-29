#include <iostream>
using namespace std;

void determine_rank(int T) {
    while (T--) {
        // Scores for Dragon
        int dragon_dsa, dragon_toc, dragon_dm;
        cin >> dragon_dsa >> dragon_toc >> dragon_dm;

        // Scores for Sloth
        int sloth_dsa, sloth_toc, sloth_dm;
        cin >> sloth_dsa >> sloth_toc >> sloth_dm;

        // Calculate total scores
        int dragon_total = dragon_dsa + dragon_toc + dragon_dm;
        int sloth_total = sloth_dsa + sloth_toc + sloth_dm;

        // Compare total scores
        if (dragon_total > sloth_total) {
            cout << "Dragon" << endl;
        } else if (sloth_total > dragon_total) {
            cout << "Sloth" << endl;
        } else {
            // If total scores are tied, compare DSA scores
            if (dragon_dsa > sloth_dsa) {
                cout << "Dragon" << endl;
            } else if (sloth_dsa > dragon_dsa) {
                cout << "Sloth" << endl;
            } else {
                // If DSA scores are tied, compare TOC scores
                if (dragon_toc > sloth_toc) {
                    cout << "Dragon" << endl;
                } else if (sloth_toc > dragon_toc) {
                    cout << "Sloth" << endl;
                } else {
                    // If everything is tied
                    cout << "Tie" << endl;
                }
            }
        }
    }
}

int main() {
    int T;
    cin >> T;  // Number of test cases
    determine_rank(T);
    return 0;
}