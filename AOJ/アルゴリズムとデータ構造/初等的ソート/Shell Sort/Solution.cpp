#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> g;
vector<int> a;
int cnt = 0;

void insertionSort(vector<int> &a, int n, int g) {
    for(int i=g; i<n; i++) {
        int v = a[i];
        int j = i-g;
        while (j >=0 && a[j] > v) {
            a[j+g] = a[j];
            j = j-g;
            cnt++;
        }
        a[j+g] = v;
    }
}

void shellSort(vector<int> &a, int n) {
    cnt = 0;
    for(int h=1; ; ){
        if (h > n) break;
        g.push_back(h);
        h = 3 * h + 1;
    }
    for(int i= g.size()-1; i>=0; i--) {
        insertionSort(a, n, g[i]);
    }
}

int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
    shellSort(a, n);
    cout << g.size() << endl;
    for(int i=g.size()-1; i>=0; i--) {
        cout << g[i] << " ";
    } 
    cout << endl;
    cout << cnt << endl;
    for(int i=0; i<n; i++) {
        cout << a[i] << endl;
    }
    return 0;
}