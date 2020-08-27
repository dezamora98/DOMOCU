#include "controlador.h"

controlador::controlador(std::string NewId,std::string NewZonaId,bool NewEstado = true){
controlador.Id = NewId;
controlador.ZonaId = NewZonaId;
controlador.Estado = NewEstado;
}

// obtener atributos
inline std::string& controlador::getId()const{return controlador.Id;}

inline std::string& controlador::getZonaId()const{return controlador.ZonaId;}

inline bool controlador::getEstado()const{return controlador.Estado;}

//establecer atributos
inline void controlador::setId(const std::string& NewId){controlador.Id = controlador.NewId;}

inline void controlador::setZonaId(const std::string& NewZonaId){controlador.ZonaId = controlador.NewZonaId;}

inline void controlador::setEstado(){controlador.Estado = ~controlador.Estado;}