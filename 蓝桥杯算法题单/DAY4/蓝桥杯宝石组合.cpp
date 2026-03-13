#include <bits/stdc++.h>
using namespace std;
#define int long long 
int gcd(int x,int y){
	if(y==0)return x;
	return gcd(y,x%y);
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
} 

int n;
int a[100005];	int b[2];
signed main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	
	sort(a+1,a+1+n);
	int s=0; 
	int l=lcm(a[3],a[1]);
	int c=lcm(a[1],a[2]);
	int m=lcm(a[2],a[3]);
	s=a[1]*a[2]*a[3]*lcm(l,m)/l/c/m; 
	b[0]=a[1];b[1]=a[2];b[2]=a[3];
	for(int i=3;i<=n;i++) 
	{
		m=lcm(a[i],a[i-1]);
		c=m;
		l=lcm(a[i],a[i-2]);
		if(s<a[i]*a[i-1]*a[i-2]*lcm(l,m)/l/c/m){
			b[0]=a[i-2];b[1]=a[i-1];b[2]=a[i];
			s=s<a[i]*a[i-1]*a[i-2]*lcm(l,m)/l/c/m;
		}
	}
	cout<<b[0]<<' '<<b[1]<<' '<<b[2]<<endl;
} 
