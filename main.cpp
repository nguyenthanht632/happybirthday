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
//check
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
//ex51
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
//int min_number(int n){
//    int a=9;
//    while(n>0){
//        int i=(int)n%10;
//        n=n/10;
//        if(i<=a){
//            a=i;
//        }
//    }
//    return a;
//}
//ex53
//int max_muber_of_digits(int n){
//    int number=0;
//    int a=0;
//    int b=n;
//    while(n>0){
//        int i =n%10;
//        n=n/10;
//        if(i>=number){
//            number = i;
//        }
//    }
//     while(b>0){
//        int j =b%10;
//        b=b/10;
//        if(j==number){
//            a=a+1;
//        }
//    }
//    return a;
//}
//ex54
//int min_number_of_digit(int n){
//    int number=9;
//    int a=n;
//    while(n>0){
//        int i=n%10;
//        n=n/10;
//        if(i<=number){
//            number=i;
//        }
//    }
//    int b=0;
//    while(a>0){
//        int i=a%10;
//        a=a/10;
//        if(i==number){
//            b++;
//        }
//    }
//    return b;
//}
//ex55
//int cout_digit(int n){
//    int a=0;
//    while(n>0){
//        int i=n%10;
//        n=n/10;
//        a++;
//    }
//    return a;
//}
//ex56
//int check_number(int n){
//    int a=0;
//    while(n>0){
//        int i=n%10;
//        n=n/10;
//        if(i%2==0){
//            a++;
//        }
//    }
//    if(a>0){
//        return 0;
//    }
//    else if(a==0){
//        return 1;
//    }
//}
//ex57
//int check_number(int n){
//    int a=0;
//    while(n>0){
//        int i=n%10;
//        n=n/10;
//        if(i%2==1){
//            a++;
//        }
//    }
//    if(a>0){
//        return 0;
//    }
//    else if(a==0){
//        return 1;
//    }
//}
//ex59
//int check_symmetrical_number(string n){
//    int l=n.length();
//    int counts=0;
//    if(n[0]=='0'){
//        return 0;
//    }
//    else{
//    for(int i=0;i<l;i++){
//        if(n[i]>'9'||n[i]<0)
//        return 0;
//    }
//    for(int i=0;i<(l/2);i++){
//        if(n[l-1-i]==n[i]){
//            counts=counts+1;
//        }
//    }
//    if(counts==((int)l/2)){
//        return 1;
//    }
//    else{
//        return 2;
//    }
//    cout<<counts;
//    }
//}
//ex60
//int check_number(string n){
//    int l=n.length();
//    int a=0,b=0;
//    if(n[0]=='0'){
//        return 0;
//    }
//    else{
//        for(int i=0;i<l;i++){
//            if(n[i]<'0'||n[i]>'9'){
//                return 0;
//            }
//        }
//        for(int i=0;i<l;i++){
//            if(n[i]>a){
//                b=b+1;
//                a=n[i];
//            }
//        }
//        if(b==(l)){
//            return 1;
//        }
//        else{
//            return 2;
//        }
//    }
//}
//ex61
int check_number(string n){
    int l=n.length();
    int a=9,b=1;
    if(n[0]=='0'){
        return 0;
    }
    else{
        for(int i=0;i<l;i++){
            if(n[i]<'0'||n[i]>'9'){
                return 0;
            }
        }
        for(int i=0;i<l;i++){
            if(n[i]<a){
                b=b+1;
                a=n[i];
            }
        }
        if((b)==l){
            return 1;
        }
        else{
            return 2;
        }
    }
}
int main(){
//    double n;
//    cout << "add n: ";
//    cin>> n;
//    int checks=check(n);
//    if(checks==0){
//         cout<< "errol";
//    }
    string n;
    cout<< "add n";
    cin>>n;
    int check=check_number(n);
//ex60
    if(check==0){
        cout<<"errol";
    }
    else if(check==1){
        cout<< "increase";
    }
    else{
        cout<<"no conclusion";
    }
//ex60
    //ex59
//    int checks=check_symmetrical_number(n);
//    if(checks==0){
//        cout<< "errol";
//    }
//    else if(checks==1){
//        cout<< "symmetrial number";
//    }
//    else {
//       cout<< "not symmetrial number";
//    }
//ex59
//    else{
//ex57
////        int check_numbers=check_number(n);
////    if(check_numbers==0){
////        cout<< "not full even digit";
////    }
////    else{
////        cout<< "full even digit";
////    }//ex57
////        int check_numbers=check_number(n);
////    if(check_numbers==0){
////        cout<< "not full odd digit";
////    }
////    else{
////        cout<< "full old digit";
////    }ex56
////        int cout_digits= cout_digit(n);
////        cout<< cout_digits;//ex55
////    int min_n=min_number_of_digit(n);
////    cout<< min_n;//ex54
////      int max_n=max_muber_of_digits(n);
////      cout<< max_n;//ex53
//
////    double min_numbers=min_number(n);
////    cout<< min_numbers;//ex52
//
////    value = s[3];
////    cout<< value;
////    max_n(s,value);
////
////    reversed_digit(s);//ex50
//    }
}
