//falta:
//1-ver si es necesario agregarle atributos se le pone a la calse
//2-interaccion con sistema domotico
#ifndef CONTROLADOR_H
#define CONTROLADOR_H 
#include <string>
#include "instrumentacion.h"

class controlador:public instrumentacion{
public:	
	controlador();
	controlador(const std::string& NewId,const std::string& NewZonaId = 'null',bool NewEstado = true);
	~controlador();							
};
#endif