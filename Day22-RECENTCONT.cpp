#include <iostream>
#include <vector>
#include <string>

void count_contests(const std::vector<std::pair<int, std::vector<std::string>>>& test_cases) {
    for (const auto& case_data : test_cases) {
        int start38_count = 0, ltime108_count = 0;
        for (const auto& contest : case_data.second) {
            if (contest == "START38") start38_count++;
            else if (contest == "LTIME108") ltime108_count++;
        }
        std::cout << start38_count << " " << ltime108_count << std::endl;
    }
}

int main() {
    int T;
    std::cin >> T;
    std::vector<std::pair<int, std::vector<std::string>>> test_cases;

    for (int i = 0; i < T; ++i) {
        int N;
        std::cin >> N;
        std::vector<std::string> contests(N);
        for (int j = 0; j < N; ++j) {
            std::cin >> contests[j];
        }
        test_cases.emplace_back(N, contests);
    }

    count_contests(test_cases);

    return 0;
}
