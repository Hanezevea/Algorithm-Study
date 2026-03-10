#include<bits/stdc++.h>
using namespace std;
bool Isprime(int x)//判断是否是素数的函数，返回0代表不是素数，返回1代表是素数
{
    if(x<=1)return 0;//特判
    if(x==2)return 1;
    for(int i=2;i*i<=x;i++)//枚举可能的因数
        if(x%i==0)return 0;//能被整除，存在除了1与自身以外的因数，不是素数
    return 1;//否则就一定是素数
}
int main()
{
    int n,sum=0;
    cin>>n;
    for(int i=2;i<=n;i++)
        if(Isprime(i))sum++;//是素数
    cout<<sum<<endl;
    return 0;
}

