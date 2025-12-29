#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0;
        if(1<=n && n<=9){
            cout<<n<<endl;
        }
        else if(10<=n && n<=100){    // 19
            int s = n/10;
            cout<<s+9<<endl;
        }
        else if(101<=n && n<=1000){   //28
            if(n%100==0){
                int s= n/100;
                cout<<s+19<<endl;
            }
        }
    }
}