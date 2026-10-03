#include<iostream>
using namespace std;
//fumction defination
// int printhello(){
//      cout<<"hello"<<endl;
//      return 3;
// }
// //fun for calculating sum of two numbers
// int sum(int a,int b){
//     int s=a+b;
//     return s;
// }
// int min_of_two(int m,int n){//parameters
//     if(m<n){
//         return m;
//     }else{
//         return n;
//     }
//}
// int sum_of_n(int n){
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum+=i;
//     }
//     return sum;
// }
// int factorial(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact*=i;
//     }
//     return fact;
// }
// void changex(int x){
//     x=2*x;
//    cout<<"x="<<x<<endl; 
// }
// int sumofdigit(int num){
//     int sum_digit=0;
//     while(num>0){
//         int lastdigit=num%10;
//         num=num/10;
//         sum_digit+=lastdigit;
//     }
//     return sum_digit;
// }
// int factorial(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact*=i;
//     }
//     return fact;
// }
// int ncr(int n,int r){
//     int fact_n=factorial(n);
//     int fact_r=factorial(r);
//     int fact_nmr=factorial(n-r);
//     return fact_n/fact_r * fact_nmr;
//}
// string primeornot(int n){
//     bool is_prime=true;
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0){
//             is_prime=false;
//             break;
//         }
//     }
    
//     if(is_prime==true){
//         return "prime";

//     }else{
//         return "non prime";
//     }
// }
// void no_of_prime(int n){
//     for(int num=2;num<=n;num++){
//         bool isprime=true;
//         for(int i=2;i<num;i++){
//             if(num%2==0){
//                 isprime=false;
//                 break;
//             }
//         }
//         if(isprime){
//             cout<<num<<" ";
        
//         }
//     }
//}
int feboncii(int n){
    int a=0,b=1;
    for(int i=1;i<=n;i++){
        int c=a+b;
        a=b;
        b=c;
    }
    return a;
}
int main(){
    //function call
//    int val=printhello();
//    cout<<"val="<<val<<endl;
//    cout<<sum(10,5)<<endl;//arguments
//    cout<<min_of_two(34,67)<<endl;//arguments
// cout<<sum_of_n(5)<<endl;
// cout<<factorial(5)<<endl;
// cout<<factorial(15)<<endl;
// int x=5;
// changex(x);
// cout<<"x="<<x<<endl;
// cout<<sumofdigit(456)<<endl;
// int n=5;
// int r=5;
// cout<<ncr(n,r)<<endl;
// int n=79;
// cout<<primeornot(n)<<endl;
// no_of_prime(5);
cout<<feboncii(10);

    
   return 0;
}