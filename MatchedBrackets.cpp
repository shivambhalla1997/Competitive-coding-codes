    // question link: https://www.codechef.com/LRNDSA02/problems/ZCO12001
    
    #include <bits/stdc++.h>

    using namespace std;
    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int n;
        cin>>n;
        int a=0;  // maximum depth of nested loop
        int aa=0;  
        int b=0;
        int bb=0;  // maximum brackets inside a complete bracket sequence
        int j=0;
        int x;
        int val=0;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x==1)
                val++;
            else
                val--;
            if(val>a){
                a=val;
                aa=i;
            }
            if(val==0 && (i-j+1)>b){
                b=i-j+1;
                bb=j;
                j=i+1;
            }
            else if(val==0){
                j=i+1;
            }
        }
        cout<<a<<" "<<aa+1<<" "<<b<<" "<<bb+1;
        return 0;
    }
