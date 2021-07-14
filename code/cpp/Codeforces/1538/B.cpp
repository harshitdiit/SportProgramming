#include<bits/stdc++.h>
using namespace std;

int main(){
	int T, N;
	cin>>T;
	while(T--){
		cin>>N;
		long long sum = 0;
		vector<int> V(N);
		for(int i=0; i<N; i++){
			cin>>V[i];
			sum+=V[i];
		}
		if(sum%N){
			cout<<-1<<endl;
			continue;
		} else {
			int dist=sum/N, ans=0;
			for(auto x : V){
				if(x>dist)
					ans++;
			}
			cout<<ans<<endl;
		}
	}
	return 0;
}