#include <iostream>
#include <algorithm>
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
    long double x1,x2,y1,y2,r1,r2;
    while(cin>>x1>>y1>>r1>>x2>>y2>>r2){
        if(abs(x1-x2)*abs(x1-x2)+abs(y1-y2)*abs(y1-y2)>=(r1+r2)*(r1+r2))
            cout<<"Nearly\n";
        else
            cout<<"Quick in\n";
    }


}



