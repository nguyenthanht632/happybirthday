#include <iostream>
#include <string>
#include <math.h>
using namespace std;
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
int checks(double a,double b){
    if(cin.fail()||cin.fail()){
        return 0;
    }
    else{
        if(a<=0||b<=0||a!=(int)a||b!=(int)b)
            return 0;
    }
}
//ex61
bool check_number(int n){
    int a=n%10;
    n=n/10;
    while(n>0){
        int i=n%10;
        n=n/10;
        if(i<=a){
            return false;
        }
        else{
           a=i;
        }
    }
    return true;
}
//ex62
int large_general(int a,int b){
    int k=0;
    for(int i=1;i<=a;i++){
        if(a%i==0){
            for(int j=1;j<=b;j++){
                if(b%j==0){
                    if(i==j&&k<i){
                        k=i;
                    }
                }
            }
        }
    }
    return k;
}
//ex63
int multiple_general (int a,int b){
    int max_value;
    int bcnn=1;
    if(a>=b){
        max_value=a;
    }
    else{
        max_value=b;
    }
    int i=max_value;
    while(1){
        if(i%a==0&&i%b==0){
            bcnn=i;
            break;
        }
        else{
            i=i+max_value;
        }
    }
    return bcnn;
}
//ex64
double solve_the_equation(double a,double b){
    if(a==0){
        if(b==0){
            return 0;
        }
        else{
            return 1;
        }
    }
    else{
        return -b/a;
    }
}
//ex65
void solve_the_equations(double a,double b,double c){
    double denta=b*b-4*a*c;
    if(a==0){
        cout<< "da giai";
    }
    else{
        if(denta<0){
            cout<<"pt vn";
        }
        else if(denta==0){
            cout<<"phuong trinh co nghiem kep: x1=x2= -" << -b/2*a;
        }
        else{
            cout<<"phuong trinh co 2 nghiem phan biet: x1= "<<(-b+sqrt(denta))/(2*a)<<" and x2= " <<(-b-sqrt(denta))/(2*a);
        }
    }
}
//ex66
void solve_the_equationss(double a,double b,double c){
    if(a==0){
        if(-c/b<0){
            cout<<"pt vn";
        }
        else{
            cout<<"the equation has 2 solutions: x1= "<<-sqrt(-c/b)<< " x2= "<<sqrt(-c/b);
        }
    }
    else{
       double denta=b*b-4*a*c;
        if(denta<0){
            cout<<"pt vn";
        }
        else if(denta==0){
            if(-b/(2*a)>=0)
            cout<<"the equation has 2 solutions: x1=-x2= " << sqrt(-b/(2*a));
            else{
                cout<<"no solution";
            }
        }
        else{
            cout<<"the equation has solutions:";
            if((-b+sqrt(denta))/(2*a)>=0){
                 cout<<"x1=-x2= "<<sqrt((-b+sqrt(denta))/(2*a))<<" and ";
            }
            if((-b-sqrt(denta))/(2*a)>=0){
                cout<<"x3=-x4= "<<sqrt((-b-sqrt(denta))/(2*a));
            }
        }

    }
}
//ex67
//double S(int n, double x){
//    double s=0;
//    int a=1;
//    double b;
//    for(int i=1;i<=n;i++){
//        b=b*x;
//        s=s+b*a;
//        a=a*(-1);
//    }
//    return s;
//}
//ex68
//int S(int n, int x){
//    int a=1,p=1;
//    int s;
//    for(int i=1;i<=n;i++){
//        p=p*x*x;
//        a=a*(-1);
//        s=s+p*a;
//    }
//    return s;
//}
//ex69
//int S (int n,int x){
//    int a=1,p=x;
//    int s=0;
//    for(int i=1;i<=n;i++){
//        s=s+p*a;
//        a=a*(-1);
//        p=p*x*x;
//    }
//    return s;
//}
//ex70
//void S (int n){
//    int a=0,p=1;
//    double s=0;
//    for(int i=1;i<=n;i++){
//        a=a+i;
//        s=s+(float)p/(a);
//        p=p*(-1);
//    }
//    cout<< s;
//}
//ex71
//void S (int n, double x){
//    int a=0,p=1,b=1;
//    double s=0;
//    for(int i=1;i<=n;i++){
//        a=a+i;
//        p=p*(-1);
//        b=b*x;
//        s=s+(double)p*b/a;
//    }
//    cout<<s;
//}
//ex72
//void S (int n, double x){
//    int a=1,p=1,b=1;
//    double s=0;
//    for(int i=1;i<=n;i++){
//        a=a*i;
//        p=p*(-1);
//        b=b*x;
//        s=s+(double)p*b/a;
//    }
//    cout<<s;
//}
//ex73
//void S (int n, double x){
//    int a=1,p=-1,b=1;
//    double s=-1;
//    for(int i=1;i<=(2*n);i=i+2){
//        a=a*i*(i+1);
//        p=p*(-1);
//        b=b*x*x;
//        s=s+(double)p*b/a;
//    }
//    cout<<s;
//}
//ex74
//void S (int n, double x){
//    int a=1,p=1,b=x;
//    double s=1-x;
//    for(int i=3;i<=(2*n+1);i=i+2){
//         a=a*i*(i-1);
//        b=b*x*x;
//        s=s+(double)p*b/a;
//        p=p*(-1);
//    }
//    cout<<s;
//}
//ex75
//int check_numbers(int n){
//    int value=1;
//   while(n>1){
//        if(n%2==1){
//            value=0;
//        }
//        n=n/2;
//   }
//   if(value==1){
//    return 0;
//   }
//   else{
//    return 1;
//   }
//
//}
//ex76
int check_numbers(int n){
    int value=1;
   while(n>1){
        if(n%3!=0){
            value=0;
        }
        n=n/3;
   }
   if(value==1){
    return 0;
   }
   else{
    return 1;
   }

}
int main(){
    double a,b,c,n,x;
//    cout << "add a,b,c: ";
//    cin>> a>>b>>c;
//    cout<< "add n,x: ";
//    cin>>n>>x;
cout<< "add n: ";
cin>>n;
//ex75,76
    int number=check_numbers(n);
    if(number==0){
        cout<<"so co dang 2^k/3^k";
    }
    else{
        cout<<"so k co dang 2^k/3^k";
    }
//ex75,76
//ex70,71,72,73,74
//S(n,x);
//ex70,71,72,73,74
//ex67,68,69
//    double ss=S(n,x);
//    cout<<ss;
//ex67,68,69
//ex66
//    solve_the_equationss(a,b,c);
//ex65
//    solve_the_equations(a,b,c);
//ex65
//ex64
//    double value=solve_the_equation(a,b);
//    if(value==0){
//        cout<<"Equation with infinite solutions";
//    }
//    else if(value==1){
//        cout<<"the equation has no solution";
//    }
//    else{
//        cout<< value;
//    }
//ex63
//    int checkss=checks(a,b);
//    int value=multiple_general(a,b);
//    if(checkss==0){
//        cout<<"errol";
//    }
//    else{
//        cout<<value;
//    }
//ex63
//ex62
//    int value=large_general(a,b);
//    cout<< value;
//ex62
//    string n;
//    cout<< "add n";
//    cin>>n;
//    int check=check_number(n);
//ex60
//    int n;
//    cout<<"add n: ";
//    cin>> n;
//    if(check==0){
//        cout<<"errol";
//    }
//    else{
//        bool checks=check_number(n);
//        if(checks){
//            cout<<"decrease";
//        }
//        else{
//            cout<<"no conclude";
//        }
//    }
//ex60

}
