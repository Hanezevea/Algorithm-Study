#include <bits/stdc++.h>

using namespace std;

const int N=100005;
int h[N],ans[N];

int main(){
	
	int n;cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		cin>>h[i];
		for(int j=1;j*j<=h[i];j++){ //求这些数的每个公因数的个数
		 
			if(h[i]%j==0){
				ans[j]++;
				if(j*j!=h[i])
				{
					ans[h[i]/j]++;
				}
			}
		}
	}
	int x=0;
	for(int i=N-5;i>=1;i--){  //当一个公因数的个数大于3时说明有至少三个数的公因数相等 
		if (ans[i]>=3){
			x=i;
			break;
		}
	}
	sort(h+1,h+1+n);
	
	

	int c=0;   
	for(int i=1;i<=n;i++){  //从小到大遍历，输出字典序 

		if(h[i]%x==0){
			cout<<h[i]<<" ";
			c++;
		}
		if(c==3){
			return 0;
		}
	} 
	
	
}
