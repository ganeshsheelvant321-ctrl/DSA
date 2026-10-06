#include<iostream>
using namespace std;
void swapminmax(int arr[],int size){
    int min_idx=0;
    int max_idx=0;
    for(int i=1;i<size;i++){
        if(arr[i]<arr[min_idx]){
            min_idx=i;
        }
        if(arr[i]>arr[max_idx]){
            max_idx=i;
        }
    }
    swap(arr[min_idx],arr[max_idx]);
}
int main(){
    int size=6;
    int arr[]={23,45,56,21,9,1};
    swapminmax(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;

    }
    return 0;

}