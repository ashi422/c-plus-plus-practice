#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a,b,c;
 cout<<"Enter The Value Of a,b,c \n";//side's of triangle
 cin>>a>>b>>c;
 if(a<1||a>100||b<1||b>100||c<1||c>100){
     cout<<"Out of range:-";
     return 0; 
     }

 if(a==b && b==c && c==a)
 {
  cout<<"Equilateral\n";
 }
 else if(a==b || b==c || c==a)
 {
  cout<<"Isosceles\n";
 }
 else if(a*a==b*b+c*c ||b*b==c*c+a*a || c*c==a*a+b*b)
 {
  cout<<"Right angled\n";
 }
 else
 {
  cout<<"Scalene Triangle\n";
 }
 return 0;
 }
