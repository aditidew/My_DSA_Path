#include<bits/stdc++.h>
using namespace std;


int fibo(int n, vector<int> &dp){
    if(n<=1) return n;
    if(dp[n] != -1 ) return dp[n];
    return dp[n]= fibo(n-1, dp) + fibo(n-2, dp);
}
int main(){
    int n;
    cin>> n;

    
    //vector<int> dp(n+1, -1);
    //cout<< fibo(n, dp);


    if(n == 0) cout << 0;
    else if(n == 1) cout << 1;
    int prev=1;
    int prev2=0;
    int curr=0;
    for(int i=2; i<n+1; i++){
        curr= prev+prev2;
        prev2= prev;
        prev= curr;

        
    }

    cout<< curr;
    return 0;

}