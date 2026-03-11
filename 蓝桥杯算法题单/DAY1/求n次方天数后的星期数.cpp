#include <bits/stdc++.h>
using namespace std;
int fmod(int a, int b ,int c)
{
    int ans=a%c;
    while (b>1)
    {
        ans=(ans*a)%c;
        b--;
    }
    return ans;
}
int main()
{
    int a=6;
    a=(a+fmod(20,22,7))%7;
    if(a==0)cout<<7;
    else cout<<a;
}

