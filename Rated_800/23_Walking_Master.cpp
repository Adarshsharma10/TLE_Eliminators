#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int s_x,s_y,d_x,d_y;
        cin>>s_x>>s_y>>d_x>>d_y;

        if(d_y < s_y){
            cout<<-1<<endl;
            continue;
        }
        int ymoves = d_y - s_y;
        s_x += ymoves;

        if(s_x < d_x){
            cout<<-1<<endl;
            continue;
        }

        int xmoves = s_x - d_x;
        ymoves+=xmoves;
        cout<<ymoves<<endl;

    }
}

// dry run need