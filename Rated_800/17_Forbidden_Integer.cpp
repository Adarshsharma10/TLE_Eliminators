#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        if(x!=1){
            cout<<"YES"<<endl;
            cout<<n<<endl;
            for(int i=1;i<=n;i++){
                cout<<1<<" ";
            }cout<<endl;
        }
        else if(k==1 && x==1){
            cout<<"NO"<<endl;
        }
        else if(k==2 && x==1){
            if(n%2==0){
                cout<<"YES"<<endl;
                cout<<n/2<<endl;
                for(int i=1;i<=n/2;i++){
                    cout<<2<<" ";
                }cout<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"YES"<<endl;
            if(n%2==0){
                cout<<n/2<<endl;
                for(int i=1;i<=n/2;i++){
                    cout<<2<<" ";
                }cout<<endl;
            }
            else{
                if(n%3==0){
                    cout<<n/3<<endl;
                    for(int i=1;i<=n/3;i++){
                        cout<<3<<" ";
                    }cout<<endl;
                }
                else{
                    int count =1;
                    int sum=3;
                    for(int i=1;i<n;i++){
                        sum+=2;
                        count++;
                        if(sum==n){
                            cout<<count<<endl;
                            cout<<3<<" ";
                            for(int i=1;i<count;i++){
                                cout<<2<<" ";
                            }
                            cout<<endl;
                            break;
                        }
                    }
                }
            }
        }
    }
}

// Successfully submitted