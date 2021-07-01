#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int N;
		cin>>N;
		if(!(N%2)){
			int i=1, j=2;
			while(j<=N){
				cout<<j<<" "<<i<<" ";
				i+=2;
				j+=2;
			}
			cout<<endl;
		}
		else{
			int i=1, j=2;
			while(j<=N-3){
				cout<<j<<" "<<i<<" ";
				i+=2;
				j+=2;
			}
			cout<<N<<" "<<N-2<<" "<<N-1<<endl;
		}
	}
	return 0;
}