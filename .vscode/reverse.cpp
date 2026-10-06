#include<iostream>
using namespace std;
int reversenum(int num){
    int rev=0;
    while(num>0){
        int digit=num%10;
        rev=rev*10+digit;
        num/=10;
    }
    return rev;
}
int main(){
    int num=345;
    cout<<reversenum(num)<<endl;
    
}