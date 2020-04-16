// Prime permutations
// link to probelm : https://projecteuler.net/problem=50
// code by : shivam bhalla (f2016941)

    #include <bits/stdc++.h>

    using namespace std;

    bool p[1000002];
    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        for(int i=2;i<=1000000;i++)
            p[i]=true;
        p[0]=false;
        p[1]=false;
        for(int i=2;i*i<=1000000;i++){
            if(p[i]==true){
                for(int j=i*i;j<=1000000;j+=i)
                    p[j]=false;
            }
        }
        vector<int>a;
        for(int i=2;i<=1000000;i++)
            if(p[i]==true){
                a.push_back(i);
            }
        int n=a.size();
        vector<long long>b(n+1);
        b[0]=0;
        for(int i=1;i<=n;i++)
            b[i]=b[i-1]+a[i-1];
        int maxi=0;
        int val=0;
        for(int i=0;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                long long z=b[j]-b[i];
                if(z>1000000)
                    break;
                if(z<=1000000 && p[(int)z]==true && j-i>maxi){
                    maxi=j-i;
                    val=z;
                }
            }
        }
        cout<<val;
        return 0;
    }
