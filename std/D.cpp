#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 1e6+5;
long long a[maxn], pre[maxn];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1, a+1+n);
    for(int i=1;i<=n;i++) pre[i] = pre[i-1]+a[i];
    while(m--)
    {
        int x,y;
        cin>>x>>y;
        cout<<pre[n-x+y]-pre[n-x]<<'\n';
    }
    return 0;
}
