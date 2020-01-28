//Tarea #1: Programa con valores random en el que si los tres valore aleatorios
//sean igual a 7 el participante gana
#include<iostream.h>
#include<stdlib.h>
#include<conio.h>


main()
{ //Inicio del main

int v[1],v1[1],v2[1];
int apuesta,gana;
char resp='s';

randomize();

do
{ //Inicio del do
clrscr();
cout<<"\t\t\t******Bienvenido******"<<endl;
cout<<endl;
cout<<endl;
cout<<"Reglas del juego:"<<endl;
cout<<"--Si los valores aleatorios son iguales a 7 usted GANA."<<endl;
cout<<"--Si no acierta,usted PIERDE."<<endl;
cout<<endl<<"Que cantidad desea apostar?[Lps]"<<endl;
cin>>apuesta;
cout<<endl<<"Ha apostado:"<<apuesta<<" Lps"<<endl;
gana= apuesta * 100;
cout<<endl<<"Si acierta ganara:"<<gana<<"Lps"<<endl;

v[0]= random(9)+1;
v1[0]= random(9)+1;
v2[0]= random(9)+1;

cout<<endl<<"Inicio del juego!!!"<<endl;
cout<<endl<<"Los valores son: "<<v[0]<<" "<<v1[0]<<" "<<v2[0]<<endl;

if(v[0]==7 && v1[0]==7 && v2[0]==7)
{ //Inicio del if
cout<<endl<<"¡¡¡¡¡GANO!!!!!"<<endl;
cout<<endl<<"Ha ganado:"<<gana<<"Lps!!!!"<<endl;
cout<<endl<<"FELICIDADES"<<endl;
} //Cierre del if

else
{
cout<<endl<<"¡¡¡¡PERDIO!!!!"<<endl;
cout<<endl<<"Gracias por participar,vuelva pronto"<<endl;
}

do
{ //Inicio del do
cout<<"Desea participar nuevamente?[S/N]"<<endl;
cin>>resp;

	if(resp!='s' && resp!='S' && resp!='n' && resp!='N')
		{//inicio del if
		cout<<"ERROR!!!  Ingrese la respuesta correcta [S/N]"<<endl;
		}//Cierre del if

}  //Cierre del do

while(resp!='s' && resp!='S' && resp!='n' && resp!='N');

}//Cierre del do

while(resp=='s' || resp=='S');
cout<<"\t\t\tUsted ha salido del juego!!!"<<endl;
cout<<"\t\t\t****Gracias por participar****"<<endl;

return 0;
}//Cierre del main
