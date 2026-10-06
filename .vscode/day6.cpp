#include<iostream>
using namespace std;
// int decTOBinary(int decnum){
//     int ans=0;
//     int pow=1;
//     while(decnum>0){
//         int rem=decnum%2;
//         decnum/=2;
//         ans+=(rem*pow);
//         pow*=10;


//     }
    //return ans;
//}
// int bintodec(int binNum){
//     int ans=0;
//     int pow=1;
//     while(binNum>0){
//         int rem=binNum%10;
//         ans+=(rem*pow);
//         binNum/=10;
//         pow*=2;
//     }
//     return ans;
// }
// bool ispoweroftwo(int num){
//     int x=1;
//     while(x<num){
//         x*=2;
//     }
//     if(x==num){
//         return true;
//     }else{
//         return false;

//     }
// }
// bool ispoweroftwo(int num){
//     if(num>0 && (num&(num-1))==0){
//         return true;

//     }else{
//         return false;
//     }
// }
int reversenum(int num){
    int rev=0;
    while(num!=0){
        int digit=num%10;
        rev=rev*10+digit;
        num/=10;
    }
    return rev;
}

int main(){
//   int binNum=10101010;
//   cout<<bintodec(binNum)<<endl;
// int a=3,b=7;
// cout<<(a&b)<<endl;
// cout<<(a|b)<<endl;
// cout<<(a^b)<<endl;
// cout<<(4<<1)<<endl;
// cout<<(10<<2)<<endl;
// cout<<(10>>1)<<endl;
// cout<<(8>>2)<<endl;
// cout<<(6&10)<<endl;
// cout<<(6|10)<<endl;
// cout<<(6^10)<<endl;
// cout<<(10<<2)<<endl;
// cout<<(10>>1)<<endl;
// cout<<(5-2*6)<<endl;
// cout<<(4*5%2)<<endl;
// if(3>1){
//     int x=10;
// }
// cout<<x<<endl;
// for(int i=0;i<=8;i++){

// }
// cout<<i<<endl;
// {
//     int x=10;
// }
// cout<<x<<endl;
// cout<<sizeof(int)<<endl;
// cout<<sizeof(long int)<<endl;
// cout<<sizeof(short int)<<endl;
// cout<<sizeof(long long)<<endl;
// unsigned int x=-10;
// cout<<x<<endl;
// cout<<ispoweroftwo(18)<<endl;
// cout<<ispoweroftwo(32)<<endl;
cout<<reversenum(345)<<endl;
return 0;
   
}