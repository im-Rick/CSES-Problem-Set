#include <bits/stdc++.h>

using namespace std;

void w_algorithm(long long x) {
	cout << x << " ";
	
	if (x == 1)
		return;
	
	if (x%2 == 0) {
	    w_algorithm( x/2 );
	} else {
	    w_algorithm( x*3 + 1 );
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long x;
	cin >> x;
	
	w_algorithm(x);
}
