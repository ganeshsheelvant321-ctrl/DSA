#include<iostream>
using namespace std;
int main(){
    // int n=45;
    // if (n>=0){
    //     cout<<"n is positive"<<endl;

    // }else{
    //     cout<<"n is negative number"<<endl;
    // }
    // int age;
    // cout<<"enter your age"<<endl;
    // cin>>age;
    // if(age>=18){
    //     cout<<"you can vote"<<endl;
    // }else{
    //     cout<<"you cannot vote"<<endl;
    // }
    // int n;
    // cout<<"enter the number"<<endl;
    // cin>>n;
    // if(n%2==0){
    //     cout<<"even number"<<endl;
    // }else{
    //     cout<<"odd number"<<endl;
    // }
    // int marks;
    // cout<<"enter your marks"<<endl;
    // cin>>marks;
    // if(marks>=90){
    //     cout<<'A'<<endl;
    // }else if(marks>=80 && marks<70){
    //     cout<<'B'<<endl;

    // }else if(marks>=70 && marks<60 ){
    //     cout<<'C'<<endl;
    // }else{
    //     cout<<'D'<<endl;
    // }
    // char ch;
    // cout<<"enter the charecter"<<endl;
    // cin>>ch;
    // if (ch>='a' && ch<='z'){
    //     cout<<"lowercase"<<endl;

    // }else{
    //     cout<<"upper case"<<endl;
    // }
    // if(ch>=65 && ch<=90){
    //     cout<<"uppercase"<<endl;
    // }else{
    //     cout<<"lower case"<<endl;
    // }
    // int n;
    // cout<<(n>=0? "positive" : "negative")<<endl;
    // int n=50;
    // int sum=0;
    // for(int i=1;i<=n;i++){
    //     sum=sum+i;
    // }
    // cout<<sum<<endl;
    // int i=1;
    // int sum=0;
    // int n=7;
    // while(i<=n){
    //     sum+=i;
    //     i++;
    //     if(i==5){
    //         break;
    //     }
    // }
    // cout<<"sum="<<sum<<endl;
    // int n=5;
    // int sum=0;
    // cout<<"enter the number:"<<endl;
    // cin>>n;
    // for(int i=1;i<=n;i+=2){
    //     sum+=i;
    // }
    // cout<<"sum="<<sum<<endl;
    // for(int i=1;i<=n;i++){
    //     if(i%2!=0){
    //         sum+=i;
    //     }
    // }
    // cout<<"odd_sum="<<sum<<endl;
    // int odd_sum=0;
    // int n=6;
    // int i=1;
    // while(i<=n){
    //     if(i%2!=0){
    //         odd_sum+=i;
        
    //     }
    //     i++;
    // }
    // cout<<"odd_sum="<<odd_sum<<endl;
    // int n=10;
    // int sum=0;
    // for(int i=1;i<=n;i++){
    //     if(i%2==0){
    //         sum+=i;
    //     }
    // }
    // cout<<"even_sum="<<sum<<endl;
    // do{
    //     cout<<"helloworld"<<endl;
    // }
    // while(3>5);
    // int n=19;
    // int i=1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(i<=n);
    // cout<<endl;
    //prime or not
    // int n=10;
    // bool isprime=true;
    // for(int i=2;i*i<=n;i++){
    //     if(n%i==0){
    //         isprime=false;
    //         break;
    //     }
    // }
    // if(isprime==true){
    //     cout<<"prime"<<endl;

    // }else{
    //     cout<<"non prime"<<endl;
    // }
    //nested loops
    // int n=6;
    // for(int i=1;i<=n;i++){
    //     int m=6;
    //     for(int j=1;j<=m;j++){
    //         cout<<"*";
    //     }
    //     cout<<end;
    // }
//    int n;
//     cout<<"enter the number"<<endl;
//     cin>>n;
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         if(i%3==0){
//             sum+=i; 
//         }
    
//     }
//     cout<<"sum of number which is divisible by 3 is:"<<sum<<endl;
int n;
cout<<"enter the number:"<<endl;
cin>>n;
int fact=1;
for(int i=1;i<=n;i++){
    fact=fact*i;
}
cout<<"factorial of a number is equal to:"<<fact<<endl;

    
   
    return 0;


}
