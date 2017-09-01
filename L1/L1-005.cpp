#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[1000][3]={{0}};
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    int m;
    cin>>m;
    int b[1000];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[j][1]==b[i]){
                cout<<a[j][0]<<' '<<a[j][2]<<endl;
            }
        }
    }
    return 0;
}
