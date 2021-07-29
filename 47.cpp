#include <bits/stdc++.h>
#define LoveRem ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define DEBUG 0
#define int long long
using namespace std;
//string S="ABCDEFGHIJKLMNOPQRSTUVWXYZ",s="abcdefghijklmnopqrstuvwxyz";
int arr[1000010];

signed main()
{
    LoveRem
    if(DEBUG) cout<<"-----------OUT PUT-----------\n";
    //freopen("oput.txt","w",stdout);
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cin>>m;
    while(m--){
        int tar;
        cin>>tar;
        auto it = lower_bound(arr,arr+n,tar);
        if(*it == tar) cout<<tar;
        else{
            if((it-arr-1)==-1) cout<<"no ";
            else cout<<*(it-1)<<' ';
            if((it-arr)==n) cout<<"no";
            else cout<<*it;
        }
        cout<<'\n';
    }
}

