#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, flag = 0;

    cout << "How many elements : ";

    cin >> n;

    char A[n];

    cout << "Input array elements : ";

    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }

    char x;

    cout << "Input element to br searched : ";

    cin >> x;

    for(int i = 0; i < n; i++) {
        if(A[i] == x) {
            cout << x << " found at position " << i + 1 << endl;
            flag++;
        }
    }

    if(flag == 0) {
        cout << x << " not found" << endl;
    }

    return 0;
}