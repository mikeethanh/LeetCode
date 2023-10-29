#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] > nums[right]) {
                // Ph?n t? t?i v? tr� mid l� ph?n c?a d�y l?n h?n, n�n di chuy?n left.
                left = mid + 1;
            }
            else {
                // Ph?n t? t?i v? tr� mid l� ph?n c?a d�y nh? h?n ho?c b?ng, n�n di chuy?n right.
                right = mid;
            }
        }
        // Khi left v� right tr�ng nhau, ta ?� t�m ???c ph?n t? nh? nh?t.
        return nums[left];
    }
};

int main() {
    vector<int> nums = { 3, 4, 5, 1, 2 };
    Solution solution;
    int result = solution.findMin(nums);
    cout << "Ph?n t? nh? nh?t l�: " << result << endl;

    return 0;
}
