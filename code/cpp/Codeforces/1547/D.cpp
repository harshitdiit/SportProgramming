#include<bits/stdc++.h>
using namespace std;

int main(){
	int T, N;
	cin>>T;
	while(T--){
		cin>>N;
		vector<int> X(N, 0), Y(N, 0);
		for(int i=0; i<N; i++)
			cin>>X[i];
		for(int i=1; i<N; i++){
			if((X[i] & X[i-1]) != X[i-1]){
				for(int j=0; j<32; j++){
				    if((1<<j)>X[i-1])
				        break;
					int K = (X[i-1] & (1<<j)) ^ (X[i] & (1<<j));
					Y[i] += K?(X[i-1] & (1<<j)):0; 
				}
				X[i] = X[i]^Y[i];
			}
		}
		for(int i=0; i<N; i++){
			cout<<Y[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}