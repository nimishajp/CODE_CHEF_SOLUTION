#include <iostream>
using namespace std;

int main(){
    
    int n,k;
    cin>>n>>k;
    
    
    
    for(int i=1; i<=n;i++){
        
        int m;
        cin>>m;
        
        if(m==k){
          cout<<1<<endl;
          return 0;
        }
        
    }
    cout<<-1<<endl;
    
}