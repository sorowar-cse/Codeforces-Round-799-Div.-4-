#include <map>
#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int a[50];

    int t, n; cin >> t;
    while(t--)
    {
        int ans=0, c=0;
        map<int, int> m;
        cin >> n;
        for(int i=0; i<n; i++)cin>>a[i];
        for(int i=0; i<n; i++)m[a[i]]++;

        for(auto &pair: m)
        {
            if(pair.second == 1)ans++;
            else if(pair.second%2)ans++;
            else c++;
        }

        ans+= c - c%2;
        cout << ans <<'\n';
    }

}

