#include<iostream>
using namespace std;
void reverse_arr(int arr[],int size){
    int start=0,end=size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}
int main(){
    int size=6;
    int arr[size]={2,4,6,8,10,12};
    reverse_arr(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

}