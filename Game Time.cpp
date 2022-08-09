#include <iostream>

using namespace std;

int main() {

    int a,b;;
    cin>>a>>b;
    if(a==b){
    cout<<"24"<<endl;
    }
    else if(a<b){
        cout<<b-a<<endl;
    }
    else{
        cout<<"O JOGO DUROU "<<24-a+b<<" HORA(S)";
    }
    return 0;
}
