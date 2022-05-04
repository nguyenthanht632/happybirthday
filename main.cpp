#include <iostream>
#include <string>
#include <math.h>
using namespace std;
//void nhapmang (double a[],int n){
//    for(int i=0;i<n;i++){
//        cout<<"Nhap a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
//void xuat(double a[],int n){
//    for(int i=0;i<n;i++){
//        cout<<a[i]<<" ";
//    }
//}
//void nhapmang (int a[],int n){
//    for(int i=0;i<n;i++){
//        cout<<"Nhap a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
void xuat(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
//ex134
//double max_value (double a[],int n){
//    nhapmang(a,n);
//    int maxs=0;
//    for(int i=1;i<n;i++){
//        if(a[maxs]<a[i]){
//            a[maxs]=a[i];
//        }
//    }
//    return a[maxs];
//}
//ex135
//void value>0_s (double a[],int n){
//    nhapmang(a,n);
//    int value=0;
//    for(int i=0;i<n;i++){
//        if(0<a[i]){
//            cout<<a[i];
//            break;
//        }
//       else{
//        value++;
//       }
//    }
//    if(value==n){
//        cout<<"-1";
//    }
//}
//ex136
//void last_even_number(int a[],int n){
//    nhapmang(a,n);
//    int value=0;
//    for(int i=n;i>0;i--){
//        if(a[i]%2==0){
//            cout<<a[i];
//            break;
//        }
//        else{
//            value++;
//        }
//    }
//    if(value==n){
//        cout<<"-1";
//    }
//}
//ex137
//void position_with_minimum_value(double a[], int n){
//    nhapmang(a,n);
//    int value=0;
//    for(int i=0;i<n;i++){
//        if(a[i]<=a[value]){
//            value=i;
//        }
//    }
//    cout<<value;
//}
//ex138
//void first_even_value_position(int a[],n){
//    int value=0;
//    nhapmang(a,n);
//    for(int i=0;i<n;i++){
//        if(a[i]%2==0){
//            cout<<i;
//            break;
//        }
//        else{
//            value++;
//        }
//    }
//    if(value==n){
//        cout<<"-1";
//    }
//}
//ex139
//void the_last_perfect_number_location(int a[],int n){
//    nhapmang(a,n);
//    int value=0, value1=0;
//    for(int i=n-1;i>=0;i--){
//        for(int j=1;j<a[i];j++){
//            if(a[i]%j==0){
//                value=value+j;
//            }
//        }
//        if(value==a[i]){
//            cout<<i;
//            break;
//        }
//        else{
//                value1++;
//            }
//    }
//    if(value1==n){
//        cout<<"-1";
//    }
//}
//ex140
//void small_positive_value(double a[],int n){
//    nhapmang(a,n);
//    double value=0,value1=0;
//    for(int i=0;i<n;i++){
//        if(a[i]>0){
//            value=a[i];
//            break;
//        }
//    }
//    for(int i=0;i<n;i++){
//        if(a[i]>0){
//            if(a[i]<value){
//                value=a[i];
//            }
//        }
//        else{
//            value1++;
//        }
//    }
//    if(value1==n){
//        cout<<"-1";
//    }
//    else {
//        cout<<value;
//    }
//}
//ex141
//void small_positive_value_location(double a[],int n){
//    nhapmang(a,n);
//    double value1=0;
//    int value=0;
//    for(int i=0;i<n;i++){
//        if(a[i]>0){
//            value=i;
//            break;
//        }
//    }
//    for(int i=0;i<n;i++){
//        if(a[i]>0){
//            if(a[i]<a[value]){
//                value=i;
//            }
//        }
//        else{
//            value1++;
//        }
//    }
//    if(value1==n){
//        cout<<"-1";
//    }
//    else {
//        cout<<value;
//    }
//}
//ex150
//void maximum_negative_value(double a[],int n){
//    nhapmang(a,n);
//    double value=0, value1=0;
//    for(int i=0;i<n;i++){
//        if(a[i]<0){
//            value=a[i];
//            break;
//        }
//    }
//    for(int i=0;i<n;i++){
//        if(a[i]<0){
//            if(a[i]>value){
//                value=a[i];
//            }
//        }
//        else{
//            value1++;
//        }
//    }
//    if(value1==n){
//        cout<<"0";
//    }
//    else{
//        cout<<value;
//    }
//}
//ex155
//double max_value (double a[],int n){
//    int maxs=0;
//    for(int i=1;i<n;i++){
//        if(a[maxs]<=a[i]){
//            a[maxs]=a[i];
//        }
//    }
//    return maxs;
//}
//void furthest_from_x_value(double a[],int n,double x){
//    nhapmang(a,n);
//    double b[n];
//    for(int i=0;i<n;i++){
//        b[i]=abs(a[i]-x);
//    }
//    int maxs=0;
//    for(int i=1;i<n;i++){
//        if(a[maxs]<=a[i]){
//            a[maxs]=a[i];
//        }
//    }
//    cout<<a[maxs];
//}
//ex157
//void timdoan (double a[],int n){
//    nhapmang(a,n);
//    int mins=0;
//    for(int i=1;i<n;i++){
//        if(a[mins]>=a[i]){
//            a[mins]=a[i];
//        }
//    }
//    cout<<"["<<a[mins]<<",";
//    int maxs=0;
//    for(int i=1;i<n;i++){
//        if(a[maxs]<=a[i]){
//            a[maxs]=a[i];
//        }
//    }
//    cout<<a[maxs]<<"]";
//
//}
//ex158
//void timx (double a[],int n){
//    nhapmang(a,n);
//    int mins=0;
//    int maxs=0;
//    for(int i=1;i<n;i++){
//        if(a[mins]>=a[i]){
//            mins=i;
//        }
//    }
//    for(int i=1;i<n;i++){
//        if(a[maxs]<=a[i]){
//            maxs=i;
//        }
//    }
//    if(abs(a[mins])>=abs(a[maxs])){
//        cout<<abs(a[mins]);
//    }
//    else{
//        cout<<abs(a[maxs]);
//    }
//}
//void dautientrongkhoang (double a[],int n,double x,double y){
//    nhapmang(a,n);
//    int value=0;
//    for(int i=0;i<n;i++){
//        if(a[i]>=x&&a[i]<=y){
//            cout<<a[i];
//            break;
//        }
//        else{
//            value++;
//        }
//    }
//    if(value==n){
//        cout<<x;
//    }
//}
//ex162
//void find_location(double a[],int n){
//    int value=0;
//    nhapmang(a,n);
//    for(int i=1;i<=n-2;i++){
//        if(a[i]==(a[i-1]*a[i+1])){
//            cout<<i<<endl;
//        }
//        else{
//            value++;
//        }
//    }
//    if(value==(n-2)){
//        cout<<"-1";
//    }
//}
//ex164
//void nhapmang (string a[],int n){
//    for(int i=0;i<n;i++){
//        cout<<"Nhap a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
//int check_symmetrical_number(string n){
//   int l=n.length();
//   int counts=0;
//   if(n[0]=='0'){
//       return 0;
//   }
//   else{
//   for(int i=0;i<l;i++){
//       if(n[i]>'9'||n[i]<0)
//       return 0;
//   }
//   for(int i=0;i<(l/2);i++){
//       if(n[l-1-i]==n[i]){
//           counts=counts+1;
//       }
//   }
//   if(counts==((int)l/2)){
//       return 1;
//   }
//   else{
//       return 2;
//   }
//   cout<<counts;
//   }
//}
//void fine_location(string a[],int n){
//    int value=0;
//    nhapmang(a,n);
//    for(int i=0;i<n;i++){
//       int ss= check_symmetrical_number(a[i]);
//        if(ss==1){
//            cout<<a[i];
//            break;
//        }
//        else{
//            value++;
//        }
//    }
//    if(value==n){
//        cout<<"-1";
//    }
//
//}
//ex165
//void nhapmang (int a[],int n){
//    for(int i=0;i<n;i++){
//        cout<<"Nhap a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
//void dauledautien(int a[],int n){
//    nhapmang(a,n);
//    int value1;
//    int b[n],c[n];
//    for(int i=0;i<n;i++){
//        int value=0;
//        b[i]=a[i];
//        c[i]=a[i];
//        while(b[i]>0){
//            b[i]=b[i]/10;
//            value++;
//        }
//        for(int j=1;j<=(value-1);j++){
//            c[i]=c[i]/10;
//        }
//        if(c[i]%2==1){
//            cout<<a[i];
//            break;
//        }
//        else{
//            value1++;
//        }
//    }
//        if(value1==n){
//            cout<<"0";
//        }
//}
//ex167
//void nhapmang (int a[],int n){
//    for(int i=0;i<n;i++){
//        cout<<"Nhap a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
//int checknumber(int n){
//   int number=0,number1=0;
//    while(n>0){
//        int k=n%10;
//        if(k%2!=0){
//            number++;
//        }
//        n=n/10;
//        number1++;
//    }
//    if(number1==number){
//        return 1;
//    }
//    else{
//        return 0;
//    }
//
//}
//void find_value (int a[],int n){
// nhapmang(a,n);
// int m=0,k=0;
// for(int i=0;i<n;i++){
//  int value=checknumber(a[i]);
//  if(value==1){
//    m=a[i];
//  }
//  if(value==1){
//    if(a[i]>=m){
//        m=a[i];
//    }
//  }
//  else{
//    k++;
//  }
// }
// if(k==n){
//    cout<<"-1";
// }
// else{
//    cout<<m;
// }
//}
//ex169
//void nhapmang (int a[],int n){
//    for(int i=0;i<n;i++){
//        cout<<"Nhap a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
//void find_value(int a[],int n){
//    int valuelmin,valuele,b=0;
//    nhapmang(a,n);
//    for(int i=0;i<n;i++){
//        if(a[i]%2!=0){
//            b++;
//        }
//    }
//    if(b=0){
//        cout<<"-1";
//    }
//    else{
//      for(int i=0;i<n;i++){//đánh dấu vị trí lẻ đầu tiên
//        if(a[i]%2!=0){
//            valuele=a[i];
//            break;
//            }
//        }
//        for(int i=0;i<n;i++){//tìm số lẻ bé nhất
//            if(a[i]%2!=0&&a[i]<=valuele){
//                valuelmin=a[i];
//            }
//        }
//        cout<<valuelmin-1;
//    }
//}
//ex171
//int uclnab(int a,int b){
//    while(a!=b){
//        if(a>b){
//            a=a-b;
//        }
//        else{
//            b=b-a;
//        }
//    }
//    return a;
//}
//int ucln (int a[],int n){
//    nhapmang(a,n);
//    for(int i=0;i<n;i++){
//        a[i]=uclnab(a[i],a[i+1]);
//    }
//    return a[1];
//}
//void find_value (int a[],int n){
//    nhapmang(a,n);
//    int one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;
//    for(int i=0;i<n;i++){
//        while(a[i]>0){
//            int b=a[i]%10;
//            switch(b){
//            case 1:
//                one++;
//                break;
//            case 2:
//                two++;
//                break;
//            case 3:
//                three++;
//                break;
//            case 4:
//                four++;
//                break;
//            case 5:
//                five++;
//                break;
//            case 6:
//                six++;
//                break;
//            case 7:
//                seven++;
//                break;
//            case 8:
//                eight++;
//                break;
//            case 9:
//                nine++;
//                break;
//            }
//            a[i]=a[i]/10;
//        }
//    }
//    int mins=one;
//    if(one!=0&&two!=0&&two<=mins){
//        mins=two;
//    }
//    if(three!=0&&three<=mins){
//        mins=three;
//    }
//    if(four!=0&&four<=mins){
//        mins=four;
//    }
//    if(five!=0&&five<=mins){
//        mins=five;
//    }
//    if(six!=0&&six<=mins){
//        mins=six;
//    }
//    if(seven!=0&&seven<=mins){
//        mins=seven;
//    }
//    if(eight!=0&&eight<=mins){
//        mins=eight;
//    }
//    if(nine!=0&&nine<=one){
//        mins=nine;
//    }
//    if(mins==one){
//        cout<<"1"<<endl;
//    }
//    if(mins==two){
//        cout<<"2"<<endl;
//    }
//    if(mins==three){
//        cout<<"3"<<endl;
//    }
//    if(mins==four){
//        cout<<"4"<<endl;
//    }
//    if(mins==five){
//        cout<<"5"<<endl;
//    }
//    if(mins==six){
//        cout<<"6"<<endl;
//    }
//    if(mins==seven){
//        cout<<"7"<<endl;
//    }
//    if(mins==eight){
//        cout<<"8"<<endl;
//    }
//    if(mins==nine){
//        cout<<"9"<<endl;
//    }
//}
//ex174
//void nhapmang (double a[],int n){
//    for(int i=0;i<n;i++){
//        cout<<"Nhap a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
//void find_value(double a[], int n){
//    nhapmang(a,n);
//    for(int i=0;i<n;i++){
//        for(int j=i;j<n;j++){
//            if(a[i]<=a[j]){
//                cout<<"( "<<a[i]<<","<<a[j]<<" )"<<endl;
//            }
//        }
//    }
//}
//ex175
//void nhapmang (double a[],int n){
//    for(int i=0;i<n;i++){
//        cout<<"Nhap a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
//void find_2_value(double a[], int n){
//    nhapmang(a,n);
//    double value=abs(a[0]-a[1]);
//    for(int i=0;i<n;i++){
//        for(int j=i+1;j<n;j++){
//            if(abs(a[i]-a[j])<=value){
//                value=abs(a[i]-a[j]);
//            }
//        }
//    }
//    for(int i=0;i<n;i++){
//        for(int j=i+1;j<n;j++){
//            if(abs(a[i]-a[j])==value){
//                cout<<a[i]<<" "<<a[j]<<endl;
//            }
//        }
//    }
//}
//ex179
//void nhapmang(double a[],int n){
//    for(int i=0;i<n;i++){
//        cout<<"nhap a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
//void find_value(double a[],int n){
//    int flag=0;
//    nhapmang(a,n);
//    for(int i=0;i<n;i++){
//        if(a[i]>abs(a[i+1])){
//            cout<<a[i]<<" ";
//            flag=1;
//        }
//    }
//    if(flag==0){
//        cout<<"not have value";
//    }
//}
//ex181
//void nhapmang(int  a[],int n){
//    for(int i=0;i<n;i++){
//        cout<<"nhap a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
//void find_value(int a[],int n){
//    nhapmang(a,n);
//    for(int i=0;i<n;i++){
//        if(i==0){
//            if(a[1]%2==0){
//                cout<<a[0]<<" ";
//            }
//        }
//        else if(i==(n-1)){
//            if(a[n-2]%2==0){
//                    cout<<a[n-1]<<" ";
//                }
//        }
//        else{
//            if(a[i+1]%2==0||a[i-1]%2==0){
//                cout<<a[i]<<" ";
//            }
//        }
//    }
//}
//ex186
//void nhapmang(double a[],int n){
//    for(int i=0;i<n;i++){
//        cout<<"nhap a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
//void find_location(double a[], int n){
//    nhapmang(a,n);
//    int find_first_audio_number=0;
//    for(int i=0;i<n;i++){
//        if(a[i]<0){
//            find_first_audio_number=a[i];
//            break;
//        }
//    }
//    for(int i=0;i<n;i++){
//        if(a[i]==find_first_audio_number){
//            cout<<i<<" ";
//        }
//    }
//}
//ex189
//void nhapmang(int a[],int n){
//    for(int i=0;i<n;i++){
//        cout<<"nhap a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
//void lietkedadule(int a[],int n){
//    nhapmang(a,n);
//    int value=0;
//    int b[n],c[n];
//    for(int i=0;i<n;i++){
//        b[i]=a[i];
//        c[i]=a[i];
//        int m=0;
//        while(b[i]>0){
//            b[i]=b[i]/10;
//            m++;
//        }
//        c[i]=c[i]/(pow(10,m-1));
//        if(c[i]%2!=0){
//            cout<<a[i]<<" ";
//            value=1;
//        }
//    }
//    if(value==0){
//        cout<<"khong thoa man";
//    }
//}
//ex195
//void nhapmang(double a[],int n){
//    for(int i=0;i<n;i++){
//        cout<<"nhap a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
//void find_abc(double a[],int n){
//    nhapmang(a,n);
//    int value=0;
//    for(int i=0;i<n;i++){
//        for(int j=(i+1);j<n;j++){
//            for(int k=(j+1);k<n;k++){
//                if(a[i]==(a[j]+a[k])){
//                    cout<<"( "<<a[i]<<","<<a[j]<<","<<a[k]<<" )"<<endl;
//                    value++;
//                }
//                else if(a[j]==(a[i]+a[k])){
//                    cout<<"( "<<a[j]<<","<<a[i]<<","<<a[k]<<" )"<<endl;
//                    value++;
//                }
//                else if(a[k]==(a[i]+a[j])){
//                    cout<<"( "<<a[k]<<","<<a[i]<<","<<a[j]<<" )"<<endl;
//                    value++;
//                }
//                else{
//
//                }
//            }
//        }
//    }
//    if(value==0){
//        cout<<"ko co gia tri thoa man";
//    }
//}
//ex202
//void nhapmang(int a[],int n){
//    for(int i=0;i<n;i++){
//        cout<<"nhap a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
//void tongchuc(int a[],int n){
//    nhapmang(a,n);
//    int b[n];
//    int s=0;
//    for(int i=0;i<n;i++){
//        b[i]=a[i];
//        b[i]=b[i]/10;
//        int value=b[i]%10;
//        if(value==5){
//            s=s+a[i];
//        }
//    }
//    cout<<s;
//}
//ex215
//void nhapmang(double a[],int n){
//    for(int i=0;i<n;i++){
//        cout<<"nhap a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
//void khoangcachtb (double a[],int n){
//    nhapmang(a,n);
//    int value=0;
//    double s=0;
//    for(int i=0;i<n;i++){
//        for(int j=(i+1);j<n;j++){
//            s=s+abs(a[i]-a[j]);
//            value++;
//        }
//    }
//    cout<<"khoang cach trung binh: "<< s/value<<endl;
//}
//ex229
//void nhapmang(double a[],int n){
//    for(int i=0;i<n;i++){
//        cout<<"nhap a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
//void demphanbiet (double a[], int n){
//    nhapmang(a,n);
//    int result = 0; //kết quả (số lượng các phần tử khác nhau)
//    for (int i = 0; i < n; i++)
//    {
//        // kiểm tra xem từ 0->i-1 phần tử a[i] đã xuất hiện chưa, nếu chưa thì tăng kết quả lên 1
//        bool isOccur=false;  // giả sử là chưa xuất hiện
//        for (int j = 0; j < i; j++)
//            if (a[i] == a[j])
//            {
//                isOccur = true; // đã xuất hiện rồi
//                break;
//            }
//        if (!isOccur) result++; // tăng kết quả lên 1
//    }
//    cout<< result;
//}
//ex230
//void nhapmang(double a[],int n){
//    for(int i=0;i<n;i++){
//        cout<<"nhap a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
//void lietke (double a[],int n){
//    nhapmang(a,n);
//  for (int i = 0; i < n; i++)
// {
//  int dem = 0;
//  for (int j = 0; j < n; j++)
//  {
//   if (a[i] == a[j])
//   {
//    if (j < i)
//     break;
//    else
//     dem++;
//   }
//  }
//
//  if (dem !=0)
//   cout << "So "<<a[i]<<" xuat hien : " << dem << " lan\n";
// }
//}
//ex234
//void nhapmang(double a[],int n){
//    for(int i=0;i<n;i++){
//        cout<<"nhap a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
//void demgiatri(double a[], double b[],int n,int m){
//    nhapmang(a,n);
//    nhapmang(b,m);
//    for(int i=0;i<n;i++){
//        int dem=0;
//        for(int j=0;j<n;j++){
//            if(a[i]==a[j]){
//                if(j<i){
//                    break;
//                }
//                else{
//                    dem++;
//                }
//            }
//        }
//        if(dem==1){
//                int value=0;
//            for(int k=0;k<m;k++){
//                if(a[i]==b[k]){
//                    value=1;
//                }
//            }
//        if(value==0){
//                cout<<a[i];
//            }
//        }
//    }
//    for(int i=0;i<m;i++){
//        int dem=0;
//        for(int j=0;j<m;j++){
//            if(b[i]==b[j]){
//                if(j<i){
//                    break;
//                }
//                else{
//                    dem++;
//                }
//            }
//        }
//        if(dem==1){
//                int value=0;
//            for(int k=0;k<n;k++){
//
//                if(b[i]==a[k]){
//                    value=1;
//                }
//            }
//        if(value==0){
//                cout<<b[i];
//            }
//        }
//    }
//}
//ex236
//void nhapmang(double a[],int n){
//    for(int i=0;i<n;i++){
//        cout<<"nhap a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
//void demsolan(double a[],double b[],int n,int m){
//    nhapmang(a,n);
//    nhapmang(b,m);
//    for(int i=0;i<n;i++){
//              int value=0;
//        for(int j=0;j<n;j++){
//            if(a[j]==a[i]){
//                if(j<i){
//                break;
//                }
//                else{
//                value++;
//                }
//            }
//    }
//    if(value!=0){
//        int value1=0;
//        for(int k=0;k<m;k++){
//            if(b[k]==a[i]){
//                value1++;
//            }
//        }
//        cout<<"so "<<a[i]<<" xuat hien trong mang b: "<<value1<<endl;
//    }
//}
//}
//ex238
//void nhapmang(double a[],int n){
//    for(int i=0;i<n;i++){
//        cout<<"nhap a["<<i<<"]: ";
//        cin>>a[i];
//    }
//}
//void lietkenhieunhat(double a[],int n){
//    nhapmang(a,n);
//    int max_value=0;
//    for(int i=0;i<n;i++){
//        int flag=0;
//        for(int j=0;j<n;j++){
//            if(a[j]==a[i]){
//                if(j<i){
//                    break;
//                }
//                else{
//                    flag++;
//                }
//            }
//        }
//        if(flag>=max_value){
//            max_value=flag;
//        }
//    }
//    for(int i=0;i<n;i++){
//        int flag=0;
//        for(int j=0;j<n;j++){
//            if(a[j]==a[i]){
//                if(j<i){
//                    break;
//                }
//                else{
//                    flag++;
//                }
//            }
//        }
//        if(flag==max_value){
//            cout<<a[i]<<" ";
//        }
//    }
//}
//ex239
void nhapmang(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<"nhap a["<<i<<"]: ";
        cin>>a[i];
    }
}
int check_number(int x){
    int digit=0;
    for(int i=1;i<x;i++){
        if(x%i==0){
            digit++;
        }
    }
    if(digit==1){
        return 1;
    }
    else{
        return 0;
    }
}
void demntphanbiet(int a[],int n){
    nhapmang(a,n);
    int value=check_number(a[n]);
    for(int i=0;i<n;i++){
        int digit=0;
        for(int j=0;j<n;j++){
            if(value==1){
                if(j<i){
                    break;
                }
                else{
                    digit++;
                }
            }
        }
        cout<<"so nguyen to a[i]"<<" "<<digit;
    }
}
int main(){
    int n,m;
//    double a[1000];
//    int a[1000];
//    cout<<"Nhap so phan tu:n,m ";
//    cin>> n>>m;
    cout<<"Nhap so phan tu: ";
    cin>>n;
//ex239
int a[1000];
demntphanbiet(a,n);
//ex238
//double a[1000];
//lietkenhieunhat(a,n);
//ex236
//double a[1000], b[1000];
//demsolan(a,b,n,m);
//ex234
//double a[1000], b[1000];
//demgiatri(a,b,n,m);
//ex230
//double a[1000];
//lietke(a,n);
//ex229
//double a[1000];
//demphanbiet(a,n);
//ex215
//double a[1000];
//khoangcachtb(a,n);
//ex202
//int a[1000];
//tongchuc(a,n);
//ex195
//double a[1000];
//find_abc(a,n);
//ex189
//int a[1000];
//lietkedadule(a,n);
//ex186
//double a[1000];
//find_location(a,n);
//ex181
//int a[1000];
//find_value(a,n);
//ex179
//double a[1000];
//find_value(a,n);
//ex175
//double a[1000];
//find_2_value(a,n);
//ex174
//double a[1000];
//find_value(a,n);
//ex173
//int a[1000];
//find_value(a,n);
//ex171
//int a[1000];
//ucln(a,n);
//int ss=ucln(a,n);
//cout<<ss;
//ex169
//int a[1000];
//find_value(a,n);
//ex167
//int a[1000];
//find_value(a,n);
//ex166
//    int a[1000];
//    dauledautien(a,n);
//ex165
//    string a[1000];
//    fine_location(a,n);
//ex162
//find_location(a,n);
//ex161
//double x,y;
//cout<<"Nhap x,y: ";
//cin>>x>>y;
//dautientrongkhoang(a,n,x,y);
//ex158
//timx(a,n);
//ex157
//timdoan(a,n);
//ex155
//    double x;
//    cout<<"Nhap x: ";
//    cin>>x;
//furthest_from_x_value(a,n,x);
//ex150
//maximum_negative_value(a,n);
//ex141
//small_positive_value_location(a,n);
//ex140
//small_positive_value(a,n);
//ex139
//the_last_perfect_number_location(a,n);
//ex138
//first_even_value_position(a,n);
//ex137
//position_with_minimum_value(a,n);
//    nhapmang(a,n);
//    xuat(a,n);
//ex135
//value>0_s(a,n);
//ex134
//    double maxss=max_value(a,n);
//    cout<<"max value= "<<maxss;
    return 0;
}
