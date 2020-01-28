#include<iostream.h>

int Mcd(int a, int b)
{
 if (a<=0 || b<=0)
 return -1;
 while (a!=b)
 if (a<b)
 b = b- a;
 else
 a = a- b;
 return a;
}
void main ()
{
int a, b;
cin>>a>>b;
cout <<"MCD. = "<<Mcd(a, b);
}