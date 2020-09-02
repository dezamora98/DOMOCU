#include "actuador.h"

actuador::actuador():instrumentacion(){VariableManipulada = NewVariableManipulada;}

actuador::actuador(const std::string& NewId,const std::string& NewZonaId,bool NewEstado,
				   const std::string& NewVariableManipulada):instrumentacion(NewId,NewZonaId,NewEstado){
	VariableManipulada = NewVariableManipulada;
}

//obtener atributos
inline std::string actuador::getVariableManipulada()const{return sensor.VariableManipulada;}

//establecer atributos
inline void actuador::setVariableManipulada(const std::string& NewVariableManipulada){
	VariableManipulada = NewVariableManipulada;
}