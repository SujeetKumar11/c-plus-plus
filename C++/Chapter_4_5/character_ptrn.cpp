#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n){
              char x='A'+j-1;
            cout<<x<<"  ";
              
            j++;
        }
        cout<<endl;
        i=i+1;
    }
}
 
