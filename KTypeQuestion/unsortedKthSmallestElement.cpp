#include <iostream>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // using bucket sort method
    priority_queue<int> pq;
    for (int i = 0; i < k; i++) {
        pq.push(nums[i]);
    }

    for (int i = k; i < n; i++) {
        if(nums[i] < pq.top()) {
            pq.pop();
            pq.push(nums[i]);
        }
    }

    cout << pq.top() << endl;
}