#include<bits/stdc++.h>
using namespace std;
int main(){
        int n;
        cin>>n;
        int minVal= INT_MAX;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            int s = arr[i];
            if(s<0){
                s=-1*arr[i];
            }
            minVal = min(minVal,s);  // we can use abs() also.
        }
        cout<<minVal<<endl;
}

// Successfully submitted
        

