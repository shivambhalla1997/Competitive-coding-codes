// Prime permutations
// link to probelm : https://projecteuler.net/problem=49
// code by : shivam bhalla (f2016941)

    #include <bits/stdc++.h>

    using namespace std;

    bool isPrime(int n){
        for(int i=2;i<=(n/2);i++){
            if(n%i==0)
                return false;
        }
        return true;
    }

    string to_s(int n){
        string s="";
        while(n){
            int k=n%10;
            char c=k+'0';
            s=c+s;
            n=n/10;
        }
        return s;
        cout<<s<<" ";
    }

    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        map<string , vector<int> >mp;
        for(int i=1000;i<10000;i++){
            if(isPrime(i)){
                string s=to_s(i);
                sort(s.begin(),s.end());
                mp[s].push_back(i);
            }
        }
        for(auto i: mp){
            if(i.second.size()>3){
                vector<int>v;
                for(int j=0;j<i.second.size();j++)
                    v.push_back(i.second[j]);
                sort(v.begin(),v.end());
                int n=v.size();
                for(int j=0;j<n;j++){
                    for(int k=j+1;k<n;k++){
                        int d=v[k]-v[j];
                        for(int z=k+1;z<n;z++){
                            if(v[z]==v[k]+d)
                                cout<<v[j]<<" "<<v[k]<<" "<<v[z]<<"\n";
                        }
                    }
                }
            }
        }
        return 0;
    }
