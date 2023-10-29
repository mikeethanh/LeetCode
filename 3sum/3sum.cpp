#include<iostream>
#include<algorithm>
using namespace std;


int main() {
	int n; 
	cin >> n; 
	int a[100];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a + 0, a + n);
	for (int i = 0; i < n - 2; i++) {
		int l = i+1; int r = n-1;
		while (l < r) {
			if (a[i] + a[l] + a[r] == 0) {
				cout << a[i] << a[l] << a[r];
				break;
			}else if ((a[i] + a[l] + a[r]) > 0) {
				r--;
			}
			else {
				l++;
			}
		}
	}
}