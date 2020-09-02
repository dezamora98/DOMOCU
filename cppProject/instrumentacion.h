//falta :
//q la revisen el resto del equipo para ve si se ajusta a las necesidades
//decidir como implementar la zona
#ifndef INSTRUMENTACION_H
#define INSTRUMENTACION_H
#include "string"

class instrumentacion{
private:	
	std::string Id;
	std::string ZonaId;	
	bool Estado;
public:
	instrumentacion();
	instrumentacion(const std::string& NewId = 'null',const std::string& NewZonaId = 'null',bool NewEstado = true);
	instrumentacion(std::string,std::string,std::string,bool);
	virtual ~instrumentacion();	
	inline std::string getId()const;
	inline std::string getZonaId()const;	
	inline bool getEstado()const;
	inline void setId(const std::string&);
	inline void setZonaId(const std::string&);	
	inline void setEstado();
};
#endif