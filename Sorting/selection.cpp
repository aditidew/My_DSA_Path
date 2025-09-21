#include<bits/stdc++.h>
using namespace std;

vector<int> selection(vector<int> &arr){
    int n= arr.size();
    for(int i=0; i<=n-1; i++){
        int min= i;
        for(int j=0; j<=n-1; j++){
            if(arr[j] < arr[min]){
                min =j;
            }

            
        }
        int temp= arr[min];
            arr[min]= arr[i];
            arr[i]=temp;
    }
    return arr;

}

int main(){
int n;

cin >> n;
vector<int> arr(n);
for(int i=0; i<n; i++){
    cin >> arr[i];
}

    vector<int> sortedArr = selection(arr);

    for(int x : sortedArr) {
        cout << x << " ";
    }
    cout << endl;
}