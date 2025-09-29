#include<bits/stdc++.h>
using namespace std;


int climbStairs(int n) {
   
        int prevStep = 0; 
        int currentStep = 1;
        if(n==0) return 0;
        if(n==1) return 1;
        
        for (int i = 0; i < n; ++i) {
            
            int nextStep = prevStep + currentStep; 
          
        
            prevStep = currentStep; 
            currentStep = nextStep; 
        }
      
        return currentStep;
    }

int main(){
    int n;
    cin>> n;
    cout<< climbStairs(n);
}    