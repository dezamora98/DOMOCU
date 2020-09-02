//falta q el equipo lo revise
#ifndef SENSOR_H
#define SENSOR_H
#include "string"
#include "instrumentacion.h"

class sensor:public instrumentacion{
private:			
	std::string VariableMedida;		
public:
	sensor();
	sensor(const std::string& NewId,const std::string& NewZonaId = "null",
			bool NewEstado = true ,const std::string& NewVariableMedida = "null");
	~sensor();			
	inline std::string getVariableMedida()const;			
	inline void setVariableMedida(const std::string&);	
};
#endif