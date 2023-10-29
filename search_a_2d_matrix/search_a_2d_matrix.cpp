#include<iostream>
using namespace std;

bool check(int a[3][4], int b) {
    int mark = 0;
    for (int i = 0; i < 3; i++) {
        if (b > a[i][0]) {
            mark = i;
        }
    }

    int l = 0; 
    int r = 3;
    while (l < r) {
        int m = (l + r) / 2;
        if (a[mark][m] > b) {
            r = m - 1;
        }
        else if (a[mark][m] < b) {
            l = m + 1;
        }
        else {
            return true;
        }
    }
    return false;
}

int main() {
    int matrix[3][4] = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    int target = 6;
    if (check(matrix, target) == true) {
        cout << "true";
    }
    else {
        cout << "false";
    }
}
