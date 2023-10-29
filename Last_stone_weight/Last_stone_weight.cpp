#include<iostream>
#include<deque>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
	int findLasStone(vector<int>& v) {
		deque<int> q;
		sort(v.begin(), v.end(), greater<int>());
		for (auto x : v) {
			q.push_back(x);
		}
		while (q.size() > 1) {
			int x = q.front();
			q.pop_front();
			int y = q.front();
			q.pop_front();
			if ((x - y) == 0) continue;
			else {
				if ((x - y) >= q.front()) {
					q.push_front(x - y);
				}
				else {
					q.push_back(x - y);
				}
			}
		}
		return q.front();
	}
};
int main() {
	vector<int> v = { 2,7,4,1,8,1 };
	Solution solution;
	int res = solution.findLasStone(v);
	cout << res;
}