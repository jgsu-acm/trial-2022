#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n), w(n);
        for(int i=0;i<n;i++)
        {
            int h,m,s;
            char c;
            cin>>h>>c>>m>>c>>s;
            v[i] = h*60*60+m*60+s;
            cin>>c;
            cin>>h>>c>>m>>c>>s;
            w[i] = h*60*60+m*60+s;
        }
        sort(v.begin(), v.end());
        sort(w.begin(), w.end());
        int sum = w[0]-v[0]+1;
        for(int i=1;i<n;i++) sum += w[i]-max(v[i]-1, w[i-1]);
        int sec = 60*60*24-sum;
        cout<<setw(2)<<setfill('0')<<sec/3600<<':'<<setw(2)<<setfill('0')<<(sec-sec/3600*3600)/60<<':'<<setw(2)<<setfill('0')<<sec%60<<'\n';
    }
    return 0;
}
