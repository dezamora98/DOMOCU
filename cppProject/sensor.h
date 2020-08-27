//falta la implementacion de constructores y destructores y lo referente a  Zona
#ifndef SENSOR_H
#define SENSOR_H
#include "string"

class sensor{
private:	
	std::string Id;
	std::string ZonaId;
	std::string VariableMedida;	
	bool Estado;
public:
	sensor(std::string,std::string,std::string,bool);
	~sensor();	
	inline std::string getId()const;
	inline std::string getZonaId()const;
	inline std::string getVariableMedida()const;
	inline bool getEstado()const;
	inline void setId(const std::string&);
	inline void setZonaId(const std::string&);
	inline void setVariableMedida(const std::string&);
	inline void setEstado();
};
#endif