
/***********************************************************************
Universidad de las Fuerzas Armadas ESPE
AUTORES: Alejandro Cuadrado, Milena Maldonado, Jefferson Ulco
FECHA DE CREACIÓN: 11/05/2023
FECHA DE MODIFICACIÓN: 11/05/2023
Enunciado
 ***********************************************************************/


#if !defined(__Class_Diagram_1_Fraccion_h)
#define __Class_Diagram_1_Fraccion_h

class Fraccion
{
public:
	Fraccion();
   float getNumerador(void);
   void setNumerador(float newNumerador);
   float getDenominador(void);
   void setDenominador(float newDenominador);
   Fraccion(float num, float den);
   float calculo(Fraccion obj1, Fraccion obj2);
   
   ~Fraccion();

protected:
private:
   float numerador;
   float denominador;
};

#endif
