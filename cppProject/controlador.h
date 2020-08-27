//falta:
//1-ver q otros atributos se le pone a la calse
//2-interaccion con sistema domotico
#ifndef CONTROLADOR_H
#define CONTROLADOR_H 
#include <string>

class controlador{
private:	
	std::string Id;
	std::string ZonaId;
	bool Estado;
public:	
	controlador(std::string,std::string,std::string,bool);
	~controlador();	
	inline std::string& getId()const;
	inline std::string& getZonaId()const;
	inline bool getEstado()const;
	inline void setId(const std::string&);
	inline void setZonaId(const std::string&);
	inline void setEstado();
};
#endif