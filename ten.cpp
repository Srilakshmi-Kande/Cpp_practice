#include<bits/stdc++.h>
using namespace std;
// functions are set of code which performs something for you
// functions are used to modularise code
// functions are used to increase readability
// functions are used to use same code multiple times
// void 
// return
// parameterised
// non parameterise

/*
void printName(string name){
    cout<<"hey " << name;
}

int main(){
    string name;
    cin >> name;
    printName(name);

    string name2;
    cin >> name2;
    printName(name2);

    return 0;
}
*/
int sum(int num1,int num2){
    int num3=num1+num2;  // 5+6=11
    return num3; // 11
}
int main(){
    int num1,num2;
    cin >> num1 >> num2 ;
    int res=sum(num1,num2);  //  res=11
    cout << res;
    return 0;
}