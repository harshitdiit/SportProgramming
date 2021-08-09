#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	if(!a)
		return b;
	return gcd(b%a, a);
}

int main(){
	int T, X, Y;
	cin>>T;
	while(T--){
		cin>>X>>Y;
		if(gcd(X, Y)>1){
			cout<<0<<endl;
		}
		else if(gcd(X+1, Y)>1 || gcd(X, Y+1)>1){
			cout<<1<<endl;
		}
		else{
			cout<<2<<endl;
		}
	}
	return 0;
}