#include<iostream.h>
main ()
{
 float x, y;
 char ch1, ch2;
 ch1 = 'a';
 ch2 = 'b';
 x = 85.5;
 y = 90.0;
 
 cout<<"El caracter 1 es: "<<ch1<<endl;
 cout<<"Los bytes de espacio almacenado utilizados por un caracter: "<<sizeof(ch1)<<endl;
 cout<<"El caracter 2 es: "<<ch2<<endl;
 cout<<"Los bytes de espacio almacenado utilizados por un caracter: "<<sizeof(ch2)<<endl;
 cout<<"El valor de la variable x es: "<<x<<endl;
 cout<<"Los bytes de espacio almacenado utilizados es: "<<sizeof(x)<<endl;
 cout<<"El valor de la variable y es: "<<y<<endl;
 cout<<"Los bytes de espacio almacenado utilizados es: "<<sizeof(y)<<endl;
return 0;
}

