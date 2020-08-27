// falta :
//1-contructor y destructor
//2-ver como describir area,si con string,mapas,clase u otra 
//3-falta implementar servicios
//4-comprobar si la descripcion del estado con enum se ajusta a las necesidades y implementar setEstado()
#ifndef PORPIEDAD_H
#define PORPIEDAD_H
#include <string>
#include "sistemaDomotico.h"

class propiedad{
private:		
	std::string Id;
	std::string Direccion;	// direccion de la propiedad
	std::string Servicios;	// servicios q recibe(q se encarga de hacer el sistema en esta propiedad)
	enum state{todo_rico,robo,fuga_gas,fuga_agua,reparacion,mal_clima,otro}Estado; 
	Zona; // la propiedad se va a dividir por pisos(p) y cada piso en seccion(s)la zona es una combinacion de piso,seccion(p,s)
	sistemaDomotico Sd;	// la representacion del sistema,esta es la clase con la q ha de interactual la interfaz 
public:
	propiedad();
	~propiedad();
	inline std::string getId()const;
	inline std::string getDireccion()const;
	inline std::string getServicios()const;
	inline getEstado()const;
	inline void setId(const std::string&);
	inline void setDireccion(const std::string&);
	inline void setServicios(const std::string&);
	inline void setEstado();	
};
#endif