#include <bits/stdc++.h>
using namespace std;

void max(int arr[], int n) {
    int c=0, maxc=0;
    for(int i=0; i<n; i++) {
        if(arr[i]==1){
            c++;
            if(c>maxc)
                maxc=c;
        }
        else
            c=0;
    }
    cout << "Max consecutive 1s: " << maxc << endl;
}
int main()
{
    int n;
    cout << "Enter size of Array: "; cin >> n;
    int arr[n]={0};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    max(arr, n);
}