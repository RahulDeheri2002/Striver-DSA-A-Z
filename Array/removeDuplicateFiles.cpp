#include <bits/stdc++.h>
using namespace std;

void removeDuplicate(int arr[], int n)
{
    int i=0;
    for(int j=1; j<n; j++)
    {
        if(arr[j] != arr[i])
        {
            arr[i+1] = arr[j];
            i++;
        }
    }
    cout << "Number of unique elements: " << i << endl;
}
int main()
{
    int n;
    cout << "Enter size of Array: "; cin >> n;
    int arr[n]={0};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    removeDuplicate(arr, n);
}