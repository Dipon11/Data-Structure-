#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    while (n > 0)
    {
        cout << v[n-1] << " ";
        n--;
    }

    return 0;
}
