#include <bits/stdc++.h>
using namespace std;
const long long P=722733748;
int main(){
    long long k,a,q,sum=1;
    cin>>k>>a>>q;
    sum=sum*a;
    for(int i=1;i<=k-1;i++){
        a=(a*q)%P;
        sum=sum*a%P;
    }
    cout<<sum;
}
