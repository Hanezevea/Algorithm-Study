#include <bits/stdc++.h>
using namespace std;
const long long P=1e9;
int main(){
    long long f=1;
    long long sum=0;
    for(int i=1;i<=39;i++)//可以发现加到40的阶乘正好又9个零，因此我们只需要求39阶乘的末尾9位数 
    {
        f=(f*i)%P;
        sum+=f;
        sum%=P;
    }
    cout<<sum;
}

