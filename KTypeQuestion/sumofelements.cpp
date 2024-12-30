#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k1, k2;
    cin >> n >> k1 >> k2;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    // using min priority queue
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < n; i++) {
        pq.push(nums[i]);
    }
    int sum = 0;
    for (int i = 0; i < k1; i++) {
        pq.pop();
    }
    for (int i = 0; i < k2 - k1 - 1; i++) {
        sum += pq.top();
        pq.pop();
    }

    cout << sum << endl;
}