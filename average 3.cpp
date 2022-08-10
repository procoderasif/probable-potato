
#include <bits/stdc++.h>

using namespace std;

int main() {

   double a,b,c,d,x,y;
   cin>>a>>b>>c>>d;
   x=(((a*2)+(b*3)+(c*4)+(d*1))/10);
   if(x>=7.0){
      cout<<"Media: "<<fixed<<setprecision(1)<<x<<endl<<"Aluno aprovado."<<endl;
   }
   else if(x<5){
       cout<<"Media: "<<fixed<<setprecision(1)<<x<<endl<<"Aluno reprovado."<<endl;
   }
   else if(x>=5 && x<=6.9)
   {
       cin>>y;
       if(((x+y)/2)<=4.9)
       {
           cout<<"Media: "<<fixed<<setprecision(1)<<x<<endl<<"Aluno em exame."<<endl<<"Nota do exame: "<<y<<endl<<"Aluno reprovado."<<endl<<"Media final: "<<((x+y)/2)<<endl;
       }
       else{
           cout<<"Media: "<<fixed<<setprecision(1)<<x<<endl<<"Aluno em exame."<<endl<<"Nota do exame: "<<y<<endl<<"Aluno aprovado."<<endl<<"Media final: "<<((x+y)/2)<<endl;
       }
   }

    return 0;
}
