#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	int solve(vector<int>& v,int target);
};

int Solution::solve(vector<int>& v, int target) {
	int r = v.size() - 1;
	int l = 0;
	while (l < r) {
		int m = (l + r) / 2;
		if (v[m] == target) {
			return m;
		}
		if (v[l] < v[m]) {
			if (target > v[l] && target < v[m]) {
				r = m;
			}
			else {
				l = m;
			}
		}
		else {
			if (target > v[m] && target < v[r]) {
				l = m; 
			}
			else {
				r = m; 
			}
		}
	}
	return -1;
}

int main() {
	vector<int> v = {4,5,6,7,8,0,1,2};
	int target = 8;
	Solution solution;
	int result = solution.solve(v, target);
	cout << result;
}