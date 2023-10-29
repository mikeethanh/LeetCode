#include<iostream>
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {};
};
//
class Solution {
public:
	TreeNode* invertTree(TreeNode* root) {
		if (!root) {
			return nullptr; // Trường hợp cơ bản: cây rỗng
		}

		// Đảo ngược cây con trái và cây con phải
		TreeNode* leftSubtree = invertTree(root->left);
		TreeNode* rightSubtree = invertTree(root->right);

		// Swap cây con trái và cây con phải
		root->left = rightSubtree;
		root->right = leftSubtree;

		return root;
	}
};

void printPreorder(TreeNode* root) {
	if (!root) {
		return;
	}
	cout << root->val;
	printPreorder(root->left);
	printPreorder(root->right);
};

void addLeaf(TreeNode*& root, int x) {
	TreeNode* newNode = new TreeNode(x);
	if (root == nullptr) {
		root = newNode;
	}
	else {
		if (x < root->val) {
			addLeaf(root->left, x);
		}
		else if (x > root->val) {
			addLeaf(root->right, x);
		};
	};
}


int main() {
	TreeNode* root = new TreeNode(4);
	addLeaf(root,2);
	addLeaf(root, 7);
	addLeaf(root, 1); 
	addLeaf(root, 3);
	addLeaf(root, 6); 
	addLeaf(root, 9);
	printPreorder(root);
	Solution solution;
	TreeNode* newroot = solution.invertTree(root);
	printPreorder(newroot);
}