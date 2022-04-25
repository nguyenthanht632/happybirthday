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
//ex82
double max_abc(double a,double b,double c){
    double maxs;
    maxs=a;
    if(maxs<b){
        maxs=b;
    }
    if(maxs<c){
        maxs=c;
    }
    return maxs;
}
//ex83
//void check_numberz(double a, double b){
//    if(a*b>0){
//        cout<< a <<" and "<< b<<" same sign";
//    }
//    else{
//        cout<< a <<" and "<< b<<" different sign";
//    }
//}
//ex85
//void months(int month){
//    switch(month){
//    case 1:
//    case 2:
//    case 3:
//        cout<<"Quy 1";
//        break;
//    case 4:
//    case 5:
//    case 6:
//        cout<<"Quy 2";
//        break;
//    case 7:
//    case 8:
//    case 9:
//        cout<<"Quy 3";
//        break;
//    case 10:
//    case 11:
//    case 12:
//        cout<<"Quy 4";
//        break;
//    }
//}
//ex95
//void abs_abc(double a,double b,double c){
//    a=abs(a);
//    b=abs(b);
//    c=abs(c);
//    cout<< a <<" "<<b<<" "<< c;
//}
//ex96
//double fx(double x){
//    int f;
//    if(x>=5){
//        f=2*x*x+5*x+9;
//    }
//    else{
//        f=-2*x*x+4*x-9;
//    }
//    return f;
//}
//ex97
//void triangle (double a,double b,double c){
//    int i=a*a;
//    int j=b*b;
//    int k=c*c;
//    if(a==b||b==c||c==a){
//        cout<<"isosceles triangle";
//    }
//    else if (a==b&&b==c) {
//        cout<<"equilateral triangle";
//    }
//    else if (i+j==k||j+k==i||k+i==j){
//        cout<<"right triangle";
//    }
//    else{
//        cout<<"regular triangle";
//    }
//}
//ex98
//void Solve_the_system_of_equations(double a,double b,double c,double d,double e,double f){
//    double denta=a*e-b*d, denta1=-b*f+c*e, denta2=a*f-c*d;
//    if(denta==0){
//        if(denta1+denta2==0){
//            cout<<"system of equations with infinite solutions";
//        }
//        else{
//            cout<<"system of equations with no solution";
//        }
//    }
//    else{
//        cout<<"system of equations with solutions: x= "<< denta1/denta<<" y= "<<denta2/denta;
//    }
//
//
//}
//ex99
//void sapxeptangdan(double a, double b,double c){
//    double temp;
//    if(a>b){
//        temp=a;
//        a=b;
//        b=temp;
//    }
//    if(a>c){
//        temp=a;
//        a=c;
//        c=temp;
//    }
//    if(b>c){
//        temp=b;
//        b=c;
//        c=temp;
//    }
//    cout<<a <<" "<< b<<" "<<c;
//}
//ex101
//void month_year(int month,int year){
//        if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
//            cout<<"31 day";
//        }
//        else if(month==4||month==6||month==9||month==11){
//            cout<<"30 day";
//        }
//        else if(month==2){
//            if(year%4==0){
//                cout<<"29 day";
//            }
//            else{
//                cout<<"28 day";
//            }
//        }
//        else{
//            cout<<"Moi nhap lai";
//        }
//}
//ex111
//b
//void isosceles_triangle(int n){
//    for(int i=0;i<(n);i++){
//        if(i>=0&&i<(n-1)){
//            for(int j=1;j<=(2*n-1);j++){
//                if((n-i)==j||(n+i)==j){
//                    cout<<" *";
//                }
//                else{
//                    cout<<"  ";
//                }
//            }
//        cout<<endl;
//        }
//        else{
//            for(int j=0;j<(2*n-1);j++){
//                cout<<" *";
//            }
//        }
//
//    }
//
//}
//a
//void isosceles_triangle(int n){
//    for(int i=0;i<n;i++){
//        for(int j=0;j<=(2*n-1);j++){
//            if((n-i)<=j&&(n+i)>=j){
//                cout<<" *";
//            }
//            else{
//                cout<<"  ";
//            }
//        }
//        cout<<endl;
//    }
//}
//c
//void isosceles_right_triangle(int n){
//    for(int i=1;i<=n;i++){
//        for(int j=1;j<=i;j++){
//            cout<<" * ";
//        }
//        cout<<endl;
//    }
//}
//d
//void isosceles_right_triangle_empty (int n){
//    for(int i=1;i<=n;i++){
//        if(i==1){
//            cout<<" * "<<endl;
//        }
//        else if (2<=i&& i<n){
//            for(int j=1;j<=i;j++){
//                if(j==1||j==i){
//                    cout<<" * ";
//                }
//                if(1<j&&j<i){
//                    cout<<"   ";
//                }
//            }
//            cout<<endl;
//        }
//        else{
//            for(int j=1;j<=n;j++){
//                cout<<" * ";
//            }
//        }
//    }
//}
//ex112
//a
//void solid_rectangle (int m, int n){
//    for(int i=1;i<=n;i++){
//        for(int j=1;j<=m;j++){
//            cout<<" * ";
//        }
//        cout<<endl;
//    }
//}
//b
//void solid_rectangle (int m, int n){
//    for(int i=1;i<=n;i++){
//        if(i==1||i==n){
//            for(int j=1;j<=m;j++){
//            cout<<" *";
//            }
//        cout<<endl;
//        }
//        else{
//            for(int j=1;j<=m;j++){
//                if(j==1||j==m){
//                    cout<<" *";
//                }
//                else{
//                    cout<<"  ";
//                }
//            }
//            cout<<endl;
//        }
//    }
//}
//ex113
//void sinx (int n,double x){
//    double s=0,p=x,b=1;
//    double a=1;
//    for(int i=1;i<=(2*n+1);i=i+2){
//        s=s+(double)(p*a)/b;
//        b=b*(i+1)*(i+2);
//        p=p*x*x;
//        a=a*(-1);
//    }
//    cout<< s;
//}
//}
//ex119
//void prime_number(int n){
//    for(int i=2;i<n;i++){
//        int value=0;
//        for(int j=2;j<=i;j++){
//            if(i%j==0){
//                value++;
//            }
//        }
//        if(value==1){
//            cout<< i<<" ";
//        }
//    }
//}
//ex120
//void square_number (int n){
//    for(int i=1;i<n;i++){
//        for(int j=1;j<=i;j++){
//            if(j*j==i){
//                cout<<i<<" ";
//            }
//        }
//    }
//}
//ex121
long long check_length (long long n){
    long long value=0;
    while(n>0){
        n=n/10;
        value++;
    }
    return value;
}
void amstrong_number (long long n){
    long long l=check_length(n);
    long long m=n;
    long long s=0;
    while(m>0){
        int a=m%10;
        long long b=1;
        for(long long i=1;i<=l;i++){
                b=b*a;
        }
        s=s+b;
        m=m/10;
    }
    if(s==n){
        cout<<n<<" ";
    }
}
int main(){
//ex121
long long a;
cout<<"add a: ";
cin>>a;
long long l=check_length(a);
for(long long i=1;i<=a;i++){
 amstrong_number(i);
 }
//ex120
//int n;
//cout<<"add n: ";
//cin>> n;
//int checkss=check(n);
//if(checkss==0){
//    cout<<"Nhap lai";
//}
//else{
//    square_number(n);
//}
//ex119
//int n;
//cout<< "add n: ";
//cin>> n;
//int checkss=check(n);
//if(checkss==0){
//    cout<<"Nhap lai";
//}
//else{
//prime_number(n);
//}
//ex115
//string name;
//int math,literature;
//cout<<"Nhap diem: Toan, Van: ";
//cin>>math>>literature;
//cin.ignore();
//cout<<"Nhap ten: ";
//getline(cin,name);
//cout<<name;
//cout<<endl;
//cout<<"DTB: "<< (math+literature)/(2.0);
//ex113
//double n,x;
//cout<<"add n,x: ";
//cin>>n>>x;
//sinx(n,x);
//ex112
// int m,n;
// cout<<"add m,n: ";
// cin>>m>>n;
// solid_rectangle(m,n);
//ex111
//int h;
//
//cout<<"add h: ";
//cin>> h;
//isosceles_triangle(h);
//isosceles_right_triangle(h); //c
//isosceles_right_triangle_empty (h);//d
//ex101
//int month, year;
//cout<<"add month, year: ";
//cin>>month>>year;
//month_year(month,year);
//ex99
//double a,b,c;
//cout<<"add a,b,c: ";
//cin>>a >> b>>c;
//sapxeptangdan(a,b,c);
//ex98
//double a,b,c,d,e,f;
//cout<<"add a,b,c,d,e,f: ";
//cin>>a>>b>>c>>d>>e>>f;
//Solve_the_system_of_equations(a,b,c,d,e,f);
//ex97
//double a,b,c;
//cout<<"add a,b,c: ";
//cin>>a>>b>>c;
//triangle(a,b,c);
//ex96
//double x;
//cout<<"add x: ";
//cin>> x;
//int ff=fx(x);
//cout<<ff;
//ex95
//double a,b,c;
//cout<< "Nhap a,b,c: ";
//cin>> a>>b>>c;
//abs_abc(a,b,c);
//ex88
//    char kytu;
//    for(kytu='A';kytu<='Z';kytu++){
//        cout<<kytu<<" ";
//    }
//ex85
//int monthss;
//cout<<"add month: ";
//cin>> monthss;
//months(monthss);
//ex83
// double a,b;
// cout<< " add a,b: ";
// cin>> a>>b;
// check_numberz(a,b);
//ex82
//    double a,b,c;
//    cout<<"Nhap a,b,c: ";
//    cin>>a>>b>>c;
//    double ss=max_abc(a,b,c);
//    cout<<ss;
}
