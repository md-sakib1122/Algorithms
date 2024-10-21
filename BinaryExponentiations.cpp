#include<bits/stdc++.h>
using namespace std;
int main(){

    long long x,n;
    cin>>x>>n;
    long long ans=1;

     while(n>0){
        if(n%2==1){
            ans*=x;
        }
        n/=2;
        x*=x;

     }

   cout<<ans<<endl;


}
