#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r1, r2;   //test
    
    while(cin >> r1 >> r2)
    {
        int max = 0, temp = 0;

        for(int i = std::min(r1, r2); i <= std::max(r1, r2); i++)
        {
            temp = 1;
            long long int n = i;

            while(n != 1)
            {
                if(n % 2 == 1)
                    n = 3*n + 1;
                else
                    n /= 2;

                temp++;
            }
            if(max < temp)
                max = temp;
        }
        cout << r1 << " " << r2 << " " << max << endl;
    }
    return 0;
}