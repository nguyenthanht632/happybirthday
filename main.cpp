#include <iostream>
#include <string>
#include <math.h>
using namespace std;
//ex246
//ex250
//void nhapmang(int a[],int n){
//    for(int i=0;i<n;i++){
//        cout<<"Nhap mang a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
//void sxtang (int a[], int n){
//    for(int i=0;i<n;i++){
//        int value=0;
//        for(int j=0;j<n;j++)
//        if(a[i]<=a[j]){
//            value=a[i];
//            a[i]=a[j];
//            a[j]=value;
//        }
//    }
//}
//void ktcsc(int a[],int n){
//     int values=a[1]-a[0];
//     int flag=0;
//   for(int i=0;i<(n-1);i++){
//    int value=a[i+1]-a[i];
//    if(value==values){
//        flag++;
//    }
//   }
//   if(flag==(n-1)){
//    cout<< "mang tren la csc voi cong sai: "<<values;
//   }
//   else{
//    cout<<"mang k phai csc";
//   }
//}
//ex252
//void nhapmang(int a[],int n){
//    for(int i=0;i<n;i++){
//        cout<<"Nhap mang a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
//void ktdangsong(int a[],int n){
//    int value=0;
//    for(int i=1;i<(n-1);i++){
//        if((a[i]<a[i-1]&&a[i]<a[i+1])||(a[i]>a[i-1]&&a[i]>a[i+1])){
//            value++;
//        }
//    }
//    if(value==(n-2)){
//        cout<<"mang co dang song";
//    }
//    else{
//        cout<<"mang khong co dang song";
//    }
//}
//ex253
//void nhapmang(double a[],int n){
//    for(int i=0;i<n;i++){
//        cout<<"Nhap mang a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
//void xuat (double a[], int &n){
//    for(int i=0;i<n;i++){
//        cout<<"a["<<i<<"]="<<a[i]<<endl;
//    }
//}
//void rutgonmang(double a[], int &n){
//    for(int i=0;i<n;i++){
//        for(int j=n-1;j>=(i+1);j--){
//            if(a[j]==a[i]){
//                if(j>=n){
//                    j=n-1;
//                }
//                    for(int k=j;k<n-1;k++){
//                        a[k]=a[k+1];
//                    }
//                --n;
//            }
//        }
//    }
//}
//void checkmang(double a[], double b[], int &n, int &m){
//    int flag=0;
//    for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//            if(b[j]==a[i]){
//                flag++;
//                break;
//            }
//        }
//    }
//    if(flag==n){
//        cout<<"tat ca phan tu trong mang a co trong b";
//    }
//    else{
//        cout<<"chua ket luan duoc";
//    }
//}
//ex257
//void nhapmang(double a[],int n){
//    for(int i=0;i<n;i++){
//        cout<<"Nhap mang a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
//void xuat (double a[], int n){
//    for(int i=0;i<n;i++){
//        cout<<"a["<<i<<"]="<<a[i]<<endl;
//    }
//}
//void vitriletang(double a[], int n){
//    for(int i=1;i<n;i+=2){
//        if(i%2!=0){
//            for(int j=0;j<n;j++){
//                if(j%2!=0){
//                    if(a[i]<=a[j]){
//                        double value=a[i];
//                        a[i]=a[j];
//                        a[j]=value;
//                    }
//                }
//            }
//        }
//    }
//}
//ex258ok
//void nhapmang(double a[],int n){//nhập mảng
//    for(int i=0;i<n;i++){
//        cout<<"Nhap mang a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
//void xuat (double a[], int &n){
//    for(int i=0;i<n;i++){
//        cout<<"a["<<i<<"]="<<a[i]<<endl;
//    }
//}
//double timsonguyento(double n){//tìm số nguyên tố
//    if(n==(int)n){
//        if(n<=1){
//            return 1;
//        }
//        else{
//            int flag=0;
//            for(int i=1;i<n;i++){
//                if((int)n%i==0){
//                    flag++;
//                }
//            }
//            if(flag==1){
//                return 2;
//            }
//            else{
//                return 0;
//            }
//        }
//    }
//}
//void nguyetotang(double a[],int n){
//    int value=0;
//    for(int i=0;i<n;i++){//sắp xếp các số nguyên tố trong mảng
//        double flag=timsonguyento(a[i]);
//        if(flag==2){
//            for(int j=i;j<n;j++){
//                double flags=timsonguyento(a[j]);
//                if(flags==2){
//                     if(a[j]<=a[i]){
//                    value=a[i];
//                    a[i]=a[j];
//                    a[j]=value;
//                }
//                }
//            }
//        }
//    }
//}
//ex260ok
//void nhapmang(double a[],int n){//nhập mảng
//    for(int i=0;i<n;i++){
//        cout<<"Nhap mang a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
//void rutgonmang(double a[], int &n){//rút gọn mảng
//    for(int i=0;i<n;i++){
//        for(int j=(n-1);j>i;j--){
//            if(a[j]==a[i]){
//                if(j>=n){
//                    j=n-1;
//                }
//                for(int k=j;k<n;k++){
//                    a[k]=a[k+1];
//                }
//                --n;
//            }
//        }
//    }
//}
//void kthoanvi(double a[],double b[], int &n,int &m){//Kiểm tra mảng hoán vị
//    int flag=0;
//    if(n==m){
//        for(int i=0;i<n;i++){
//            for(int j=0;j<n;j++){
//                if(b[j]==a[i]){
//                    flag++;
//                }
//            }
//        }
//    if(flag==n){
//        cout<<"mang b la hoan vi cua mang a";
//    }
//    else{
//        cout<<"chua ket luan duoc";
//    }
//    }
//    else{
//        cout<<"chua ket luan duoc";
//    }
//}
//ex263ok
//void nhapmang(double a[],int n){//nhập mảng
//    for(int i=0;i<n;i++){
//        cout<<"Nhap mang a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
//void xuat (double a[], int n){//xuất mảng
//    for(int i=0;i<n;i++){
//        cout<<"a["<<i<<"]="<<a[i]<<endl;
//    }
//}
//void sxmangduongtang(double a[],int n){//sắp xếp mảng dương tăng dần
//    for(int i=0;i<n;i++){
//        if(a[i]>0){
//            for(int j=i;j<n;j++){
//                if(a[j]>0){
//                    if(a[j]<=a[i]){
//                        int value=a[i];
//                        a[i]=a[j];
//                        a[j]=value;
//                    }
//                }
//            }
//        }
//    }
//}
//void sxmangamgiam(double a[],int n){//sắp xếp mảng dương giảm dần
//    for(int i=0;i<n;i++){
//        if(a[i]<0){
//            for(int j=i;j<n;j++){
//                if(a[j]<0){
//                    if(a[j]>=a[i]){
//                        int value=a[i];
//                        a[i]=a[j];
//                        a[j]=value;
//                    }
//                }
//            }
//        }
//    }
//}
//ex264ok
//void nhapmang(double a[],int n){//nhập mảng
//    for(int i=0;i<n;i++){
//        cout<<"Nhap mang a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
//void xuat (double a[], int n){//xuất mảng
//    for(int i=0;i<n;i++){
//        cout<<"a["<<i<<"]="<<a[i]<<endl;
//    }
//}
//void sapxepmang(double a[], int n){//sắp xếp mảng tăng dần
//    for(int i=0;i<n;i++){
//        for(int j=i;j<n;j++){
//            if(a[j]<=a[i]){
//                double value=a[i];
//                a[i]=a[j];
//                a[j]=value;
//            }
//        }
//    }
//}
//void tronmang(double a[], double b[], double c[],int n,int m){//trộn 2 mảng lại
//    for(int i=0;i<n;i++){
//       c[i]=a[i];
//    }
//    for(int i=0;i<m;i++){
//        c[i+n]=b[i];
//    }
//}
//ex266ok
//void nhapmang(double a[],int n){//nhập mảng
//    for(int i=0;i<n;i++){
//        cout<<"Nhap mang a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
//void xuat (double a[], int &n){//xuất mảng
//    for(int i=0;i<n;i++){
//        cout<<"a["<<i<<"]="<<a[i]<<endl;
//    }
//}
//void themvitri(double a[], int &n,int x,int k){
//    n++;
//    for(int i=n-1;i>k;i--){
//        a[i]=a[i-1];
//    }
//    a[k]=x;
//}
//ex269ok
//void nhapmang(double a[],int n){//nhập mảng
//    for(int i=0;i<n;i++){
//        cout<<"Nhap mang a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
//void xuat (double a[], int &n){//xuất mảng
//    for(int i=0;i<n;i++){
//        cout<<"a["<<i<<"]="<<a[i]<<endl;
//    }
//}
//void sapxeptang(double a[],int &n){
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++){
//            if(a[j]>=a[i]){
//                int value=a[i];
//                a[i]=a[j];
//                a[j]=value;
//            }
//        }
//    }
//}
//void themgiatri(double a[],int &n,double x){
//    ++n;
//    a[n-1]=x;
//}
//ex272ok
//void nhapmang(double a[],int n){//nhập mảng
//    for(int i=0;i<n;i++){
//        cout<<"Nhap mang a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
//void xuat (double a[], int &n){//xuất mảng
//    for(int i=0;i<n;i++){
//        cout<<"a["<<i<<"]="<<a[i]<<endl;
//    }
//}
//void xoavitri(double a[],int &n){
//     double value=0,flag=0,numbers=1;
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++){
//            if(a[j]>=a[i]){
//                value=a[j];
//            }
//        }
//    }
//    for(int i=0;i<n;i++){
//        if(a[i]==value){
//            flag++;
//        }
//    }
//    while(numbers<=flag){
//        int q=0;
//        for(int i=0;i<n;i++){
//        if(a[i]==value){
//            q=i;
//            break;
//            }
//        }
//        for(int i=q;i<n;i++){
//            a[i]=a[i+1];
//        }
//        --n;
//        numbers++;
//    }
//}
//ex276ok
//void nhapmang(double a[],int n){//nhập mảng
//    for(int i=0;i<n;i++){
//        cout<<"Nhap mang a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
//void xuat (double a[], int &n){//xuất mảng
//    for(int i=0;i<n;i++){
//        cout<<"a["<<i<<"]="<<a[i]<<endl;
//    }
//}
//void xoatrungx(double a[],int &n,double x){
//    for(int i=n-1;i>=0;i--){
//        if(a[i]==x){
//            for(int j=i;j<n;j++){
//                a[j]=a[j+1];
//            }
//        --n;
//        }
//    }
//}
//ex278ok
//void rutgonmang(double a[],int &n){
//    for(int i=0;i<n;i++){
//        for(int j=n-1;j>=(i+1);j--){
//            if(a[j]==a[i]){
//                if(j>=n){
//                    j=n-1;
//                }
//                for(int k=j;k<n;k++){
//                    a[k]=a[k+1];
//                }
//                --n;
//            }
//        }
//    }
//}
//ex281ok
//void nhapmang(int a[],int n){//nhập mảng
//    for(int i=0;i<n;i++){
//        cout<<"Nhap mang a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
//void xuat (int a[], int n){//xuất mảng
//    for(int i=0;i<n;i++){
//        cout<<"a["<<i<<"]="<<a[i]<<endl;
//    }
//}
//void chandaulecuoi(int a[],int n){
//    int flag=0;
//    int flag1=n-1;
//    for(int i=0;i<n;i++){
//        if(a[i]%2==0&&a[i]!=0){
//            int value=a[flag];
//            a[flag]=a[i];
//            a[i]=value;
//            flag++;
//        }
//    }
//    xuat(a,n);
//    cout<<endl;
//    for(int i=n-1;i>=0;i--){
//         if(a[i]%2!=0&&a[i]!=0){
//            int value=a[flag1];
//            a[flag1]=a[i];
//            a[i]=value;
//            flag1--;
//        }
//    }
//    xuat(a,n);
//}
//ex284ok
//void nhapmang(int a[],int n){//nhập mảng
//    for(int i=0;i<n;i++){
//        cout<<"Nhap mang a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
//void xuat (int a[], int n){//xuất mảng
//    for(int i=0;i<n;i++){
//        cout<<"a["<<i<<"]="<<a[i]<<endl;
//    }
//}
//void daochan(int a[],int n){
//    int l=n/2;
//    for(int i=0;i<l;i++){
//        if(a[i]%2==0){
//            for(int j=n-1;j>l;j--){
//                if(a[j]%2==0){
//                    int value=a[i];
//                    a[i]=a[j];
//                    a[j]=value;
//
//                }
//            }
//        }
//    }
//}
//ex286ok
//void nhapmang(double a[],int n){//nhập mảng
//    for(int i=0;i<n;i++){
//        cout<<"Nhap mang a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
//void xuat (double a[], int n){//xuất mảng
//    for(int i=0;i<n;i++){
//        cout<<"a["<<i<<"]="<<a[i]<<endl;
//    }
//}
//void dichtrai(double a[],int n){
//    int value=a[0];
//    for(int i=0;i<n;i++){
//        a[i]=a[i+1];
//    }
//    a[n-1]=value;
//}
//ex288ok
//#include <Windows.h>
//void set_color(int color){
//    WORD wColor;
//    HANDLE hStdOut =GetStdHandle(STD_OUTPUT_HANDLE);
//    CONSOLE_SCREEN_BUFFER_INFO csbi;
//    if(GetConsoleScreenBufferInfo(hStdOut,&csbi)){
//        wColor =(csbi.wAttributes& 0xF0) +(color & 0x0F);
//        SetConsoleTextAttribute(hStdOut,wColor);
//    }
//}
//void nhapmang(int a[],int n){//nhập mảng
//    for(int i=0;i<n;i++){
//        cout<<"Nhap mang a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
//void xuat (int a[], int n){//xuất mảng
//    for(int i=0;i<n;i++){
//        cout<<"a["<<i<<"]="<<a[i]<<endl;
//    }
//}
//void xuatchanle (int a[],int n){
//    for(int i=0;i<n;i++){
//        if(a[i]%2==0){
//            set_color(6);
//            cout<<a[i]<<" ";
//        }
//        else{
//            set_color(7);
//            cout<<a[i]<<" ";
//        }
//    }
//}
//ex292ok
//void nhapmang(double a[],int n){//nhập mảng
//    for(int i=0;i<n;i++){
//        cout<<"Nhap mang a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
//void xuat (double a[], int n){//xuất mảng
//    for(int i=0;i<n;i++){
//        cout<<"a["<<i<<"]="<<a[i]<<endl;
//    }
//}
//void nguyenhoa (double a[],int n){
//    for(int i=0;i<n;i++){
//        if(a[i]!=(int)a[i]){
//            a[i]=round(a[i]);
//        }
//    }
//}
//ex293ok_nhưng phải viết lại
//void nhapmang(double a[],int n){//nhập mảng
//    for(int i=0;i<n;i++){
//        cout<<"Nhap mang a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
//void lietkecon(double a[],int n){
//    int number=1;
//    for(int i=0;i<n;i++){
//        cout<<"mang con "<<number<<": ";
//        cout<<a[i];
//        number++;
//        for(int j=i;j<n-1;j++){
//            cout<<endl;
//            cout<<"mang con "<<number<<": ";
//            for(int k=i;k<=j+1;k++){
//                cout<<a[k]<<" ";
//            }
//        number++;
//        cout<<endl;
//        }
//    }
//}
//ex294ok
//void nhapmang(double a[],int n){//nhập mảng
//    for(int i=0;i<n;i++){
//        cout<<"Nhap mang a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
//void conlonhonhai(double a[],int n){
//    for(int i=0;i<n;i++){
//        for(int j=i+1;j<n-1;j++){
//            for(int k=i;k<=j+1;k++){
//                cout<<a[k];
//            }
//        cout<<endl;
//        }
//    }
//}
//ex297ok
//void nhapmang(double a[],int n){//nhập mảng
//    for(int i=0;i<n;i++){
//        cout<<"Nhap mang a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
//double max_value(double a[],int n){
//    int flag=0;
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++){
//            if(a[j]<=a[i]){
//                flag=j;
//            }
//        }
//    }
//    return flag;
//}
//void sapxeptang(double a[],int n){
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++){
//            if(a[j]>=a[i]){
//                int value=a[i];
//                a[i]=a[j];
//                a[j]=value;
//            }
//        }
//    }
//}
//void lietke(double a[],int n){
//    int flag=max_value(a,n);
//    for(int i=0;i<n;i++){
//        if(i==flag){
//            cout<<a[i]<<endl;
//            for(int j=0;j<n;j++){
//                if(j!=flag){
//                    cout<<a[j]<<" "<<a[flag];
//                    cout<<endl;
//                }
//            }
//        }
//        else{
//            for(int j=i;j<n-2;j++){
//                for(int k=i;k<=j+1;k++){
//                    cout<<a[k]<<" ";
//                }
//                cout<<a[flag];
//            cout<<endl;
//            }
//        }
//    }
//}
//ex299
//void nhapmang(double a[],int n){//nhập mảng
//    for(int i=0;i<n;i++){
//        cout<<"Nhap mang a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
//void lietkeconduong (double a[], int n){
//    int number=0;
//    for(int i=0;i<n;i++){
//        if(a[i]>0){
//            number++;
//        }
//    }
//    double b[number];
//    int flag=0;
//    for(int i=0;i<n;i++){
//        if(a[i]>0){
//            b[flag]=a[i];
//            flag++;
//        }
//    }
//    for(int i=0;i<number;i++){
//        for(int j=i;j<number-1;j++){
//            for(int k=i;k<=j+1;k++){
//                cout<<b[k]<<" ";
//            }
//        cout<<endl;
//        }
//    }
//}
//ex301ok
//void nhapmang(double a[],int n){//nhập mảng
//    for(int i=0;i<n;i++){
//        cout<<"Nhap mang a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
//void rutgonmang(double a[],int &n){
//    for(int i=0;i<n;i++){
//        for(int j=n-1;j>i;j--){
//            if(a[j]==a[i]){
//                for(int k=j;k<n;k++){
//                    a[k]=a[k+1];
//                }
//                --n;
//            }
//        }
//    }
//}
//void kiemtracon(double a[],double b[],int &n,int &m){
//    if(n<=m){
//        int flag=0;
//        for(int i=0;i<n;i++){
//            for(int j=0;j<m;j++){
//                if(b[j]==a[i]){
//                    flag++;
//                }
//            }
//        }
//        if(flag==n){
//            cout<<"mang a la con cua mang b";
//        }
//        else{
//            cout<<"mang a khong la con cua mang b";
//        }
//    }
//    else{
//        cout<<"mang a khong la con cua mang b";
//    }
//}
int main(){
    double a[1000];
    int n;
//ex301
//int m;
//double b[100];
//cout<<"enter n,m: ";
//cin>>n>>m;
//nhapmang(a,n);
//cout<<endl;
//nhapmang(b,m);
//rutgonmang(a,n);
//rutgonmang(b,m);
//kiemtracon(a,b,n,m);
//ex299
//cout<<"enter n: ";
//cin>>n;
//nhapmang(a,n);
//lietkeconduong(a,n);
//ex296
//cout<<"enter n: ";
//cin>>n;
//nhapmang(a,n);
//sapxeptang(a,n);
//lietke(a,n);
//ex294
//cout<<"enter n: ";
//cin>>n;
//if(n<=2){
//    cout<<"Nhap lai";
//}
//else{
//nhapmang(a,n);
//conlonhonhai(a,n);
//}
//ex293
//cout<<"enter n: ";
//cin>>n;
//nhapmang(a,n);
//lietkecon(a,n);
//ex292
//cout<<"enter n: ";
//cin>>n;
//nhapmang(a,n);
//nguyenhoa(a,n);
//xuat(a,n);
//ex288
//int a[1000];
//cout<<"enter n: ";
//cin>>n;
//nhapmang(a,n);
//xuatchanle(a,n);
//ex286
//cout<<"enter n: ";
//cin>>n;
//nhapmang(a,n);
//dichtrai(a,n);
//xuat(a,n);
//ex284
//int a[1000];
//cout<<"enter n: ";
//cin>>n;
//nhapmang(a,n);
//daochan(a,n);
//xuat(a,n);
//ex281
//int a[1000];
//cout<<"enter n: ";
//cin>>n;
//nhapmang(a,n);
//chandaulecuoi(a,n);
//ex278
//cout<<"enter n: ";
//cin>>n;
//nhapmang(a,n);
//rutgonmang(a,n);
//xuat(a,n);
//ex276
//int x;
//cout<<"Nhap n: ";
//cin>>n;
//cout<<"Nhap x: ";
//cin>>x;
//nhapmang(a,n);
//xoatrungx(a,n,x);
//xuat(a,n);
//ex272
//int k;
//cout<<"enter n: ";
//cin>>n;
//nhapmang(a,n);
//xoavitri(a,n);
//xuat(a,n);
//ex269
//double x;
//cout<<"enter n,x: ";
//cin>>n>>x;
//nhapmang(a,n);
//sapxeptang(a,n);
//themgiatri(a,n,x);
//sapxeptang(a,n);
//xuat(a,n);
//ex266
//int k;
//double x;
//cout<<"enter n: "<<endl;
//cin>>n;
//cout<<"Nhap gia tri can them: "<<endl;
//cin>>x;
//cout<<"Nhap vi tri them vao: "<<endl;
//cin>>k;
//nhapmang(a,n);
//themvitri(a,n,x,k);
//xuat(a,n);
//ex264
//double b[1000],c[1000];
//int m;
//cout<<"enter n,m: ";
//cin>>n>>m;
//nhapmang(a,n);
//cout<<endl;
//nhapmang(b,m);
//tronmang(a,b,c,n,m);
//sapxepmang(c,n+m);
//xuat(c,n+m);
//ex263
//cout<<"enter n: ";
//cin>> n;
//nhapmang(a,n);
//sxmangamgiam(a,n);
//sxmangduongtang(a,n);
//xuat(a,n);
//ex260
//double b[1000];
//int m;
//cout<<"enter n,m: ";
//cin>>n>>m;
//nhapmang(a,n);
//cout<<endl;
//nhapmang(b,m);
//rutgonmang(a,n);
//rutgonmang(b,m);
//kthoanvi(a,b,n,m);
//ex258
//cout<<"enter n: ";
//cin>>n;
//nhapmang(a,n);
//nguyetotang(a,n);
//xuat(a,n);
//ex257
//cout<<"enter n: ";
//cin>>n;
//nhapmang(a,n);
//vitriletang(a,n);
//xuat(a,n);
//ex253
//    double b[1000];
//    int m;
//    cout<<"enter n,m: ";
//    cin>>n>>m;
//if((n<0||n>100)&&(m<0||m>100)){
//    cout<<"Nhap lai sao cho 0<n,m<100.";
//}
//else{
//    nhapmang(a,n);
//    cout<<endl;
//    nhapmang(b,m);
//    rutgonmang(a,n);
//    rutgonmang(b,m);
//    checkmang(a,b,n,m);
//}
//ex252
//    cout<<"enter n: ";
//    cin>>n;
//    if(n<3){
//        cout<<" mang khong the tao thanh dang song";
//    }
//    else{
//        nhapmang(a,n);
//        ktdangsong(a,n);
//    }
//ex250
//    cout<<"enter n: ";
//    cin>>n;
//    nhapmang(a,n);
//    sxtang(a,n);
//    ktcsc(a,n);
}


