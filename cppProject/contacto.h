#ifndef CONTACTO_H
#define CONTACTO_H
#include <string>

class contacto{
private:
	std::string Nombre;
	std::string Apodo;
	std::string Edad;
	std::string Cumple;
	std::string Cel;
	std::string Tel;
	std::string Correo;
public:
	contacto(std::string,std::string,std::string,std::string,std::string,std::string,std::string);
	~contacto();
	//obtener valores de atributos
	inline std::string getNombre()const;
	inline std::string getApodo()const;
	inline std::string getEdad()const;
	inline std::string getCumple()const;
	inline std::string getCel()const;
	inline std::string getTel()const;
	inline std::string getCorreo()const;
	//establecer valores de atributos
	inline void setNombre(const std::string&);
	inline void setApodo(const std::string&);
	inline void setEdad(const std::string&);
	inline void setCumple(const std::string&);
	inline void setCel(const std::string&);
	inline void setTel(const std::string&);
	inline void setCorreo(const std::string&);
};
#endif
