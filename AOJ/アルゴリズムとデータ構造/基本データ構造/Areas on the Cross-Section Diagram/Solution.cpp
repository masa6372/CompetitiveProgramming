#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    stack<int> st1;
    stack<pair<int, int> > st2;
    int sum = 0;
    for(int i=0; i<s.size(); i++) {
        if(s[i] == '\\') {
            st1.push(i);
        } else if (s[i] == '/' && st1.size() > 0) {
            int j = st1.top();
            st1.pop();
            sum += i-j;
            int area = i - j;
            while(st2.size() > 0 && st2.top().first > j) {
                area += st2.top().second;
                st2.pop();
            }
            st2.push(make_pair(j, area));
        }
    }
    vector<int> ans;
    while(st2.size()) {
        ans.push_back(st2.top().second);
        st2.pop();
    }
    reverse(ans.begin(), ans.end());
    cout << sum << endl;
    cout << ans.size();
    for(int i=0; i<ans.size(); i++) {
        cout << " ";
        cout << ans[i];
    }
    cout << endl;
}