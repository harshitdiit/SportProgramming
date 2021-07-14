#include<bits/stdc++.h>
using namespace std;

int main(){
	int T, N, l, r;
	cin>>T; 
	while(T--){
		cin>>N>>l>>r;
		vector<int> V(N);
		for(int i=0; i<N; i++){
			cin>>V[i];
		}
		sort(V.begin(), V.end());
		long long ans = 0;
		for(auto v: V){
			int modL = l-v;
			int modR = r-v;
			auto p = lower_bound(V.begin(), V.end(), modL);
			auto q = upper_bound(V.begin(), V.end(), modR);

			ans += q-p-((v>=modL && v<=modR)?1:0);
		}
		cout<<ans/2<<endl;
	}
	return 0;
}