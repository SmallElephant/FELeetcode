//
//  main.cpp
//  155-MinStack
//
//  Created by keso on 2017/9/17.
//  Copyright © 2017年 FlyElephant. All rights reserved.
//

#include <iostream>
#include <stack>

using namespace std;

class MinStack {
private:
    stack<int> s1;
    stack<int> s2;
public:
    void push(int x) {
        s1.push(x);
        if (s2.empty() || x <= getMin()) {
            s2.push(x);
        }
    }
    
    void pop() {
        if (s1.top() == getMin()) {
            s2.pop();
        }
        s1.pop();
    }
    
    int top() {
        return s1.top();
    }
    
    int getMin() {
        return s2.top();
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    MinStack obj;
    obj.push(-2);
    obj.push(0);
    obj.push(3);
    int min = obj.getMin();
    obj.pop();
    printf("最小值:%d\n",min);
    return 0;
}
