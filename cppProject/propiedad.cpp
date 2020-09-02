#include "propiedad.h"
using namespace std

propiedad::propiedad(const std::string&,const std::string&,const std::vector<std::string>&,const std::vector<std::string>&);

//obtener atributos
inline std::string propiedad::getId()const{return Id;}

inline std::string propiedad::getDireccion()const{return Direccion;}

inline state propiedad::getEstado()const{return Estado;}

//establecer atributos
void propiedad::setId(const std::string& NewId){Id = NewId;}

void propiedad::setDireccion(const std::string& NewDireccion){Direccion = NewDireccion;}

inline std::vector<std::string> getServicios()const;

inline void propiedad::setServicios(const std::string&);	

inline void propiedad::setEstado(const std::string&);			

//ver criterio de busqueda para los siguientes metodos
inline void propiedad::replaceServicios() 

inline void propiedad::replaceEstado() 

inline void propiedad::removeServicios() 

inline void propiedad::removeEstado() 	
