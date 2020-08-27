#include "propiedad.h"
using namespace std

propiedad::propiedad(){
}

//obtener atributos
inline std::string getId()const{return propiedad.Id;}

inline std::string getDireccion()const{return propiedad.Direccion;}

inline state getEstado()const{return propiedad.Estado;}

//establecer atributos
void setId(const std::string& NewId){propiedad.Id = NewId;}

void setDireccion(const std::string& NewDireccion){propiedad.Direccion = NewDireccion;}

//void setEstado(){}	
