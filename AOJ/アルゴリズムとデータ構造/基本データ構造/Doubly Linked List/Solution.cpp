#include <cstdio>
#include <list>
#include <algorithm>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    list<int> ans;
    for(int i=0; i<n; i++) {
        char s[20];
        int key;
        scanf("%s", s);
        if(s[0] == 'i') {
            scanf("%d", &key);
            ans.push_front(key);
        }else if(s[6] == 'F') {
            ans.pop_front();
        }else if(s[6] == 'L') {
            ans.pop_back();
        }else if (s[0] == 'd') {
            scanf("%d", &key);
            for(auto itr = ans.begin(); itr != ans.end(); itr++){
                if(*itr == key) {
                    ans.erase(itr);
                    break;
                }
            }
        }
    }
    int i = 0;
    for(auto itr = ans.begin(); itr != ans.end(); itr++) {
        if(i++) printf(" ");
        printf("%d", *itr);
    }
    printf("\n");
}