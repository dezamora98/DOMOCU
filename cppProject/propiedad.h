// falta :
//1-contructor y destructor
//2-ver como describir area,si con string,mapas,clase u otra 
//3-falta implementar servicios
//4-comprobar si la descripcion del estado con enum se ajusta a las necesidades y implementar setEstado()
//5-ver q criterio de busqueda se emplea para el remplazo y eliminacion de servicios y estados
#ifndef PORPIEDAD_H
#define PORPIEDAD_H
#include <string>
#include "sistemaDomotico.h"

class propiedad{
private:		
	std::string Id;
	std::string Direccion;
	std::vector<std::string> Servicios;	// servicios q recibe(q se encarga de hacer el sistema en esta propiedad)
	std::vector<std::string> Estado {"todo rico","robo","fuga de gas","fuga de agua","reparacion","mal clima","otro"}; 
	Zona; // la propiedad se va a dividir por pisos(p) y cada piso en seccion(s)la zona es una combinacion de piso,seccion(p,s)
	sistemaDomotico Sd;	// la representacion del sistema,esta es la clase con la q ha de interactual la interfaz 
public:
	propiedad(const std::string&,const std::string&,const std::vector<std::string>&,const std::vector<std::string>&);
	~propiedad();
	inline std::string getId()const;
	inline std::string getDireccion()const;
	inline std::vector<std::string> getServicios()const;
	inline getEstado()const;
	inline void setId(const std::string&);
	inline void setDireccion(const std::string&);
	inline void setServicios(const std::string&);	
	inline void setEstado(const std::string&);			
	//ver criterio de busqueda para los siguientes metodos
	inline void replaceServicios() 
	inline void replaceEstado() 
	inline void removeServicios() 
	inline void removeEstado() 	
};
#endif