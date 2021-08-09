#include<bits/stdc++.h>
using namespace std;

int main(){
	int T, N, P, K;
	cin>>T;
	while(T--){
		cin>>N>>P>>K;
		int modN = N%K;
		int divN = N/K+1;
		int modP = P%K;
		int divP = P/K;
	    int ans;
	    
	    if(modP>modN){
	        ans = divN*(modN) + (divN-1)*(modP-modN) + divP + 1;
	    } else {
	        ans = divN*(modP) + divP + 1;
	    }
	    cout<<ans<<endl;
	}	
	return 0;
}