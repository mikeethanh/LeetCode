#include<iostream>
#include<vector>
using namespace std;

int binary_search(vector<int> a, int b) {
	int l = 0;
	int r = a.size() - 1;
	while (l < r) {
		int m = (l + r) / 2;
		if (b > a[m]) {
			l = m + 1;
		}
		else if (b < a[m]) {
			r = m - 1;
		}if (b == a[m]) {
			return m; 
		}
	}
	return -1;
}

int main() {
	vector<int> nums = { -1, 0 , 3 ,5 , 9 , 12 };
	int target = 2;
	int res = binary_search(nums, target);
	cout << res; 
}