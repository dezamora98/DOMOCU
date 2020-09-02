#include "controlador.h"

controlador::controlador():instrumentacion();

controlador::controlador(const std::string& NewId,const std::string& NewZonaId,bool NewEstado)
						 :instrumentacion(NewId,NewZonaId,NewEstado){}
