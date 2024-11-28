#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int s=10;
    while(s>=n){
        cout<<s*n << " ";
        s--;
    }
}