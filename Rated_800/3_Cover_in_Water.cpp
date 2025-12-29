#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int countDot = 0;
        int ans=0;
        bool flag = false;
        for(int i = 0;i<n;i++){
            if(s[i] == '.'){
                countDot++;
                if(countDot == 3){
                    flag = true;
                    break;
                }
            }
            else{
                ans+=countDot;
                countDot=0;
            }
        }
        ans+=countDot;
        if(flag == true){
            cout<<2<<endl;
        }
        else{
            cout<<ans<<endl;
        }

    }
}
                
// successfully submitted