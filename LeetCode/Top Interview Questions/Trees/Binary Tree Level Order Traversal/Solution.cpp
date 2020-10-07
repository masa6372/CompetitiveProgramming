#include <iostream>
#include <vector>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

vector<vector<int>> ans;

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == nullptr) {
            return ans;
        }
        vector<int> tmp;
        if(root -> right -> val) {
            tmp.push_back(root -> right -> val);
        }
        if(root -> left -> val) {
            tmp.push_back(root -> left -> val);
        }
        ans.push_back(tmp);
        levelOrder(root -> right);
        levelOrder(root -> left);
    }
};