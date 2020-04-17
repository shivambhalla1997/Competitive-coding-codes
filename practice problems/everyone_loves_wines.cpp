    #include <bits/stdc++.h>

    using namespace std;

    // question link : https://www.codechef.com/MALI2017/problems/MAXCOST
    int dp[2002][2002];
    int profit(vector<int>wines, int i, int j, int y){
        //base case
        if(i>j)
            return 0;
        // recurse function
        if(dp[i][j]!=0)
            return dp[i][j];
        int a=wines[i]*y + profit(wines,i+1,j,y+1);
        int b=wines[j]*y + profit(wines,i,j-1,y+1);
        return dp[i][j]=max(a,b);
    }

    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int n;
        cin>>n;
        vector<int>wines(n);
        for(int i=0;i<n;i++)
            cin>>wines[i];
        cout<<profit(wines,0,n-1,1);
        return 0;
    }
