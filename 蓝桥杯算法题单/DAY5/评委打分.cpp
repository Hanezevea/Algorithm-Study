#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
int a[N];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    int maxn = max(a[1], a[2]);
    int minn = min(a[1], a[2]);
    long long sum = a[1] + a[2];  
    // 从第3个评委开始计算
    for (int i = 3; i <= n; ++i) {
        sum += a[i];  
        

        if (a[i] > maxn) {
            maxn = a[i];
        } else if (a[i] < minn) {
            minn = a[i];
        }


        double avg = 1.0 * (sum - maxn - minn) / (i - 2);

        printf("%.2f\n", avg);
    }

    return 0;
}
