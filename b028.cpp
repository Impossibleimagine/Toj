#include <iostream>
#include <algorithm>
#define LoveRem ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define DEBUG 0
#define int long long
using namespace std;
//string S="ABCDEFGHIJKLMNOPQRSTUVWXYZ",s="abcdefghijklmnopqrstuvwxyz";
int dp[10][110];
int money(int ,int);
int ans=101;
int coin[6]={1,5,10,12,16,20};

signed main()
{
    LoveRem
    if(DEBUG) cout<<"-----------OUT PUT-----------\n";
    //freopen("oput.txt","w",stdout);
    int n;
    cin>>n;
    ans = money(0,n);
    cout<<ans<<'\n';
}

int money(int x,int y)
{
    if(y==0) return 0;
    if(x>=6) return -1;

    for(int i=0;i*coin[x]<=y;i++){
        int t = money(x+1,y-i*coin[x]);
        if(t>=0){
            ans = min(t+i,ans);
        }
    }
    return ans;
}


