#include <bits/stdc++.h>
#define LoveRem ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define DEBUG 0
#define int long long
using namespace std;
//string S="ABCDEFGHIJKLMNOPQRSTUVWXYZ",s="abcdefghijklmnopqrstuvwxyz";

signed main()
{
    LoveRem
    if(DEBUG) cout<<"-----------OUT PUT-----------\n";
    //freopen("oput.txt","w",stdout);
    int n,m;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        a.emplace_back(num);
    }
    sort(a.begin(),a.end());
    cin>>m;
    for(int i=0;i<m;i++){
        int inp=0;
        cin>>inp;
        auto big = lower_bound(a.begin(),a.end(),inp);
        auto small = big-1;
        if(*big==inp) cout<<inp<<'\n';
        else{
            if(big==a.begin()) cout<<"no ";
            else cout<<*small<<" ";
            if(big==a.end()) cout<<"no";
            else cout<<*big<<'\n';
        }
    }
}
