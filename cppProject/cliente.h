//falta:
//1-posibles falta de algunos atributos y metodos
//2-implementar algunos metodos
//3-constructor & destructor
#ifndef CLIENTE_H
#define CLIENTE_H
#include <vector>
#include <string>

class cliente{
private:
	std::string Id;
	bool Estado; // true-> atendido , false-> pendiente(no atendido)
	std::vector<contacto> Co;
	std::vector<propiedad> Po;
public:
	cliente();
	~cliente();
	inline std::string getId()const;
	inline bool getEstado()const;
	inline void setId(const std::string&);
	inline void setEstado();
};
#endif