#include "sensor.h"

//constructor & destructor
sensor::sensor():instrumentacion(){VariableMedida = "null";}

sensor::sensor(const std::string& NewId,const std::string& NewZonaId,bool NewEstado,
			   const std::string& NewVariableMedida):instrumentacion(NewId,NewZonaId,NewEstado){
	VariableMedida = NewVariableMedida;
}

//obtener atributos
inline std::string sensor::getVariableMedida()const{return VariableMedida;}

//establecer atributos
inline void sensor::setVariableMedida(const std::string& NewVariableMedida){ VariableMedida = NewVariableMedida;}