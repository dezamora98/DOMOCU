#ifndef ACTUADOR_H
#define ACTUADOR_H
#include <string>
#include "instrumentacion.h"

class actuador{
private:		
	std::string VariableManipulada;	
public:
	actuador(std::string,std::string,std::string,bool);
	~actuador();			
	inline std::string& getVariableManipulada()const;			
	inline void setVariableManipulada(const std::string&);	
};
#endif