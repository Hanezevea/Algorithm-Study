#include <bits/stdc++.h>
using namespace std;

int n,m,ans,mi=INT_MAX;//mi初始化成一个很大的数

char c[55][55];
int main()
{
	int i,j,k,g;
	cin>>n>>m;
	for(i=1;i<=n;i++)
	  for(j=1;j<=m;j++) cin>>c[i][j];  //填入字符 
	for(i=1;i<=n-2;i++)  //遍历1到n-2行代表白色区域可取数 
	  for(j=i+1;j<=n-1;j++)
	  {
	    ans=0;
 
	    for(k=1;k<=i;k++)
	      for(g=1;g<=m;g++) if(c[k][g]!='W') ans++; //白色区域 
	    for(k=i+1;k<=j;k++)
	      for(g=1;g<=m;g++) if(c[k][g]!='B') ans++; //蓝色区域 
	    for(k=j+1;k<=n;k++)
	      for(g=1;g<=m;g++) if(c[k][g]!='R') ans++;//红色区域 
   
	    mi=min(ans,mi);//更新答案
	  }
	cout<<mi<<endl;
	return 0;
}

