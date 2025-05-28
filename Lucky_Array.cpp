#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int minVal = INT_MAX;

    for(int i = 0; i < n; i++) {
        if(a[i] < minVal) {
            minVal = a[i];
        }
    }
    int freq = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == minVal) {
            freq++;
        }
    }
    if(freq%2 == 1){
           cout << "Lucky" << endl;
    } else {
        cout << "Unlucky" << endl;
    }
    return 0;
}
