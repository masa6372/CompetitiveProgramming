#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    int n, q;
    cin >> n;
    set<int> s;
    for(int i=0; i<n; i++) {
        int tmp;
        cin >> tmp;
        s.insert(tmp);
    }
    cin >> q;
    vector<int> t(q);
    for(int i=0; i<q; i++) {
        cin >> t[i];
    }
    int num = 0;
    for(int i=0; i<q; i++) {
        for(auto itr = s.begin(); itr != s.end(); itr++){
            if(*itr == t[i]){
                num++;
            }
        }
    }
    cout << num << endl;
    return 0;
}