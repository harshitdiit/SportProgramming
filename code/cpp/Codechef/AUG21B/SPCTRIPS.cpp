#include<bits/stdc++.h>
using namespace std;

int main(){
	int T, N;
	cin>>T;
	while(T--){
		cin>>N;
		long long ans = 0;
		for(int i=1; i<=N; i++){
			for(int j=2*i; j<=N; j+=i){
				ans+=(1+(N-i)/j);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}