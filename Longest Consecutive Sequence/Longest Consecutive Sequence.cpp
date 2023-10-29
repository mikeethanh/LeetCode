#include<iostream>
#include<algorithm>
#include<set>
#include<vector>
#include <unordered_set>
using namespace std;

int main() {
	int n; cin >> n; 
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	//u_set : khong sap xep
	int res = 1;
	unordered_set<int> se(v.begin(), v.end());
	for (int x : se) {
		//tim kiem phan tu dau tien co the mo rong cua ay con
		if (se.find(x - 1) == se.end()) {
			int temp = x;
			int dem = 1;
			while (se.find(x + 1) != se.end()) {
				dem++;
			}
			res = max(dem, res);
		}
	}

}