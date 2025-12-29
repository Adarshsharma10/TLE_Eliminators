#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        string s;
        cin>>s;
        long long r=n-1;
        long long l=0;
        long long oper=0;
        
        while(l<n/2){
            if((s[l]=='0' && s[r]=='1') || (s[l]=='1' && s[r]=='0')){
                l++;
                r--;
                oper+=2;
            }
            else{
                break;
            }
        }
        cout<<n-oper<<endl;
    }
}

// Successfully submitted