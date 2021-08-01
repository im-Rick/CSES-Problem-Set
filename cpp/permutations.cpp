#include <bits/stdc++.h>

using namespace std;

void print_vector(const vector<int> A) {
    for (auto x : A) {
        cout << x << " ";
    }
}

// function to determinate beautiful permutation
bool test(const vector<int> vi) {
    // we could try binary search
    for (auto it=vi.begin(); it < vi.end() - 1; ++it) {
        if (abs(*it - *(it + 1)) == 1) {
            return false;
        }
    }
    return true;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> vi;
    int n;
    int cc = 0;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        vi.push_back(i + 1);
    }
    
    do {
        if (test(vi) && cc == 0) {
            print_vector(vi);
            cc += 1;
            break;
        }
    } while (next_permutation(vi.begin(), vi.end()));
    
    if (cc == 0) {
        cout << "NO SOLUTION";
    }
}
