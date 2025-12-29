#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s,x;
        cin>>s;
        cin>>x;
        int oper = 0;
        for(int i =0;i<x.size();i++){
            if(x.find(s)){
                cout<<oper<<endl;
                break;
            }
            else{
                x+=x;
                oper++;
            }
        }



    }
}