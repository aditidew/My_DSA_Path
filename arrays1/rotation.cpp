#include<iostream>
#include<vector>
using namespace std;

//LEFT ROTATE BY 1 INDEX
vector<int> leftRotate(vector<int> &arr){
    int n = arr.size();
    int temp = arr[0];
    for (int i = 1; i < n; i++) {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;

    return arr;
}

//ROTATE LEFT BY D PLACES
void reverse(vector<int> &arr,int start, int end){
     while (start < end) {
        swap(arr[start], arr[end]);
    start++;
    end--;
     }
}
vector<int> leftByD(vector<int> &arr, int d){
    int n=arr.size();
   reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
   return arr;
}


//ROTATE RIGHT BT D PLACES
vector<int> rightByD(vector<int> &arr, int d){
    int n=arr.size();
   reverse(arr, 0, d); //or arr, n - d, n - 1
    reverse(arr, d+1, n - 1); //or arr,0, n - d - 1
    reverse(arr, 0, n - 1);
   return arr;
}




int main(){
    vector<int> nums = {6, 5, 4, 3, 2};
    int k=2;
    vector<int> result1 = leftRotate(nums);
    cout << "After left by 1 places rotation: ";
    for (int i = 0; i < result1.size(); i++) {
        cout << result1[i] << " ";
    }
    cout << endl;


    vector<int> result2 = leftByD(nums,k);
    cout << "After left by D places rotation: ";
    for (int i = 0; i < result2.size(); i++) {
        cout << result2[i] << " ";
    }
    cout << endl;


    vector<int> result = rightByD(nums,k);
    cout << "After right by D places rotation: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
