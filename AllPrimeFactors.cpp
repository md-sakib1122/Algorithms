#include <bits/stdc++.h>
using namespace std;

int main() {
     
     int n = 10;
     vector<int> factor;
     
     for(int i = 2; i<sqrt(n); i++){
         if(n%i == 0){
             factor.push_back(i);
             
             while(n%i == 0){
                 n/= i;
             }
         }
     }
     
     if(n != 1) factor.push_back(n);
     
     for(auto it: factor) cout<<it<<" ";

}
