
/* Programa de preguntas y respuestas (TP nº3)
* Juan Manuel Morillo Montero
* 28-04-2015
*/

#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(){

int contpreg=0; //se utiliza al final del programa; almacena el num de preguntas respondidas (totales)
int contresp=0; //se utiliza en un if al final del programa; almacena el num de respuestas correctas
int num;
char continuar; //se utiliza para seguir o no jugando luego de responder cada pregunta
   
   do{
      cout<<"\n\t\tESTE ES UN JUEGO DE PREGUNTAS Y RESPUESTAS";
      cout<<"\n\t\t------------------------------------------";
      
      cout<<"\n\n\tPresione ENTER para sortear entre las siguientes categorias:";
      cout<<"\n\n   - Ciencia\n   - Geografia\n   - Historia\n   - Deportes\n   - Entretenimiento\n";
  
  //para sortear la pregunta se genera un numero aleatorio:
    
    string enter;
    getline(cin,enter,'\n'); //para que al pulsar ENTER continue la ejecucion
    
    srand(time(NULL));
    
        num = 1 + rand() % (25);
    
    system ("cls"); //limpiamos la pantalla por estetica
    
  	contpreg++; //"cuenta preguntas"; suma 1 por pregunta realizada
  	
    int codigo; //corresponde al 'código de respuesta' de cada pregunta
    
    switch (num){
           case 1:    cout<<"CIENCIA: Cual es la formula quimica del agua?\n";
                      cout<<"\n1. CO2\n2. H2O\n3. O2"; //opcion2
                      codigo=12;                     
           break;
           case 2:    cout<<"CIENCIA: Que organo del cuerpo humano produce la bilis?\n";
                      cout<<"\n1. Higado\n2. Pancreas\n3. Estomago"; //opcion1
                      codigo=21;
           break;
           case 3:    cout<<"CIENCIA: Donde estan los meniscos?\n";
                      cout<<"\n1. En los tobillos\n2. En los codos\n3. En las rodillas"; //opcion3
                      codigo=33;
           break;
           case 4:    cout<<"CIENCIA: Que son las enzimas?\n";
                      cout<<"\n1. Proteínas\n2. Bacterias\n3. Grasas"; //opcion1
                      codigo=41;
           break;
           case 5:    cout<<"CIENCIA: Que cambio de estado ocurre en la sublimacion?\n";
                      cout<<"\n1. De liquido a gaseoso\n2. De solido a gaseoso\n3. De solido a liquido"; //opcion2
                      codigo=52;
           break;
           case 6:    cout<<"GEOGRAFIA: A que continente pertenece la isla de Tasmania?\n";
                      cout<<"\n1. Asia\n2. Africa\n3. Oceania"; //opcion3
                      codigo=63;
           break;
           case 7:    cout<<"GEOGRAFIA: Con cuantos paises limita Argentina?\n";
                      cout<<"\n1. Cuatro\n2. Cinco\n3. Tres"; //opcion2
                      codigo=72;
           break;
           case 8:    cout<<"GEOGRAFIA: En que mar desemboca el rio Segura? \n";
                      cout<<"\n1. Mar Rojo\n2. Mar Mediterráneo\n3. Mar Caspio"; //opcion2
                      codigo=82;
           break;
           case 9:    cout<<"GEOGRAFIA: De que colores es la bandera de Belgica?\n";
                      cout<<"\n1. Negro, amarillo y rojo\n2. Amarillo, rojo y verde\n3. Rojo, blanco y amarillo"; //opcion1
                      codigo=91;
           break;
           case 10:   cout<<"GEOGRAFIA: Que accidente geografico se define como una pendiente vertical abrupta?\n";
                      cout<<"\n1. Un monte\n2. Un valle\n3. Un acantilado"; //opcion3
                      codigo=103;
           break;
           case 11:   cout<<"HISTORIA: Que pais fue dirigido por Stalin?\n";
                      cout<<"\n1. Union Sovietica\n2. Alemania\n3. Turquia"; //opcion1
                      codigo=111;
           break;
           case 12:   cout<<"HISTORIA: En que año viajo el primer hombre a la luna?\n";
                      cout<<"\n1. 1962\n2. 1969\n3. 1973"; //opcion2
                      codigo=122;
           break;
           case 13:   cout<<"HISTORIA: Donde surgio la filosofia?\n";
                      cout<<"\n1. Roma\n2. Egipto\n3. Grecia"; //opcion3
                      codigo=133;
           break;
           case 14:   cout<<"HISTORIA: En que viaje Colon encontro a los Mayas?\n";
                      cout<<"\n1. En el primero\n2. En el cuarto\n3. No los encontro"; //opcion2
                      codigo=142;
           break;
           case 15:   cout<<"HISTORIA: Para que fue creado el plan Marshall en 1947?\n";
                      cout<<"\n1. Reconstruccion\n2. Colonizacion\n3. Tratado de paz"; //opcion1
                      codigo=151;
           break;
           case 16:   cout<<"DEPORTES: Cuantas finales del mundo jugo la Seleccion Argentina de futbol?\n";
                      cout<<"\n1. Tres\n2. Cuatro\n3. Cinco"; //opcion2
                      codigo=162;
           break;
           case 17:   cout<<"DEPORTES: Cuantos puntos vale un tiro libre encestado en baloncesto?\n";
                      cout<<"\n1. Un punto\n2. Dos puntos\n3. Tres puntos"; //opcion1
                      codigo=171;
           break;
           case 18:   cout<<"DEPORTES: En que pais se invento el voleibol?\n";
                      cout<<"\n1. Australia\n2. España\n3. Estados Unidos"; //opcion3
                      codigo=183;
           break;
           case 19:   cout<<"DEPORTES: Que arte marcial utiliza mayor porcentaje de extremidades inferiores?\n";
                      cout<<"\n1. Taekwondo\n2. Karate\n3. Jiu-jitsu"; //opcion1
                      codigo=191;
           break;
           case 20:   cout<<"DEPORTES: Cual es el estilo de natacion mas rapido?\n"; 
                      cout<<"\n1. Pecho\n2. Crol\n3. Mariposa"; //opcion2 (2)
                      codigo=202;
           break;
           case 21:   cout<<"ENTRETENIMIENTO: Como se llama el pajaro simbolo de los Juegos del Hambre?\n";
                      cout<<"\n1. Jilguero\n2. Colibri\n3. Sinsajo";  //opcion3
                      codigo=213;
           break;
           case 22:   cout<<"ENTRETENIMIENTO: Que Beatle fue asesinado por un fan?\n";
                      cout<<"\n1. Ringo Starr\n2. Jonh Lennon\n3. George Harrison"; //opcion2
                      codigo=222;
           break;
           case 23:   cout<<"ENTRETENIMIENTO: Como se llama el perro de la familia de 'Los Simpson'?\n";
                      cout<<"\n1. Bola de nieve\n2. Duncan\n3. Ayudante de Santa"; //opcion3
                      codigo=233;
           break;
           case 24:   cout<<"ENTRETENIMIENTO: Cuantos colores tiene un cubo de Rubik clasico?\n";
                      cout<<"\n1. Dos\n2. Tres\n3. Seis"; //opcion3
                      codigo=243;
           break;
           case 25:   cout<<"ENTRETENIMIENTO: De donde proviene el reggae?\n";
                      cout<<"\n1. Jamaica\n2. Colombia\n3. Cuba";  //opcion1
                      codigo=251;
           }
                 int opcion;
                 cout<<"\n\nOpcion: "; cin>>opcion;
          
                 int respuesta;
                 respuesta=num*10+opcion;          
                 
                 /* aquí "concatenamos" el num de pregunta con la opcion ingresada y obtenemos un "codigo"
                 si el codigo calculado coincide con el codigo de la pregunta en cuestion la respuesta 
                 es Correcta y suma un punto en el score */
                                            
                 if(respuesta==codigo){
                 cout<<"\n\t\tCORRECTO!";
                 contresp++;
                 }else cout<<"\n\t\tINCORRECTO!";                                              
               
           cout<<"\n\nPresione 'S' para seguir jugando o cualquier otra letra para abandonar: ";
           cin>>continuar;
           system ("cls");
           }while(continuar=='s');
           
           cout<<"\n\n\tRespondio correctamente "<<contresp<<" de "<<contpreg<<" preguntas!\n\n";
           cout<<"\tPulse una tecla + ENTER para salir...\n\n";

           string intro;
		   cin>>intro;
}
