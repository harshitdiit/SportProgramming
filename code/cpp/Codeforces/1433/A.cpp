#include<bits/stdc++.h>
#define finput ifstream cin;cin.open("in.txt")
#define foutput ofstream cout;cout.open("out.txt")

using namespace std;

int calc(int num){
    int d = num%10;
    int d_count = 0;
    while(num){
        d_count++;
        num=num/10;
    }
    return 10*(d-1) + d_count*(d_count+1)/2;
}

int main(){

    //finput; foutput;

    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        cout<<calc(N)<<endl;
    }
    return 0;
}