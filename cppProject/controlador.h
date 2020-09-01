//falta:
//1-ver q otros atributos se le pone a la calse
//2-interaccion con sistema domotico
#ifndef CONTROLADOR_H
#define CONTROLADOR_H 
#include <string>
#include "instrumentacion.h"

class controlador:public instrumentacion{
public:	
	controlador(std::string,std::string,std::string,bool);
	~controlador();							
};
#endif