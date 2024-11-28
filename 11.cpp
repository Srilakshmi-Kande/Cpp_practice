// math library

#include<bits/stdc++.h>
using namespace std;

int maxx(int num1,int num2){
    if(num1 >= num2) return num1;
    else return num2;

    // looking for a return line
}

int main(){
    int num1,num2;
    cin >> num1 >> num2;
    int minimum = min(num1,num2);
    cout <<"Minimum : " <<minimum << endl;
    int maximum = max(num1,num2);
    cout << "Maximum : "<< maximum << endl;

     int maximumm = maxx(num1,num2);
    cout << "Maximum : "<< maximumm << endl;
}