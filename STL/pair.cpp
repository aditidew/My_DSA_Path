#include<iostream>
#include<utility>
using namespace std;

int main(){
    pair<int, double> p(12,34.7);
    auto p2= make_pair(12,45.76);
    cout<< p.second << "\n";
    cout<< p2.second;

    return 0;

}