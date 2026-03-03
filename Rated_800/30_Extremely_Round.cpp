#include <bits/stdc++.h>
using namespace std;
 
bool checker(long long x){
    long long zero = 0;
    long long digit = 0;
    while(x){
        if(x%10==0){
            zero++;
        }
        digit++;
        x = x/10;
    }
    return zero == digit - 1;
}
int main() {
	vector<long long > a;
	for(long long i = 1;i<=999999;i++){
	    if(checker(i)==true){
	        a.push_back(i);
	    }
	}
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    long long ans=0;
	    for(long long i=0;i<a.size();i++){
	        if(a[i]<=n){
	            ans++;
	        }
	        else{
	            break;
	        }
	    }
	    cout<<ans<<endl;
	}
 
}


// Successfully submitted