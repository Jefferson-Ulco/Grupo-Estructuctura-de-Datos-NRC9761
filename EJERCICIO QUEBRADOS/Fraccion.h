
#ifndef FRACCION_H
#define FRACCION_H

class Fraccion {
  private:
    int numerador;
    int denominador;
  
  public:
  	// CONSTRUCTORES
  	Fraccion();
  	Fraccion(int num, int den);
  	//DESTRUCTOR
	~Fraccion();
	// Get y set
	int getNum(void);
	void setNum(int num);
	int getDeno(void);
	void setDeno(int deno);
    
    Fraccion suma(Fraccion otra);
    Fraccion resta(Fraccion otra);
    Fraccion multiplicacion(Fraccion otra);
    Fraccion division(Fraccion otra);
    void simplificar();
    void imprimir();
    
  private:
    int calcular_mcd(int a, int b);
};

#endif

