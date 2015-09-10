/* leer circulos - devolver el de mayor area

*/

# include <iostream> 
#include <math.h>

struct punto2d {
	
	double x , y;
};

struct circulo {
	double radio;
	punto2d centro;
	
};




using namespace std;


istream&  LeerCirculo (circulo &c);
double GetArea ( const circulo &c);

int main ()  {

circulo c ;	
double   a ;
int p;	
unsigned posicion;
double y ;
 

y = -1;
posicion = 1;

	
cout<< "ingrese el radio , el valor de ´y´ y el valor de ´x´ apretando enter despues de cada uno" << endl;


	
while (LeerCirculo (c)){
	

	


a= GetArea (c);
 
 	
if (a > y){
	
y = a ;
posicion = p;

	
}	
++p;
cout<< "ingrese el radio , el valor de ´y´ y el valor de ´x´ apretando enter despues de cada uno" << endl;	
}
	

cout<< "la mayor area es" << y << " "<< "y su posicion es " << 
p ;	
	
	
	
} 

istream& LeerCirculo(circulo &c) {
	
     return cin>> c.radio >> c.centro.y >> c.centro.x;
}

double GetArea( const circulo &c) {
	
  return (M_PI) * c.radio * c.radio ;
}




