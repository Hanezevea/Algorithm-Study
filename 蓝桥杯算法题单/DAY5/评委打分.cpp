#include <bits/stdc++.h>
using namespace std;

const int N=1e6+10;
int a[N];
int main(){
	int n;cin>>n;
	int maxn,minn;
	double sum;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	
	if(a[1]>a[2]){
		maxn=a[1];
		minn=a[2];
	}else {
		maxn=a[2];
		minn=a[1];
	}
	sum=maxn+minn;
	bool flag=0;
	double averge=sum/2; 
	for(int i=3;i<=n;i++){
		if(a[i]>maxn){	
		 	flag=1;
			maxn=a[i];
			averge=(sum-minn)/(i-2);
			
		} 
		if(a[i]<minn){
			flag=1;
			minn=a[i];
			averge=(sum-maxn)/(i-2);
		}
		sum+=a[i];
		
		if(!flag){
			flag=0; 
			averge=(sum-maxn-minn)/(i-2);
		}
		printf("%.2f\n",averge);
	
	}
	return 0; 
} 
