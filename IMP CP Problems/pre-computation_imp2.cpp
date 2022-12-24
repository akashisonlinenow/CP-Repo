// Another imp problem of precomputation ---> which is explained on video no.22 luv cp playlist in this concept of prefix sum is used.

#include <bits/stdc++.h>

using namespace std;

const int N = 1e7 + 10;
long long int arr[N];

int main()
{
    int n, m;
    cin >> n, m;

    while (m--)
    {
        int a, b, d;
        cin >> a >> b >> d;

        arr[a] += d;
        arr[b + 1] -= d;
    }

    for (int i = 1; i <= n; i++) // this is how prefix sum is calculated
    {
        arr[i] += arr[i - 1];
    }
    long long mx = -1;
    for (int i = 1; i <= n; i++) // this loop finds the maximum element from array
    {
        if (mx < arr[i])
        {
            mx = arr[i];
        }
    }
    cout << mx << endl;
}
