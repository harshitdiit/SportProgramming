#include<bits/stdc++.h>
using namespace std;

int main(){
	int T, a, b, k;
	cin>>T;
	while(T--){
		cin>>a>>b>>k;
		if(a==b && a==1)
			cout<<"NO"<<endl;
		else if(k==1)
			cout<<((max(a,b)%min(a,b)>0 || a==b)?"NO":"YES")<<endl;
		else {
			int pfa=0, pfb=0;
			for(int i=2; i*i<=a; i++){
				while(!(a%i)){
					a/=i;
					pfa++;
				}
			}
			if(a>1)
				pfa++;

			for(int i=2; i*i<=b; i++){
				while(!(b%i)){
					b/=i;
					pfb++;
				}
			}
			if(b>1)
				pfb++;

			cout<<((k<=pfa+pfb)?"YES":"NO")<<endl;
		}
	}
	return 0;
}