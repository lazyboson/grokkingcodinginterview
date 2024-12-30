#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    // using bucket sort method
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++) {
        freq[nums[i]]++;
    }

    vector<vector<int>> bucket(n + 1);
    for(auto it: freq) {
        bucket[it.second].push_back(it.first);
    }
    vector<int> res;
    bool flag = false;
    for (int i = n; i >= 0; i--) {
        for (int j = 0; j < bucket[i].size(); j++) {
            if(k==0) {
               flag = true;
               break;
            }
            res.push_back(bucket[i][j]);
            k--;
        }
        if (flag) {
            break;
        }
    }
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
}