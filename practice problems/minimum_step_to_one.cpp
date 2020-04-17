    #include <bits/stdc++.h>

    using namespace std;

    // question link : https://www.spoj.com/problems/MST1/
    int dp[20000001];
    void solve(){
        dp[1]=0;
        for(int i=2;i<=20000000;i++){
            int a,b,c;
            a=INT_MAX;
            b=INT_MAX;
            c=INT_MAX;
            a=dp[i-1];
            if(i%2==0)
                b=dp[i/2];
            if(i%3==0)
                c=dp[i/3];
            dp[i]=min({a,b,c})+1;
        }
        return;
    }

    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int t;
        cin>>t;
        solve();
        int k=1;
        while(t--){
            int n;
            cin>>n;
            cout<<"Case "<<k<<": "<<dp[n]<<"\n";
            k++;
        }
        return 0;
    }
