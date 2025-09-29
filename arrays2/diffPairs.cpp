#include<bits/stdc++.h>
using namespace std;


int main(){

    vector<int> arr={4,6,8,10};
    int diff=2;
    int cnt=0;
    int n= arr.size();
    sort(arr.begin(), arr.end(), greater<int>()); //10,8,6,4
    for(int i=0; i<n ; i++){
        for(int j=i; j<n; j++){
            if(arr[i] - arr[j] == 2){
                cnt++;
            }
        }
        
    }
    cout<< cnt;

    return 0;

}