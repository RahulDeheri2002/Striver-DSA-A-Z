#include <bits/stdc++.h>
using namespace std;

void isSingle(int arr[], int n) {
    int xorr = 0;
    for(int i=0; i<n; i++) {
        xorr = xorr^arr[i];
    }
    cout << "The single element is: " << xorr << endl;
}
int main()
{
    int n;
    cout << "Enter size of Array: "; cin >> n;
    int arr[n]={0};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    isSingle(arr, n);
}