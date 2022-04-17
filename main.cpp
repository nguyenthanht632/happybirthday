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
int check(double n){
    if(cin.fail()){
        return 0;
    }
    else{
        if(n<=0||n!=(int)n){
            return 0;
        }
    }
}
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
//}
//ex52
int min_number(int n){
    int a=9;
    while(n>0){
        int i=(int)n%10;
        n=n/10;
        if(i<=a){
            a=i;
        }
    }
    return a;
}
int main(){
    double n;
    cout << "add n: ";
    cin>> n;
    int checks=check(n);
    if(checks==0){
         cout<< "errol";
    }
    //max_n(n);
    else{double min_numbers=min_number(n);
    cout<< min_numbers;

//    value = s[3];
//    cout<< value;
//    max_n(s,value);
//
//    reversed_digit(s);//ex50
    }
}
