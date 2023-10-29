#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int max_profit(vector<int> a) {
	int n = a.size();

	int max_p = 0; 
	int left = 0; 
	int right = 1; 

	for (right = 1; right < n; right++) {
		if (left < right) {
			max_p = max(max_p, a[right] - a[left]);
		}
		else {
			left = right;
		}
	}
	return max_p;
} 


int main() {
	vector<int> prices = { 7,1,5,3,6,4 };
	int res = max_profit(prices);
}
