#include<iostream>
using namespace std;

bool check(int a[][100]) {
	int x[10]; 
	memset(x, 0, sizeof(x));
    //duyet theo hang
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			if (x[a[i][j]] == 0 && a[i][j] != 0) {
				x[a[i][j]]++;
			}
			else {
				return false;
			}
		}
	}
	memset(x, 0, sizeof(x));
	for (int j = 1; j <= 9; j++) {
		for (int i = 1; i <= 9; i++) {
			if (x[a[i][j]] == 0 && a[i][j] != 0) {
				x[a[i][j]]++;
			}
			else {
				return false;
			}
		}
	}

	memset(x, 0, sizeof(x));
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {

			for (int m = i; m <= i + 2; m++) {
				for (int n = j; n <= j + 2; n++) {
					if (x[a[m][n]] == 0 && a[m][n] != 0) {
						x[a[m][n]]++;
					}
					else {
						return false;
					}
				}
			}
		}
	}
	return true;
}

int main() { 
	int a[100][100];
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			cin >> a[i][j];
		}
	}


}