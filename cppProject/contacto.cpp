#include "contacto.h"
using namespace std

contacto::contacto(string NewNombre,string NewApodo,string NewEdad,string NewCumple,string NewCel,string NewTel,string Correo){
	contacto.Nombre = NewNombre;
	contacto.Apodo = NewApodo;
	contacto.Edad = NewEdad;
	contacto.Cumple = NewCumple;
	contacto.Cel = NewCel;
	contacto.Tel = NewTel;
	contacto.Correo = NewCorreo;
}

// obtener valores de atributos
inline std::string contacto::getNombre()const{return contacto.Nombre;}

inline std::string contacto::getApodo()const{return contacto.Apodo;}

inline std::string contacto::getEdad()const{return contacto.Edad;}

inline std::string contacto::getCumple()const{return contacto.Cumple;}

inline std::string contacto::getCel()const{return contacto.Cel;}

inline std::string contacto::getTel()const{return contacto.Tel;}
	
inline std::string contacto::getCorreo()const{return contacto.Apodo;}

//establecer valores de atributos
inline void contacto::setNombre(const std::string& NewNombre){contacto.Nombre = NewNombre;}

inline void contacto::setApodo(const std::string& NewApodo){contacto.Apodo = NewApodo;}

inline void contacto::setEdad(const std::string& NewEdad){contacto.Edad = NewEdad;}

inline void contacto::setCumple(const std::string& NewCumple){contacto.Cumple = NewCumple;}

inline void contacto::setCel(const std::string& NewCel){contacto.Cel = NewCel;}

inline void contacto::setTel(const std::string& NewTel){contacto.Tel = NewTel;}

inline void contacto::setCorreo(const std::string& NewCorreo){contacto.Correo = NewCorreo;}