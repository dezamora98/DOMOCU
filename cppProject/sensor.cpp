#include "sensor.h"

inline sensor::sensor(std::string NewId,std::string NewZonaId,std::string NewVariableMedida,bool NewEstado=true){
	sensor.Id = builId;
	sensor.ZonaId = NewZonaId;
	sensor.VariableMedida = NewVariableMedida;
	sensor.Estado = NewEstado;
}

//obtener atributos
inline std::string sensor::getId()const{return sensor.Id;}

inline std::string sensor::getZonaId()const{return sensor.ZonaId;}

inline std::string sensor::getVariableMedida()const{return sensor.VariableMedida;}

inline bool sensor::getEstado()const{return sensor.Estado;}

//establecer atributos
inline void sensor::setId(const std::string& NewId){sensor.Id = NewId;}

inline void sensor::setZonaId(const std::string& NewZonaId){sensor.ZonaId = NewZonaId;}

inline void sensor::setVariableMedida(const std::string& NewVariableMedida){sensor.VariableMedida = NewVariableMedida;}

inline void sensor::setEstado(){sensor.Estado = ~sensor.Estado;}