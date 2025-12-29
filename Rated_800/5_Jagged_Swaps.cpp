#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> p(n);
        bool flag = true;
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        for(int k=0;k<n;k++){
            for(int i=1;i<n-1;i++){
                if(p[i-1]>p[i]){
                    flag = false;
                    break;
                }
                else if(p[i]>p[i+1]){
                    swap(p[i],p[i+1]);
                }
            }
        }
        if(flag == false){
            cout<<"NO"<<endl;
        }
        else if(is_sorted(p.begin(),p.end())){
            cout<<"YES"<<endl;
        }
        else{
            
            cout<<"NO"<<endl;
        }


    }
}

// successfully submitted