/*Un radar comun de la policia de camino para calcular la velocidad emite un rayo de microondas en una frecuencia f0. 
El rayo se reflejara en el auto que se aproxima y sera recibido y analizado por la unidad de radar.
La frecuencia del rayo reflejado cambia ligeramente de f0 a f1 acausa del movimiento del vehiculo.
La relacion entre la velocidad del auto(v), en millas por hora y las dos frecuencias de microondas es v=(6.685e8)(f1-f0)/(f1+f0).
donde las ondas emitidas tienen una frecuencia de f0=2e10 seg¨-1 utilñizando esta formula escriba u programa para calcular 
y desplegar el area a una frecuencia recibida y la frecuencia recibida*/

#include<iostream.h>
main ()
{
 double velocidad, f0, f1;

 f0 = 2e-10;
 f1 = 2.0000004e-10;

 velocidad = 6.685e8 * (f1-f0)/(f1+f0);
 cout<<"La velocidad es: "<<velocidad<<" millas/hora"<<endl;
return 0;
}

