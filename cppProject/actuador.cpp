#include "actuador.h"

actuador::actuador(std::string NewId,std::string NewZonaId,std::string NewVariableManipulada,bool NewEstado = true){
actuador.Id = NewId;
actuador.ZonaId = NewZonaId;
actuador.VariableManipulada	 = NewVariableManipulada;
actuador.Estado = NewEstado;
}

//obtener atributos
inline std::string actuador::getId()const{return sensor.Id;}

inline std::string actuador::getZonaId()const{return sensor.Zona;}

inline std::string actuador::getVariableManipulada()const{return sensor.VariableManipulada;}

inline bool actuador::getEstado()const{return sensor.Estado;}

//establecer atributos
inline void actuador::setId(const std::string& NewId){sensor.Id = NewId;}

inline void actuador::setZonaId(const std::string& NewZona){sensor.Zona = NewZona;}

inline void actuador::setVariableManipulada(const std::string& NewVariableManipulada){
	sensor.VariableManipulada = NewVariableManipulada;
}

inline void actuador::setEstado(){sensor.Estado = ~sensor.Estado;}
