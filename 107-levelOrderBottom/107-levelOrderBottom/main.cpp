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
            for (int i = 0; i < queue.size(); i++) {
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
        return vvi;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    int n[] = {1, 2, 3, 4, 5} ;
    vector<int> V;
    vector<int> a(n, n+5);              //将数组n的前5个元素作为向量a的初值
    for (int i = 0; i < a.size(); i++) {
        cout << a[i]<<endl;
    }
    
    vector<vector<int>> test;
    vector<int> test1(n, n+2);
    vector<int> test2(n, n+3);
    for (int i = 0; i < test.size(); i++) {
        vector<int> tmp = test[i];
        cout << &tmp << endl;
//        for (int j = 0; j < tmp.size(); j++) {
//            
//        }
    }
    
    queue<int> queue;
    queue.push(10);
    queue.push(20);
    while (!queue.empty()) {
        cout << queue.front()<<endl;
        queue.pop();
    }
    TreeNode node1 = TreeNode(15);
    TreeNode node2 = TreeNode(7);
    TreeNode node3 = TreeNode(9);
    TreeNode node4 = TreeNode(20);
    node4.left = &node1;
    node4.right = &node2;
    TreeNode node5 = TreeNode(3);
    node5.left = &node3;
    node5.right = &node4;
    return 0;
}
