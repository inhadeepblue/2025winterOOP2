#include <iostream>
#include <fstream>
#include <random> // 메르센 트위스터 및 정규분포
#include <map>    // 연관 컨테이너

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::normal_distribution<double> d(50, 3);
    std::map<int, int> score_counts;
    for (int i = 0; i < 10000; ++i) {
        int score = static_cast<int>(std::round(d(gen))); 
        score_counts[score]++;
    }
    std::ofstream outFile("scores.csv");
    if (outFile.is_open()) {
        outFile << "Score,Frequency" << std::endl;
        for (const auto& [score, count] : score_counts) { // c++ 17
            outFile << score << "," << count << "\n";
        }
        outFile.close();
        std::cout << "scores.csv 파일이 성공적으로 생성되었습니다." << std::endl;
    }
    else {
        std::cerr << "파일을 열 수 없습니다." << std::endl;
        return 1;
    }
    return 0;
}