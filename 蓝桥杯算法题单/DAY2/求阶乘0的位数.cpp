#include<bits/stdc++.h>
using namespace std;
 


signed main ()
{
	int n;cin>>n;
	long long sum=0,ans=0;
	for(int i=1;i<=n;i++)
	{
        int t=i;
		while (t%5==0){ //由于2的个数显著大于5的个数，只需计算5的个数就可以得到0的个数 
		sum++;
		t=t/5;
	}	
		ans+=sum;  //sum是一个数阶乘5的个数，ans是前n次数阶乘之和 
	}
	cout<<ans<<endl; 
}
