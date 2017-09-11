//
//  main.cpp
//  107-levelOrderBottom
//
//  Created by FlyElephant on 2017/9/11.
//  Copyright © 2017年 FlyElephant. All rights reserved.
//

#include <iostream>
#include <vector>
#include <queue>

using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> vvi;
        if (root == NULL) {
            return vvi;
        }
        queue<TreeNode *> queue;
        queue.push(root);
        while (!queue.empty()) {
            vector<int> vi;
            int size = (int)queue.size();
            for (int i = 0; i < size; i++) {
                TreeNode *node = queue.front();
                queue.pop();
                if (node->left != NULL) {
                    queue.push(node->left);
                }
                if (node->right != NULL) {
                    queue.push(node->right);
                }
                vi.push_back(node->val);
            }
            vvi.push_back(vi);
        }
        reverse(vvi.begin(), vvi.end());
        return vvi;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
//    cout << "Hello, World!\n";
//    int n[] = {1, 2, 3, 4, 5} ;
//    vector<int> V;
//    vector<int> a(n, n+5);              //将数组n的前5个元素作为向量a的初值
//    for (int i = 0; i < a.size(); i++) {
//        cout << a[i]<<endl;
//    }
    TreeNode node1 = TreeNode(15);
    TreeNode node2 = TreeNode(7);
    TreeNode node3 = TreeNode(9);
    TreeNode node4 = TreeNode(20);
    node4.left = &node1;
    node4.right = &node2;
    TreeNode node5 = TreeNode(3);
    node5.left = &node3;
    node5.right = &node4;
    Solution solution;
    vector<vector<int>> vvi = solution.levelOrderBottom(&node5);
    for (int i = 0; i < vvi.size(); i++) {
        vector<int> tmp = vvi[i];
        for (int j = 0; j < tmp.size(); j++) {
            cout << tmp[j] << " ";
        }
        cout << endl;
    }
    return 0;
}
