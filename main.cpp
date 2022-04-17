#include <iostream>
#include <string>
using namespace std;
//EX50
//int reversed_digit(string s){
//    int l=s.length();
//    if(s[0]=='0'){
//        cout<<"errol";
//        return 0;
//
//
//    }
//    for(int i=0; i<l;i++){
//        if(s[i]>'9'||s[i]<'0'){
//           cout<<"errol";
//           return 0;
//        }
//    }
//    while(s[l-1]=='0') --l;
//    for(int i=l-1;i>=0;--i){
//           cout<< s[i];
//    }
//}
//ex51
//int check(double n){
//    if(cin.fail()){
//        cout<< "errol";
//        return 0;
//    }
//    else{
//        if(n<=0||n!=(int)n){
//            cout<<"errol";
//            return 0;
//        }
//    }
//}
//void max_n(double n){
//    int a=0;
//    while(n>0){
//        int i=(int)n%10;
//        n=n/10;
//        if(i>=a){
//            a=i;
//        }
//    }
//    cout << a;
}

int main(){
    double n;
    cout << "add n: ";
    cin>> n;
    check(n);
    max_n(n);
//    value = s[3];
//    cout<< value;
//    max_n(s,value);

//    reversed_digit(s);//ex50
}
