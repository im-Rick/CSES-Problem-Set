#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
    
    
	int n;
	cin >> n;
	int total = 0;
	int spected = 0;
	
	// dudoso : I think its better read all the numbers
	//          first and then make operations.	           
	int arr[n-1];
	for ( int i = 0; i < n-1; i++ ) {
		cin >> arr[i];
		spected += i+1;
	}
	spected += n;
	
	for ( int i = 0; i < n-1; i++ )
		total += arr[i];
	
	cout << spected - total;
}
