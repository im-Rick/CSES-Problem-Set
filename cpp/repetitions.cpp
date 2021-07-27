#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

	string str;
    cin >> str;
    
    // both are the same
    // auto c = str.begin() , *c == *it
    // string::iterator it , auto it
    char c = *str.begin();
    int m_count = 0;
    int c_count = 0;
    
    for ( string::iterator it=str.begin(); it!=str.end(); ++it ) {
        if ( c == *it ) {
            c_count += 1;
            m_count = max(c_count, m_count);
        } else {
            c = *it;
            // they already are the same
            c_count = 1;
        }
    }
    
    cout << m_count;
    
}
