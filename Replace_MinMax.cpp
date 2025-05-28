#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }
    int max_val = a[0],min_val = a[0];
    int max_index = 0,min_index = 0;
    for(int i = 1;i<n;i++){
        if(a[i]<min_val){
            min_val = a[i];
            min_index = i;
        }
        if(a[i]>max_val){
            max_val = a[i];
            max_index = i;
        }
    }
    int temp = a[min_index];
    a[min_index] = a[max_index];
    a[max_index] = temp;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
