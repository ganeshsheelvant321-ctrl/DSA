#include<iostream>
using namespace std;
int linear_search(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int size=5;
    int target=8;
    int arr[size]={23,45,67,8,9};
    cout<<linear_search(arr,size,target)<<endl;

}