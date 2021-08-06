#include <bits/stdc++.h>

using namespace std;

int main() {
	int t = 0;
    long long x, y, z, s;
    
    cin >> t;
    
    while(t--) {
        cin >> y >> x;
        
        z = max(y, x);
        if (!(z % 2)) {
            y = x + y;
            x = y - x; 
            y = y - x;
        }
        
        if (x >= y) {
            s = z*z - (y - 1);
        } else {
            s = z*z - (2*z-1) + x; 
        }
        
        cout << s << "\n";
    }
}
