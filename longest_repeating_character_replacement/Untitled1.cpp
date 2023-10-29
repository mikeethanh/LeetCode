#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;
    int k;
    cin >> k;
    
    // Xây d?ng m?ng d?m
    vector<int> count(26, 0);
    // T?n su?t c?a ch? cái trong dãy con
    int max_count = 0;
    // Ð? dài dãy con dài nh?t
    int max_len = 0;
    //
    int l = 0;
    int r = 0;
    
    for (l = 0; l < s.size(); l++) {
        // Tang t?n su?t c?a ch? cái xu?t hi?n
        count[s[l] - 'A']++;
        // Tìm t?n su?t ch? cái xu?t hi?n nhi?u nh?t
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

