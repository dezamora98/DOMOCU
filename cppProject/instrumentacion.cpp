#include "instrumentacion.h"

//constructor & destructor 
instrumentacion(){}
instrumentacion(){}
~instrumentacion(){}
//getters (metodos para obtener atributos)
inline std::string instrumentacion::getId()const{return instrumentacion.Id;}

inline std::string instrumentacion::getZonaId()const{return instrumentacion.ZonaId;}

inline bool instrumentacion::getEstado()const{return instrumentacion.Estado;}

//setters(metodos para establecer atributos)
inline void instrumentacion::setId(const std::string& NewId){instrumentacion.Id = NewId;}

inline void instrumentacion::setZonaId(const std::string& NewZonaId){instrumentacion.ZonaId = NewZonaId;}

inline void instrumentacion::setEstado(){instrumentacion.Estado = ~instrumentacion.Estado;}




























