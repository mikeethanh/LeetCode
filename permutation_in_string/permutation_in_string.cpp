#include<iostream>
#include<string>
using namespace std;
//dao nguoc xau
void revert(string& s) {
    int l = 0; 
    int r = s.size() - 1;
    while (l < r) {
        swap(s[l], s[r]);
        l++, r--;
    }
}

bool check(string s1, string s2) {
    int k = s1.size();
    string s = "";
    for (int i = 0; i < k; i++) {
        s.push_back(s2[i]);
    }

    for (int i = k; i < s2.size(); i++) {
        if (s == s1) return true;
        else {
            s.erase(i-k);
            s.push_back(s2[i]);
        }
    }
    return false;
}

int main() {
    string s1; 
    cin >> s1;
    string s2;
    cin >> s2;
    revert(s1); 
    check(s1, s2);
}
