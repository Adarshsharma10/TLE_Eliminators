#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,n;
        cin>>a>>b>>n;
        vector<long long> v(n);
        for(long long i=0;i<n;i++){
            cin>>v[i];
        }
        long long sec=0;
        long long c=b;
        for(long long i=0;i<v.size();i++){
            if(a==b){
                sec=a-1;
                c+=v[i];
                if(c>a){
                    c=a;
                }
                c--;
                sec++;
            }
            else{
                c+=v[i];
                if(c>a){
                    c=a;
                }
                c--;
                sec++;
                if(c==1){
                    continue;
                }
                sec+=c-1;
                c=1;
                    
            }
        }
        cout<<sec+1<<endl;
    }
}

// Successfully submitted

