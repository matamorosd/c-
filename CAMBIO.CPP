#include<iostream.h>
#include<stdio.h>
#include<string.h>

main ()
{
char num[15];
int num1, x, sum = 0, i;
cout<<endl<<"Ingrese el valor"<<endl;
cin>>num1;
if (num1==0)
  cout<<"Es Nulo";
else
if (num1%2==0)
  cout<<"Es Par";
else
  cout<<"Es Impar";

sprintf(num, "%d", num1);
x = strlen(num);
for (i=0; i<x; i++)
{
 switch (num[i])
 {
 case '1':
   sum = sum + 1;
  break;
 case '2':
   sum = sum + 2;
  break;
 case '3':
    sum = sum + 3;
  break;
 case '4':
   sum = sum + 4;
  break;
 case '5':
 sum = sum + 5;
  break;
 case '6':
 sum = sum + 6;
  break;
 case '7':
 sum = sum + 7;
  break;
 case '8':
 sum = sum + 8;
  break;
 case '9':
 sum = sum + 9;
  break;
 case '0':
 sum = sum + 0;
  break;
 default:
  break;
 } 
}
cout<<endl<<"\nLa suma de los valores es: "<<sum<<endl;
return 0;
}