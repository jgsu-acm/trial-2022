#include <iostream>
using namespace std;
int main()
{
    long long n,m;
    cin>>m>>n;
    bool flag = false;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        m -= x;
        if(m<=0)    // 饼被吃完了
        {
            flag = true;
            cout<<"YES"<<' '<<i<<endl;
            break;
        }
    }
    if(!flag) cout<<"NO"<<' '<<m<<endl;
    return 0;
}
