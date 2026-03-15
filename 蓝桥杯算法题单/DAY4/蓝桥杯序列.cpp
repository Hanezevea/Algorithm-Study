#include<iostream>
#include<algorithm>
using namespace std;
int a[100010];
int gcd(int x,int y){
	if(y==0)return x;
	return gcd(y,x%y);
}

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    long long ans=0;
    for(int i=1;i<=n;i++){   
        ans+=n/(a[i]/gcd(a[i],i)); //d*i mod a[i]=d mod a[i]/gcd(i,a[i])
    }
    cout<<ans;
    return 0;
}
