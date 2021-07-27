#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

	int n;
    int x;
    long long count = 0;
	vector<int> vi;
    
	cin >> n;
    for ( int i = 0; i < n; i++ ) {
        cin >> x;
        vi.push_back(x);
    }
    
    // write all the sentence give us more control in
    // the iteration
    for ( auto it=vi.begin()+1; it<vi.end(); ++it ) {
        // compare with the prev element
        while ( *it < *(it - 1) ) {
            // modify the actual value
            *it = (*it) + 1;
            count += 1;
        }
    }
    
    cout << count;
    
    /*
    for ( auto& it : vi )
        cout << it;
    */
}
