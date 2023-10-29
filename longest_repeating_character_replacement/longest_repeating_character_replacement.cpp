#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;
    int k;
    cin >> k;

    // Xây dựng mảng đếm
    vector<int> count(26, 0);
    // Tần suất của chữ cái trong dãy con
    int max_count = 0;
    // Độ dài dãy con dài nhất
    int max_len = 0;
    //
    int l = 0;
    int r = 0;

    for (l = 0; l < s.size(); l++) {
        // Tăng tần suất của chữ cái xuất hiện
        count[s[l] - 'A']++;
        // Tìm tần suất chữ cái xuất hiện nhiều nhất
        max_count = max(max_count, count[s[l] - 'A']);

        if (l - r + 1 - max_count > k) {
            count[s[r] - 'A']--;
            r++;
        }

        max_len = max(max_len, l - r + 1);
    }

    cout << max_len;
    return 0;
}
