#include<iostream>
using namespace std;
void unique(int arr[],int size){
    for(int i=0;i<size;i++){
        bool isunique=true;
        for(int j=0;j<size;j++){
            if(i!=j && arr[i]==arr[j]){
                isunique=false;
                break;
            }
        }
        if(isunique){
            cout<<arr[i]<<" "<<endl;
        }
    }
}
int main(){
    int size=6;
    int arr[]={1,2,2,2,2,2};
    unique(arr,size);
    return 0;

}