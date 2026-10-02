#include<iostream>
using namespace std;
int main(){
    // int n=10;
    // for(int i=1;i<=n;i++){
    //     int m=5;
    //     for(int j=1;j<=m;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }
    // int n=4;
    // for(int i=0;i<n;i++){
    //     char ch='A';
    //     for(int j=0;j<n;j++){
    //         cout<<ch<<" ";
    //         ch=ch+1;//65+1-->B
    //     }
    //     cout<<endl;
    // }
    // int n=5;
    // int count=1;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<count<<" ";
    //         count+=1;
    //     }
    //     cout<<endl;
    // }
    // int n=5;
    // char ch='A';
    // for(int i=0;i<n;i++){
    //     int m=26;
    //     for(int j=0;j<m;j++){
    //         cout<<ch<<" ";
    //         ch+=1;
    //     }
    //     cout<<endl;
    // }
    // int n=10;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }
    // int n=4;
    // int count=1;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<count;
    //         count+=1;
    //     }
    //     cout<<endl;
    // }
    // int n=4;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<i+1<<" ";
    //     }
    //     cout<<endl;
    // }
    // int n=4;
    // char ch='A';
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<char(ch+i)<<" ";
    //     }
    //     cout<<endl;
    // }
    // int n=4;
    // for(int i=0;i<n;i++){
    //     int count=1;
    //     for(int j=0;j<i+1;j++){
    //         cout<<count;
    //         count++;

    //     }
    //     cout<<endl;
    // }
    // int n=4;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j>0;j--){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    // int n=4;
    // int count=1;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }
    // int n=4;
    // char ch='A';
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j>0;j--){
    //         cout<<ch<<" ";
    //         ch+=1;
    //     }
    //     cout<<endl;
    // }
    // int n=4;
    // char ch='A';
    // for(int i=0;i<n;i++){
    //     //for spcaes
    //     for(int j=0;j<i;j++){
    //         cout<<" ";
    //     }
    //     //for numbers
    //     for(int j=0;j<n-i;j++){
    //         cout<<char(ch);
            
    //     }
    //     ch+=1;
    //     cout<<endl;
    // }
    // int n=8;
    // for(int i=0;i<n;i++){
    //     //for spaces
    //     for(int j=0;j<n-i-1;j++){
    //         cout<<" ";
    //     }
    //     //for numbers
        
    //     for(int j=1;j<=i+1;j++){
    //         cout<<j;
        

    //     }
        
    //     //part2
    //     for(int j=i;j>=1;j--){
    //         cout<<j;
    //     }
        
        
    //     cout<<endl;
    
    // }
    // int n=10;
    // //bottom
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i-1;j++){
    //         cout<<" ";
    //     }
    //     cout<<"*";
    //     if(i!=0){
    //         for(int j=0;j<2*i-1;j++){
    //             cout<<" ";
    //         }
    //         cout<<"*";
    //     }
    //     cout<<endl;

    // }
    // //bottom
    // for(int i=0;i<n-1;i++){
    //     //spaces
    //     for(int j=0;j<i+1;j++){
    //         cout<<" ";
    //     }
    //     cout<<"*";
    //     if(i!=n-2){
    //         for(int j=0;j<2*(n-i)-5;j++){
    //             cout<<" ";
    //         }
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
  int n=10;
  //top
  for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
        cout<<"*";
    }
    
    for(int j=0;j<2*(n-i)-2;j++){
        cout<<" ";
    }
    
    for(int j=0;j<i+1;j++){
        cout<<"*";
    }
    cout<<endl;
    
  }
  //bottom
  for(int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
        cout<<"*";
    }
    for(int j=0;j<2*i;j++){
        cout<<" ";
    }
    for(int j=0;j<n-i;j++){
        cout<<"*";
    }
    cout<<endl;
  }
    return 0;
}