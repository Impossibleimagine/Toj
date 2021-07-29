#include <bits/stdc++.h>
#define LoveRem ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;

int main()
{
    LoveRem
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    if((c>=a&&c<=b)||(d>=a&&d<=b)||(c<=a&&d>=b))
        cout<<"yes\n";
    else
        cout<<"no\n";
}
