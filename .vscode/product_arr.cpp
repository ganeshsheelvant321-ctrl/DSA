#include<iostream>
using namespace std;
int product_arr(int arr[],int size){
    int product=1;
    for(int i=0;i<size;i++){
        product*=arr[i];
    }
    return product;
}
int main(){
    int size=6;
    int arr[]={1,2,3,4,5,6};
    cout<<product_arr(arr,size)<<endl;
    return 0;

}