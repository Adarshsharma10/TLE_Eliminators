#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> arr(n);
        long long p = 0;
        long long neg = 0;
        long long operation = 0;
        for(long long i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i] == 1){
                p++;
            }
            else{
                neg++;
            }
        }
        while(p<neg || neg%2==1){
            operation++;
            p++;
            neg--;
        }
        
        cout<<operation<<endl;
    }
    
}

// Successfully submitted