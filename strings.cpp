#include<iostream>
using namespace std;
int main(){
    string s1="Hello World!";
    // string s2;
    // cin>>s2;
    // getline(cin,s2);
    // cout<<s2;

    string s2("Believer01 Official");
    string s3(s1);
    
    s1.push_back('g');
    cout<<s1<<endl;

    s1.pop_back();
    cout<<s1<<endl;

    cout<<s1.length()<<endl;

    cout<<s1.size()<<endl;

    cout<<s1.substr(6,5)<<endl;

    cout<<s1.substr(6)<<endl;

    cout<<s1.compare(s2)<<endl;

    cout<<s1.front()<<endl;

    cout<<s1.back()<<endl;

    for(int i=0;i<s1.length();i++){
        cout<<s1[i]<<endl;
    }

    if(s2.find("Official")!=s2.npos){
        cout<<"Official word found in s2"<<endl;
    }
    else{
        cout<<"Official not found in s2"<<endl;
    }

    s1.replace(6,7,"Youtube");
    cout<<s1<<endl;
}