#include <bits/stdc++.h>
using namespace std;
const int MAXN=110;
int v[MAXN],w[MAXN];
vector<int> g[MAXN];
int dp[MAXN][MAXN];
int m,n;



//这是一个背包和树形dp问题
void dfs(int u)
{
    for(int j=v[u];j<=m;j++) dp[u][j]=w[u];  //先选择一个树枝，那么必然先选择它的父节点填入背包
    
    for(int son : g[u])   //遍历每个父节点中的子节点，每个子节点可视为一个背包分组
    {
        dfs(son);  
         
        for(int j=m;j>=v[u];j--)   //倒序遍历背包容量，选择物品
        {
            for(int k=0;k<=j-v[u];k++)
            {
                dp[u][j]=max(dp[u][j],dp[u][j-k]+dp[son][k]);
            }
        }
    }
    
}

int main()
{
    cin>>n>>m;
    int root=-1;
    for(int i=1;i<=n;i++)//按次序遍历输入的每个物品，找到根节点的序号，
                                //不是根节点的按树节点存入动态数组
    { 
        int p;
        cin>>v[i]>>w[i]>>p;
        if (p==-1) root=i;
        else g[p].push_back(i); 
    }
    dfs(root);

    cout << dp[root][m] << endl; // 输出在根节点容量为m时的最大价值
    return 0;
    
/*测试数据 
5 7
2 5 3
3 1 3
2 2 -1
2 5 1
2 7 1

结果 14
*/ 
    
}

