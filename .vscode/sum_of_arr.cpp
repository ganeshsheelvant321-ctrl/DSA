#include<iostream>
using namespace std;
int sum_arr(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int size=6;
    int arr[]={20,30,40,50,50,70};
    cout<<sum_arr(arr,size)<<endl;
    return 0;

}