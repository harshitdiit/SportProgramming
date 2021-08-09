#include<bits/stdc++.h>
using namespace std;

int main(){
	int T, N;
	cin>>T;
	while(T--){
		cin>>N;
		vector<int> A(N), B(N), _mini;
		vector<vector<int>> C; 
		for(int i=0; i<N; i++){
			cin>>A[i];
		}
		int _min=INT_MAX;
		_mini.push_back(-1);
		for(int i=0; i<N; i++){
			cin>>B[i];
			if((A[0]+B[i])%N<_min){
				_min = (A[0]+B[i])%N;
				_mini[0] = i;
			}
		}
		for(int i=0; i<N; i++){
			if((A[0]+B[i])%N==_min && i!=_mini[0]){
				_mini.push_back(i);
			}
		}
		C = vector<vector<int>>(_mini.size(), vector<int>(N));
		for(int i=0; i<_mini.size(); i++){
			for(int j=0; j<N; j++){
				C[i][j]=(A[j]+B[(j+_mini[i])%N])%N;
			}
		}
		sort(C.begin(), C.end());
		for(int i=0; i<N; i++){
			cout<<C[0][i]<<" ";
		}
		cout<<endl;
	}
}