#include <cstdio>
#include <string>
#include <iostream>
#include <stack>
#include <cstdlib>
using namespace std;

int main() {
    string str;
    stack<int> S;
    while(cin >> str) {
        if(str == "+" ||  str == "-" ||  str == "*") {
            int a = S.top();
            S.pop();
            int b = S.top();
            S.pop();
            if(str == "+") {
                S.push(a+b);
            } else if (str == "-") {
                S.push(b-a);
            } else {
                S.push(a*b);
            }
        } else {
            S.push(atoi(str.c_str()));
        }
        if(getchar() == '\n') {
            cout << S.top() << endl;
            return 0;
        }
    }
}