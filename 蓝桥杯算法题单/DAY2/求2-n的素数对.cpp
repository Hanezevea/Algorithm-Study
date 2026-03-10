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
    int n;
    cin>>n;
    bool Salah=0;//Salah代表是否有素数对
    for(int i=1;i<=n-2;i++)//i循环到n-2是为了防止另一个数超过n的范围
        if(Isprime(i)&&Isprime(i+2))//找到了素数对
        {
            cout<<i<<" "<<i+2<<endl;//输出
            Salah=1;//记录有素数对
        }
    if(!Salah)cout<<"empty"<<endl;//没有找到素数对，输出empty
    return 0;
}

