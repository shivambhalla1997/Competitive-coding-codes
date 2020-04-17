    #include <bits/stdc++.h>

    using namespace std;

    // space complexity is O(N)
    // time complexity is O(N)

    int fib(int n){
        int dp[101]={0};
        dp[1]=1;
        for(int i=2;i<=n;i++)
            dp[i]=dp[i-1]+dp[i-2];
        return dp[n];
    }

    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int n;
        cin>>n;
        cout<<fib(n);
        return 0;
    }
