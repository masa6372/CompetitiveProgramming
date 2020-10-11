#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<int> s;
int ans;
set<int> tmp;

void binarySearch(int x) {
    int MAX = tmp.size();
    int MIN = 0;
    int MID = 0;
    while(MAX > MIN){
        int MID = (MAX + MIN) / 2;
        if (s[MID] == x) {
            ans++;
            break;
        } else if (s[MID] > x) {
            MAX = MID;
        } else {
            MIN = MID+1;
        }
    }
    return ;
}

int main() {
    cin >> n;
    for(int i=0; i<n; i++) {
        int num;
        cin >> num;
        tmp.insert(num);
    }
    for(auto itr = tmp.begin(); itr != tmp.end(); itr++) {
        s.push_back(*itr);
    }
    int q;
    cin >> q;
    vector<int> t(q);
    for(int i=0; i<q; i++) {
        cin >> t[i];
    }
    for(int i=0; i<q; i++) {
        binarySearch(t[i]);
    }
    cout << ans << endl;
    return 0;
}