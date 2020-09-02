#include "instrumentacion.h"

//constructor & destructor 
instrumentacion():{
	Id() = 'none';
	ZonaId() = 'none';
	Estado() = true;
}
instrumentacion(const std::string& NewId,const std::string& NewZonaId,bool NewEstado){
	Id = NewId;
	ZonaId = NewZonaId;
	Estado = NewEstado;
}

//getters (metodos para obtener atributos)
inline std::string instrumentacion::getId()const{return Id;}

inline std::string instrumentacion::getZonaId()const{return ZonaId;}

inline bool instrumentacion::getEstado()const{return Estado;}

//setters(metodos para establecer atributos)
inline void instrumentacion::setId(const std::string& NewId){Id = NewId;}

inline void instrumentacion::setZonaId(const std::string& NewZonaId){ZonaId = NewZonaId;}

inline void instrumentacion::setEstado(){Estado = !Estado;}