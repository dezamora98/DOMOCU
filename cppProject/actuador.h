//falta q el equipo lo revise
#ifndef ACTUADOR_H
#define ACTUADOR_H
#include <string>
#include "instrumentacion.h"

class actuador{
private:		
	std::string VariableManipulada;	
public:
	actuador();
	actuador(const std::string& NewId,const std::string& NewZonaId = "null"
			  bool NewEstado = true ,const std::string& NewVariableManipulada = "null");
	inline std::string& getVariableManipulada()const;			
	inline void setVariableManipulada(const std::string&);	
};
#endif