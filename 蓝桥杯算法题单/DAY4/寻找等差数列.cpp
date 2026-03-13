#include <bits/stdc++.h>

using namespace std;
int a[10005];
int gcd (int x,int y)
{
	if (y==0){
		return x;
	}
	return gcd(y,x%y);
}


signed main()
{
	 
	int n ;cin>>n;

	int s;
	for(int i=0;i<n;i++){
		cin>>a[i];
		
	}
	if (a[0]==a[n-1]){
		cout<<n;
		return 0;
	}
	sort(a,a+n);
	s=a[1]-a[0];
	for(int i=1;i<n;i++){
		s=gcd(s,a[i]-a[i-1]);
	}
	int sum=(a[n-1]-a[0])/s+1;

	cout<<sum;
	
	
}
