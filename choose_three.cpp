#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, s;
        cin >> n >> s; 

        int a[100];
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }
        sort(a, a + n);
        int found = 0;
        for (int x = 0; x < n - 2; x++) {
            for (int y = x + 1; y < n - 1; y++) {
                for (int z = y + 1; z < n; z++) {
                    if (a[x] + a[y] + a[z] == s) {
                        found = 1;
                        break;
                    }
                }
                if (found) break;
            }
            if (found) break;
        }
        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
