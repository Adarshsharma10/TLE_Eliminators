#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if (n == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        long long odd_count = 0;

        map<char, int> freq;
        for (auto it : s)
        {
            freq[it]++;
        }
        for (auto i : freq)
        {
            if (i.second % 2 == 1)
            {
                odd_count++;
            }
        }

        if(odd_count-k <=1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
}

// Successfully submitted