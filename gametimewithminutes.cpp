#include <iostream>

using namespace std;

int main()
{

    int h,h2,m,m2;
    cin>>h>>m>>h2>>m2;
    if(h>h2)
    {
        if(m>m2)
        {
            cout<<"O JOGO DUROU "<<24-h+h2<<" HORA(S) E "<< 60-m+m2<<" MINUTO(S)"<<endl;
        }
        else if(m<m2)
        {
            cout<<"O JOGO DUROU "<<24-h+h2<<" HORA(S) E "<<m2-m<<" MINUTO(S)"<<endl;
        }
        else
        {
            cout<<"O JOGO DUROU "<<24-h+h2<<" HORA(S) E "<<"0"<<" MINUTO(S)"<<endl;
        }
    }
    else if(h2-h==1 && m2<m)
        {
            cout<<"O JOGO DUROU 0 HORA(S) E "<<60-m+m2<<" MINUTO(S)"<<endl;
        }
    else if(h<h2)
    {
        if(m>m2)
        {
            cout<<"O JOGO DUROU "<<h2-h<<" HORA(S) E "<<60-m+m2<<" MINUTO(S)"<<endl;
        }

        else if(m<m2)
        {
            cout<<"O JOGO DUROU "<<h2-h<<" HORA(S) E "<<m2-m<<" MINUTO(S)"<<endl;
        }

        else
        {
            cout<<"O JOGO DUROU "<<h2-h<<" HORA(S) E "<<"0" <<"MINUTO(S)"<<endl;
        }
    }

    else if(h==h2)
    {
        if(m>m2)
        {
            cout<<"O JOGO DUROU 0 HORA(S) E "<<60-m+m2 <<" MINUTO(S)"<<endl;
        }
        else if(m<m2)
        {
            cout<<"O JOGO DUROU 0 HORA(S) E "<<m2-m <<" MINUTO(S)"<<endl;
        }
        else if(m==m2)
        {
            cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
        }
    }
    else if(h2-h==1 && m2<m)
    {
        cout<<"O JOGO DUROU 0 HORA(S) E "<<60-m+m2<<" MINUTO(S)"<<endl;
    }

    return 0;
}
