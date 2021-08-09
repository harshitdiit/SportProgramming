#include<bits/stdc++.h>
using namespace std;

int main(){
	int T, E, K;
	cin>>T;
	while(T--){
		cin>>E>>K;
		int len = 0;
		while(E>0){
			E/=K;
			len++;
		}
		cout<<len<<endl;
	}
	return 0;
}