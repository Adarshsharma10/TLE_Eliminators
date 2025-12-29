#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int anna_turns,katie_turns;
        int sum=a+b+c;
        if(c%2==0){
            anna_turns=a+c/2;
            katie_turns=b+c/2;
        }
        else{
            anna_turns=a+(c/2+1);
            katie_turns=b+c/2;
        }

        if(anna_turns>katie_turns){
            cout<<"First"<<endl;
        }
        else if(anna_turns==katie_turns){
            cout<<"Second"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }

    }
}

// Successfully submitted