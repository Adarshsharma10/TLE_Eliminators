#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        int count=0;
        int mindiff=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=1;i<n;i++){
            mindiff=min(mindiff,arr[i]-arr[i-1]);
        }
        if(!is_sorted(arr.begin(),arr.end())){
            cout<<0<<endl;
        }
        else{
            cout<<(mindiff/2)+1<<endl;
        }
    }
}
// successfully submitted