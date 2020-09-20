#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int x, int y) {
    while(y > 1 && x%y != 0) {
        x = x % y;
        swap(x, y);
    }
    return y;
}

int main() {
    int x, y;
    cin >> x >> y;
    if (x < y) {
        swap(x, y);
    }
    cout << gcd(x, y) << endl;
    return 0;
}