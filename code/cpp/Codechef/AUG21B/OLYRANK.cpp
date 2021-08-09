#include<bits/stdc++.h>
using namespace std;

int main(){
	int T, G1, S1, B1, G2, S2, B2;
	cin>>T;
	while(T--){
		cin>>G1>>S1>>B1>>G2>>S2>>B2;
		if(G1+S1+B1>G2+S2+B2){
			cout<<1<<endl;
		} else {
			cout<<2<<endl;
		}
	}
	return 0;
}