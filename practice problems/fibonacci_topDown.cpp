    #include <bits/stdc++.h>

    using namespace std;

    // space complexity is O(N)
    // time complexity is O(N)

    int fib(int n, int dp[]){
        //base case
        if(n==0 || n==1)
            return n;
        if(dp[n]!=0)  // if we have pre computer earlier , we just have to return the pre calculated value.
            return dp[n];
        int ans;
        ans=fib(n-1,dp)+fib(n-2,dp);
        return dp[n]=ans;    // before returning save the value in dp of n
    }

    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int n;
        cin>>n;
        int dp[100]={0};  // dp array initialized with 0
        cout<<fib(n,dp);
        return 0;
    }
