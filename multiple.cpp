#include <iostream>

using namespace std;

int main() {

    int a,b,x;
     cin>>a>>b;
     if(a<b){
      x=a;
      a=b;
      b=x;
    }
    if(a%b==0){
        cout<<"Sao Multiplos"<<endl;
    }
 else{
     cout<<"Nao sao Multiplos"<<endl;
 }
    return 0;
}
