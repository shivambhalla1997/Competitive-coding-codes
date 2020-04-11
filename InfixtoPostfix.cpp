// question link: https://www.codechef.com/LRNDSA02/problems/INPSTFIX
// watch coding school video on youtube for more clearity

#include <bits/stdc++.h>

    using namespace std;
    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            string str;
            cin>>str;
            string ans="";
            stack<char>s;
            for(int i=0;i<n;i++){
                if(str[i]>='A' && str[i]<='Z')  // if it is an operand
                    ans=ans+str[i];
                else if(str[i]=='(')  // if i is opening bracket
                    s.push(str[i]);
                else if(str[i]==')'){   // if i is closing bracket
                    while(s.size()>0){
                        char c=s.top();
                        if(c=='('){
                            s.pop();
                            break;
                        }
                        else{
                            ans=ans+c;
                            s.pop();
                        }
                    }
                }
                else if(str[i]=='^'){   // if i is ^
                    while(s.size()>0){
                        char c=s.top();
                        if(c=='(' || c=='*' || c=='/' || c=='+' || c=='-')
                            break;
                        else{
                            ans=ans+c;
                            s.pop();
                        }
                    }
                    s.push(str[i]);
                }
                else if(str[i]=='*' || str[i]=='/'){  // if i is * or /
                    while(s.size()>0){
                        char c=s.top();
                        if(c=='(' || c=='+' || c=='-')
                           break;
                        else{
                            ans=ans+c;
                            s.pop();
                        }
                    }
                    s.push(str[i]);
                }
                else if(str[i]=='+' || str[i]=='-'){  // if i is + or -
                    while(s.size()>0){
                        char c=s.top();
                        if(c=='(')
                            break;
                        else{
                            ans=ans+c;
                            s.pop();
                        }
                    }
                    s.push(str[i]);
                }
            }
            while(s.size()>0){  // empty the rest of the stack 
                char c=s.top();
                ans=ans+c;
                s.pop();
            }
            cout<<ans<<"\n";
        }
        return 0;
    }
