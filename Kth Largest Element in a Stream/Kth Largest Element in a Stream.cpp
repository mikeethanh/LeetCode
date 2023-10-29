#include <iostream>
#include <vector>
#include <queue>

class KthLargest {
public:
    KthLargest(int k, std::vector<int>& nums) {
        this->k = k;
        for (int num : nums) {
            add(num);
        }
    }

    int add(int val) {
        minHeap.push(val);

        if (minHeap.size() > k) {
            minHeap.pop();
        }

        return minHeap.top();
    }

private:
    int k;
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
};

int main() {
    std::vector<int> nums = { 4, 5, 8, 2 };
    KthLargest kthLargest(3, nums);
    std::cout << kthLargest.add(3) << std::endl; // In ra phần tử lớn thứ 3 sau khi thêm 3 vào dãy là 4
    std::cout << kthLargest.add(5) << std::endl; // In ra phần tử lớn thứ 3 sau khi thêm 5 vào dãy là 5
    std::cout << kthLargest.add(10) << std::endl; // In ra phần tử lớn thứ 3 sau khi thêm 10 vào dãy là 5
    std::cout << kthLargest.add(9) << std::endl; // In ra phần tử lớn thứ 3 sau khi thêm 9 vào dãy là 9
    return 0;
}
