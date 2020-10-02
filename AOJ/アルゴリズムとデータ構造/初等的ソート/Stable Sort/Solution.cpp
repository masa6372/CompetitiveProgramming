#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
struct card{
    int value;
    char name;
};
vector<card> bubble;
vector<card> selection;

void BubbleSort(vector<card> &a, int n) {
    for(int i=0; i<n; i++) {
        for(int j=n-1; j>i; j--) {
            if(a[j].value < a[j-1].value) {
                swap(a[j], a[j-1]);
            }
        }
    }
}

void SelectionSort(vector<card> &a, int n) {
    for(int i=0; i<n; i++) {
        int minj = i;
        for(int j=i; j<n; j++) {
            if(a[j].value < a[minj].value) {
                minj = j;
            }
        }
        swap(a[i], a[minj]);
    }
}

bool isStable(vector<card>bubble, vector<card> selection, int n) {
    for(int i=0; i<n; i++) {
        if(bubble[i].name != selection[i].name) return false;
    }
    return true;
}

int main() {
    cin >> n;
    vector<card> d;
    for(int i=0; i<n; i++) {
        int tmp1;
        char tmp2; 
        cin >> tmp2 >> tmp1;
        d.push_back({tmp1, tmp2});
    }
    bubble = d;
    selection = d;
    BubbleSort(bubble, n);
    SelectionSort(selection, n);
    for(int i=0; i<n-1; i++) {
        cout << bubble[i].name << bubble[i].value << " ";
    }
    cout << bubble[n-1].name << bubble[n-1].value << endl;
    cout << "Stable" << endl;
    for(int i=0; i<n-1; i++) {
        cout << selection[i].name << selection[i].value << " ";
    }
    cout << selection[n-1].name << selection[n-1].value << endl;
    if(isStable(bubble, selection, n)) {
        cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }
    return 0;
}