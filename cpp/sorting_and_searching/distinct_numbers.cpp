#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int x;
    set<int> s;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        s.insert(x);
    }
    
    cout << s.size();

}
