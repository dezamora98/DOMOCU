#include "contacto.h"

contacto::contacto(const std::string& NewNombre,const std::string& NewApodo,const std::string& NewEdad,
				   const std::string& NewCumple,const std::string& NewCel,const std::string& NewTel,const std::string& Correo){
	Nombre = NewNombre;
	Apodo = NewApodo;
	Edad = NewEdad;
	Cumple = NewCumple;
	Cel = NewCel;
	Tel = NewTel;
	Correo = NewCorreo;
}

// obtener valores de atributos
inline std::string contacto::getNombre()const{return Nombre;}

inline std::string contacto::getApodo()const{return Apodo;}

inline std::string contacto::getEdad()const{return Edad;}

inline std::string contacto::getCumple()const{return Cumple;}

inline std::string contacto::getCel()const{return Cel;}

inline std::string contacto::getTel()const{return Tel;}
	
inline std::string contacto::getCorreo()const{return Apodo;}

//establecer valores de atributos
inline void contacto::setNombre(const std::string& NewNombre){Nombre = NewNombre;}

inline void contacto::setApodo(const std::string& NewApodo){Apodo = NewApodo;}

inline void contacto::setEdad(const std::string& NewEdad){Edad = NewEdad;}

inline void contacto::setCumple(const std::string& NewCumple){Cumple = NewCumple;}

inline void contacto::setCel(const std::string& NewCel){Cel = NewCel;}

inline void contacto::setTel(const std::string& NewTel){Tel = NewTel;}

inline void contacto::setCorreo(const std::string& NewCorreo){Correo = NewCorreo;}