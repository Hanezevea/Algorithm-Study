#include <bits/stdc++.h>
using namespace std;

bool is_prime(int s){
    if (s <= 1) return 0;
    if (s == 2) return 1;
    if (s % 2 == 0) return 0;
    for (int i = 3; i * i <= s; i += 2) {
        if (s % i == 0) return 0;
    }
    return 1;
}

int main(){
	int m ,n;
	cin>>n>>m;
	unordered_set<int> ans;
	vector<int> a(n),b(m); 
	
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int j=0;j<m;j++)
	cin>>b[j];
	
	    
    
    for (int ai : a) {
        for (int bj : b) {
            int S = ai + bj;
            if (S <= m+n && is_prime(S)) {
                ans.insert(S);
            }
        }
    }
    cout<<ans.size();
	
	
} 
