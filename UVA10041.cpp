#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test, n;
    cin >> test;

    for(int i = 0; i < test; i++)
    {
        cin >> n;
        vector<int> v(n);

        for(int k = 0; k < n; k++)
            cin >> v[k];

        sort(v.begin(), v.end());
        int median = n/2;
        
        int sum = 0;
        for(int k = 0; k < n; k++)
            sum += abs(v[k] - v[median]);

        printf("%d\n", sum);
    }
    
    return 0;
}