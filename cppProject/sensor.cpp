#include "sensor.h"

inline sensor::sensor(){		
	sensor.VariableMedida = NewVariableMedida;
}

//obtener atributos
inline std::string sensor::getVariableMedida()const{return sensor.VariableMedida;}

//establecer atributos
inline void sensor::setVariableMedida(const std::string& NewVariableMedida){
	sensor.VariableMedida = NewVariableMedida;
}