#include <bits/stdc++.h>
using namespace std;

const int N=1e5+10;
long long a[N],b[N],c[N], n,x,y,z,sum;

bool cmp(long long  x ,long long  y){
	return x > y;
}

long long win(long long a1[N],long long b1[N],long long c1[N]){
	long long duc[N];
	for(long long i=1;i<=n;i++){
		duc[i]=a1[i]-b1[i]-c[i];
	}
	sort(duc+1,duc+1+n,cmp);
	long long res=0,k=0;
	for(int i=1;i<=n;i++){
		k+=duc[i];
		if(k>0)
		{res=i;}else break;
	}
	return res;
	
	
}



int main(){
	
	cin>>n;
	
	for(long long i=1;i<=n;i++) cin>>a[i];
	for(long long i=1;i<=n;i++) cin>>b[i];
	for(long long i=1;i<=n;i++) cin>>c[i];
	
	 x=win(a,b,c);
	 y=win(b,a,c);
	 z=win(c,a,b);
	
	sum=max(x,y);
	sum=max(sum,z);
	
	if(sum==0) cout<<-1;
	else cout<<sum;
	return 0;
	
}

