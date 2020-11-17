#include<bits/stdc++.h>
#define finput ifstream cin;cin.open("in.txt")
#define foutput ofstream cout;cout.open("out.txt")

using namespace std;

int main(){
    // finput; foutput;
    int T;
    cin>>T;
    while(T--){
        int N, inp, _1count=0, _0count=0, _0countt=0;
        cin>>N;
        for(int i=0; i<N; i++){
            cin>>inp;
            if(inp){
                _1count++;
                _0count+=_0countt;
                _0countt=0;
            }
            else if(_1count && !inp)
                _0countt++;
        }

        if(_1count>1){
            cout<<_0count<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    return 0;
}