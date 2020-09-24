#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int ans = -1145141919;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int minNow = a[0];
    for (int i=1; i<n; i++) {
        ans = max(ans, a[i] - minNow);
        minNow = min(minNow, a[i]);
    }
    cout << ans << endl;
    return 0;
}