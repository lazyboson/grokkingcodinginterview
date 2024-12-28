#include<iostream>
using namespace std;

int main() {
  int n, k;
  std::cin >> n >> k;
  vector<int> nums(n);
  for(int i=0; i<n; i++) {
    cin >> nums[i];
  }

 std::priority_queue<int, vector<int>, greater<int>> pq2;
 //first insert k elements
 //Time complexity: k * O(logk)
 //heapify takes O(logk)
 for (int i = 0; i < k; i++) {
  pq2.push(nums[i]);
 }

 //Time complexity: (n-k) * O(logk)
 for (int j = k; j < n; j++) {
  if(nums[j]> pq2.top()) {
    pq2.pop();
    pq2.push(nums[j]);
  }
 }
 //overall time complexity: O(nlogk)
 while(!pq2.empty()) {
   cout << pq2.top() << "\n";
   pq2.pop();
 }
}
