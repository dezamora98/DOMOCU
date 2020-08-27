#ifndef ACTUADOR_H
#define ACTUADOR_H
#include <string>

class actuador{
private:
	std::string Id;	
	std::string ZonaId;
	std::string VariableManipulada;
	bool Estado;
public:
	actuador(std::string,std::string,std::string,bool);
	~actuador();	
	inline std::string& getId()const;
	inline std::string& getZonaId()const;
	inline std::string& getVariableManipulada()const;
	inline bool getEstado()const;
	inline void setId(const std::string&);
	inline void setZonaId(const std::string&);
	inline void setVariableManipulada(const std::string&);
	inline void setEstado();
};
#endif