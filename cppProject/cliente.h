//falta:
//1-posibles falta de algunos atributos y metodos
//2-implementar algunos metodos
//3-constructor & destructor
//4-ver lo de como llevar la hora y la fecha
//5-ver si como incluyo ficheros q ya incluyen a <string no es necesario incluirla>
#ifndef CLIENTE_H
#define CLIENTE_H
#include <vector>
#include <string>
#include "contacto.h"
#include "propiedad.h"

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
	inline void insertContacto();
	inline void insertPropiedad();		
	inline void removeContacto();
	inline void removePropiedad();		
};
#endif