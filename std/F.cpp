#include <iostream>
#include <map>
using namespace std;
map<int,int> mp;
int main()
{
    int n;
    cin>>n;
    int mn1=1e9, mn2=1e9;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        if(mp[x])
        {
            int t = i-mp[x];    // q-p
            int r = mp[x]+i;    // p+q
            if(t<mn1||(t==mn1&&r<mn2))
            {
                mn1 = t;
                mn2 = r;
            }
            mp[x] = i;          // 更新上一次出现的位置
        }
        else mp[x] = i;
    }
    cout<<(mn2==1e9?-1:mn2)<<endl;
    return 0;
}
