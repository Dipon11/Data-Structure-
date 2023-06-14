#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> v(n);
    vector<int> v2(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int j = 0; j < n; j++)
    {
        cin >> v2[j];
    }
    
    for (int val : v2)
    {
        cout << val << " ";
    }
    for (int val : v)
    {
        cout << val << " ";
    }


    return 0;
}
