//falta la implementacion de constructores y destructores y lo referente a  Zona
#ifndef SENSOR_H
#define SENSOR_H
#include "string"
#include "instrumentacion.h"

class sensor:public instrumentacion{
private:			
	std::string VariableMedida;		
public:
	sensor(const std::string&,const std::string&,const std::string&,bool);
	~sensor();			
	inline std::string getVariableMedida()const;			
	inline void setVariableMedida(const std::string&);	
};
#endif