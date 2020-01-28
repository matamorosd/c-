
#include<iostream.h>
#include<stdlib.h>

main ()
{
 int i, j, boleto[6], loto[6], c=0;
 double apuesta;

 randomize();

 cout<<endl<<"\tLOTERIA\n"<<endl;
 cout<<endl<<"Reglas"<<endl;
 cout<<endl<<"Si usted acierta 1 numero su apuesta se multiplica por 2\n";
 cout<<endl<<"Si usted acierta 2 numero su apuesta se multiplica por 3\n";
 cout<<endl<<"Si usted acierta 3 numero su apuesta se multiplica por 5\n";
 cout<<endl<<"Si usted NO acierta a ningun numero Usted Pierde\n";
 cout<<endl<<"Ingrese la cantidad que desea apostar? ";
 cin>>apuesta;
 for (i=0; i<6; i++)
 {
  do
  {
  cout<<endl<<"Ingrese el numero "<<i+1<<" del boleto: ";
  cin>>boleto[i];
  if (boleto[i]==boleto[i-1] || boleto[i]==boleto[i-2] || boleto[i]==boleto[i-3] || boleto[i]==boleto[i-4] || boleto[i]==boleto[i-5] || boleto[i]==boleto[i-6])
  {
   cout<<"\nError Numero ya esta seleccionado pruebe otro...\n"<<endl;
  }
  }
  while (boleto[i]==boleto[i-1] || boleto[i]==boleto[i-2] || boleto[i]==boleto[i-3] || boleto[i]==boleto[i-4] || boleto[i]==boleto[i-5] || boleto[i]==boleto[i-6]);
 }
 cout<<"\tSu boleto fue:\n";
 for (i=0; i<6; i++)
 {
  cout<<boleto[i]<<"\t";
 }
 cout<<endl<<"...SORTEO REALIZADO..."<<endl;
 for (i=0; i<6; i++)
 {
 do
 {
  loto[i] = random(32)+1;
  /*if (loto[i]==loto[i-1] || loto[i]==loto[i-2])
  {
   loto[i] = random(20)+1;
  } */

  }
  while(loto[i]==loto[i-1] || loto[i]==loto[i-2] || loto[i]==loto[i-3] || loto[i]==loto[i-4] || loto[i]==loto[i-5] || loto[i]==loto[i-6]);
 }
 /*for (i=0; i<3; i++)
 {
  cout<<endl<<"Ingrese el numero "<<i+1<<": ";
  cin>>loto[i];
 } */
 for (i=0; i<6; i++)
 {
  cout<<loto[i]<<"\t";
 }
 for (i=0; i<6; i++)
 {
  for (j=0; j<6; j++)
  {
   if (boleto[i] == loto[j])
   {
    c++;
   }
  }
 }
 cout<<"\nUsted ha acertado "<<c<<" digitos...";
 if (c==1)
 {
  apuesta = apuesta *2;
  cout<<endl<<"\nGANO...";
  cout<<endl<<"Usted ha ganado "<<apuesta<<"!!!";
 }
 if (c==2)
 {
  apuesta = apuesta *3;
  cout<<endl<<"\nGANO...";
  cout<<endl<<"Usted ha ganado "<<apuesta<<"!!!";
 }
 if (c==3)
 {
  apuesta = apuesta *5;
  cout<<endl<<"\nGANO...";
  cout<<endl<<"Usted ha ganado "<<apuesta<<"!!!";
 }
 if (c==0)
 {
  cout<<endl<<"\nPERDIO...";
  cout<<endl<<"\nSUERTE EN LA PROXIMA...";
 }
 if (c>0)
 {
  cout<<"\nUsted ha acertado los numero:"<<endl;
 }
 for (i=0; i<6; i++)
 {
  for (j=0; j<6; j++)
  {
   if (boleto[i] == loto[j])
   {
    cout<<boleto[i]<<"\t";
   }
  }
 }


 return 0;
}