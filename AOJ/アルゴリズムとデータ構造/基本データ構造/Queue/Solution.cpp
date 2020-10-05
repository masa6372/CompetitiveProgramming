#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

struct type{
    string N;
    int time;
};

int main () {
    int n, q;
    cin >> n >> q;
    queue<type> Q;
    for(int i=0; i<n; i++){
        string N;
        int t;
        cin >> N;
        cin >> t;
        type tmp = {N, t};
        Q.push(tmp);
    }
    queue<type> ans;
    int now = 0;
    while(Q.size()) {
        if(Q.front().time > q) {
            int x = Q.front().time - q;
            now += q;
            string y = Q.front().N;
            Q.pop();
            Q.push({y, x});
        } else {
            int x = Q.front().time;
            now += x;
            string y = Q.front().N;
            Q.pop();
            ans.push({y, now});
        }
    }
    for(int i=0; i<n; i++) {
        cout << ans.front().N << " " << ans.front().time << endl;
        ans.pop();
    }
    return 0;
}
