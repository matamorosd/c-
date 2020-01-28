#include<iostream.h>

int StrCmp (char *s1, char *s2)
{
 int i = 0;
 while (s1[i] || s2[i]){
 if (s1[i] < s2[i])
 return -1;
 i++;
}
return 0;
}

void main ()
{
 char s1[100], s2[100];
 cin>>s1>>s2;
 int r = StrCmp(s1,s2);
 if (r==0)
 cout<<"Las dos primeras palabras son iguales";
 else
 if (r==1)
 cout<<"La primera palabra es mayor alfabeticamente";
 else
 cout<<"La segunda palabra es mayor alfabeticamente";
}