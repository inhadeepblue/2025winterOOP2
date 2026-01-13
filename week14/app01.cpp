//#include <iostream>
//#include <queue>
//#include <vector>
//#include <random>  // 난수
//#include <chrono> // std::chrono::system_clock
//
//using namespace std;
//
//void print(queue<int> q) {
//    while (!q.empty()) {
//        cout << q.front() << " ";
//        q.pop();
//    }
//    cout << endl;
//}
//
//int main() {
//    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
//    mt19937 gen(seed);
//    //mt19937 gen(111);
//    uniform_int_distribution<> distrib(0, 49);
//    vector<queue<int>> queues(5);
//
//    for (int i = 0; i < 50; i++) {
//        int donation = distrib(gen); // 난수 생성
//        int queue_index = donation / 10; // 인덱스 계산
//        queues[queue_index].push(donation);
//    }
//    for (int i = 0; i < 5; ++i) {
//        cout << "Donation $" << i * 10 << "~" << i * 10 + 9 << ": ";
//        print(queues[i]);
//    }
//
//    return 0;
//}
