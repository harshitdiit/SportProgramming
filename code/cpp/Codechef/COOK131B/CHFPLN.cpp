#include<bits/stdc++.h>
using namespace std;

int main(){
	int T, N;
	cin>>T;
	while(T--){
		cin>>N;
		vector<int> arr(N);
		unordered_map<int, int> ct;
		for(int i=0; i<N; i++){
			cin>>arr[i];
			if(ct[arr[i]])
				ct[arr[i]]++;
			else
				ct[arr[i]]=1;
		}
		int ans=0;
		for(auto m: ct)
			ans += (m.second>(m.first-1)?m.first-1:m.second);

		cout<<ans<<endl;
	}
	return 0;
}