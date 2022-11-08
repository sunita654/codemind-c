#include<bits/stdc++.h>
using namespace std;
void Gen();
long long int N=1000001;
vector <bool> primes(N,true);
void Gen(){
    primes[0]=primes[1]=false;
    for(int i=2;i*i<N;i++){
        if(primes[i]){
            for(int j=i*i;j<=N;j+=i){
                primes[j]=false;
            }
        }
    }
    
}

int main()
{
    int n,m,c=0;
    cin>>n>>m;
    Gen();
    for(int i=n;i<=m;i++){
        if(primes[i]){
            c++;
        }
    }
    cout<<c;
}