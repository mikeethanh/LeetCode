#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        generate(result, "", n, n);
        return result;
    }

    void generate(vector<string>& result, string current, int open, int close) {
        if (open == 0 && close == 0) {
            result.push_back(current);
            return;
        }

        if (open > 0) {
            generate(result, current + "(", open - 1, close);
        }
        if (close > open) {
            generate(result, current + ")", open, close - 1);
        }
    }
};

int main() {
    Solution solution;
    int n = 3;
    vector<string> combinations = solution.generateParenthesis(n);

    for (const string& combination : combinations) {
        cout << combination << endl;
    }

    return 0;
}
