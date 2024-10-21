//its take 2 number 'a' and 'n' and return a^n . approach:alws make pair of 'a' and multiply them. 
//So the n become half every time when we make pair....and continue the process, Time complexity log(n)

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
