#include<iostream.h>
#include<iomanip.h>
void Leer_Cadena(char* s)
{
 cin>>resetiosflags(ios::skipws);
 for (int i=0; cin>>s[i]; i++)
    if (s[i] == '\n') break;
    s[i] = '\0';
}

void main ()
{
char s[100];
cout<<endl<<"Introduzca una cadena (terminar con Ctrl-z o INTRO)"<<endl;
Leer_Cadena(s);
cout<<endl<<"La cadena es: "<<s<<endl;
}