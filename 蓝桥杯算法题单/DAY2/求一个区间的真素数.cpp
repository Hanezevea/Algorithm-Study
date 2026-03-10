#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int n, m;bool f, b;  //判断是否要输出，和No 
bool isprime(int n)  //判断逻辑 
{
    if(n == 1) return 0;
    if(n == 2) return 1;
    if(n % 2 == 0) return 0;
    for(int i = 3;i * i <= n;++i)
        if(n % i == 0) return 0;
    return 1;
}
int main()
{
    cin >> n >> m;
    for(int i = n;i <= m;++i)
    {
        string t = to_string(i);  //int转字符串函数 
        reverse(t.begin(), t.end());  //字符串反转 
        int j = stoi(t);           //字符串转int 
        if(isprime(i) && isprime(j))
        {
            if(f) cout << ",";
            cout << i;f = 1;b = 1;
        }
    }
    if(!b) cout << "No";
    return 0;
}

