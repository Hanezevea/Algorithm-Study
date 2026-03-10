#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int i=6;i<=n;i++){
		int sum=0;
		 
		for(int j=1;j<i;j++){  //这里可以优化，优化成j<=sqrt(i),但代码后面的逻辑就要改变了 
		 
			if(i % j== 0) sum+=j;
		}
		if (sum==i) cout<<i<<endl;   //判断是否相等，相等输出结果 
		sum=0; 
		
		
	}
}
