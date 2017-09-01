#include<iostream>
using namespace std;

int main(){
    int need=0;
    int floor=0;
    int N=0;
    cin>>N;
    char c;
    cin>>c;
    if(N==0){
        cout<<0<<endl;
        return 0;
    }
    while(need<N){
        floor++;
        need = 2*floor*floor-1;
    }
    //output '*'
    floor--;
    need = 2*floor*floor-1;
    for(int i=0;i<floor;i++){
        for(int j=0;j<i;j++){
            cout<<' ';
        }
        for(int j=2*(floor-i)-1;j>0;j--){
            cout<<c;
        }
        cout<<endl;
    }
    for(int i=1;i<floor;i++){
        for(int j=floor-i-1;j>0;j--){
            cout<<' ';
        }
        for(int j=0;j<2*(i+1)-1;j++){
            cout<<c;
        }
        cout<<endl;
    }
    //output left
    int left=0;
    left = N-need;
    cout<<left<<endl;
    return 0;
}


