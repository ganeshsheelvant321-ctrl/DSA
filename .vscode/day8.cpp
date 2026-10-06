#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int>vec={1,2,3};
    // vector<int>arr(3,0);
    // cout<<arr[0]<<endl;
    // cout<<vec[0]<<endl;
    // vector<int>vec(3,1);
    // for(int i:vec){
    //     cout<<i<<endl;
    // }
    // vector<char>vec={'a','b','c','d','e','d'};
    // cout<<"size="<<vec.size()<<endl;
    // for(char i :vec){
    //     cout<<i<<endl;
    // }
    // vector<int>vec;
    // vec.push_back(23);
    // vec.push_back(24);
    // vec.push_back(25);
    // cout<<"after push back size="<<vec.size()<<endl;
    // vec.pop_back();
    // for(int i:vec){
    //     cout<<i<<endl;
    // }
    // cout<<vec.back()<<endl;
    // cout<<vec.front()<<endl;
    // cout<<vec.at(0);
    // cout<<vec.at(1);
    vector<int>vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    return 0;
}