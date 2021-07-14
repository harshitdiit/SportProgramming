#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int Ax, Ay, Bx, By, Fx, Fy;
		cin>>Ax>>Ay>>Bx>>By>>Fx>>Fy;
		int steps = (int)abs(Bx-Ax) + (int)abs(By-Ay);
		if((Ax==Bx && Ax==Fx && Fy>=min(Ay, By) && Fy<=max(Ay, By))||(Ay==By && Ay==Fy && Fx>=min(Ax, Bx) && Fx<=max(Ax, Bx)))
			steps+=2;

		cout<<steps<<endl;
	}
	return 0;
}