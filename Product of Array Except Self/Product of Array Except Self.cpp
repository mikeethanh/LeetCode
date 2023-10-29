#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n; 
	cin >> n;
	int a[100];
	vector<int> v(100, 1);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// 2 1 3 4 5 
	// 0 1 2 3 4 
	//tich cua cac phan tu nam ben trai
	int l = 1;
	for (int i = 0; i < n; i++) {
		v[i] = l;
		l = l * a[i];
	}
	// 2 2 6 24
	// 1 2 3 4  
	//tinh tich cac phan tu tu ben phai cua phan tu 
	int r = 1; 
	for(int i = n - 1; i >= 0; i--) {
		v[i] = v[i] * r;
		r *= a[i];
	}
	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
}