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
	instrumentacion(const instrumentacion&);
	instrumentacion(std::string,std::string,std::string,bool);
	~instrumentacion();	
	inline std::string getId()const;
	inline std::string getZonaId()const;	
	inline bool getEstado()const;
	inline void setId(const std::string&);
	inline void setZonaId(const std::string&);	
	inline void setEstado();
};
#endif