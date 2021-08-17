#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ld long double
#define pdd pair<ld, ld>
#define ff first
#define ss second

inline ld side(pdd v1, pdd v2){
	return sqrt((v1.ff-v2.ff)*(v1.ff-v2.ff) + (v1.ss-v2.ss)*(v1.ss-v2.ss));
}

inline ld height(pdd v1, pdd v2, pdd o){
    return abs((v2.ff-v1.ff)*(v1.ss-o.ss)-(v1.ff-o.ff)*(v2.ss-v1.ss))/sqrt((v2.ss-v1.ss)*(v2.ss-v1.ss)+(v2.ff-v1.ff)*(v2.ff-v1.ff));
}

inline ld area(ld a, ld b, ld c){
	ld s = (a+b+c)/2;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main(){

	fastio;

	int T, N, Q, v, t;
	vector<vector<ld>> sides(3, vector<ld>(3));
	vector<pdd> _V(2);

	cin>>T;
	while(T--){
		cin>>N>>Q;
		vector<pdd> V(N+1);

		pdd o(0, 0);
		for(int i=0; i<N; i++){
			cin>>V[i].ff>>V[i].ss;
			o.ff+=V[i].ff;
			o.ss+=V[i].ss;
		}

		o.ff/=N;
		o.ss/=N;
		V[N]=V[0];

		ld A = 0;
		for(int i=0; i<N-2; i++){
			A+=area(side(V[0], V[i+1]), side(V[i+1], V[i+2]), side(V[i+2], V[0]));
		}

		while(Q--){
			cin>>v>>t;
			for(int i=0; i<3; i++){
				ld s = side(V[i], V[i+1]);				
				ld ht = height(V[i], V[i+1], o);
				ld dis = ht + v*t;
				ld d1 = (V[i+1].ff-V[i].ff)*o.ss - (V[i+1].ss-V[i].ss)*o.ff + (V[i+1].ss-V[i].ss)*V[i].ff - (V[i+1].ff-V[i].ff)*V[i].ss;

				ld a = V[i+1].ss-V[i].ss;
				ld b = V[i].ff-V[i+1].ff;
				ld c = o.ss*(V[i+1].ff-V[i].ff) - o.ff*(V[i+1].ss-V[i].ss) + dis*s;

				ld d2 = a*o.ff + b*o.ss + c;
				if(d1/d2<0){
					c = c - 2*dis*s;
				}
				sides[i][0]=a; sides[i][1]=b; sides[i][2]=c;
			}

			for(int i=0; i<2; i++){
				_V[i].ff = (sides[i][1]*sides[i+1][2] - sides[i+1][1]*sides[i][2])/(sides[i][0]*sides[i+1][1]-sides[i+1][0]*sides[i][1]);
				_V[i].ss = (sides[i+1][0]*sides[i][2] - sides[i][0]*sides[i+1][2])/(sides[i][0]*sides[i+1][1]-sides[i+1][0]*sides[i][1]);
			}

			ld sf = side(_V[0], _V[1])/side(V[1], V[2]);
			ld totalArea = sf*sf*A;

			cout<<fixed<<setprecision(6)<<totalArea<<endl;
		}
	}
	return 0;
}