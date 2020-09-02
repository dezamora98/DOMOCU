#include "sistemaDomotico.h"

sistemaDomotico(const std::string& NewId,const std::string& NewVersion){
	Id = NewId;
	Version = NewVersion;
}

//obtener atributos
inline std::string getId()const{return Id;}

inline std::string getVersion()const{return Version;}

unsigned int sistemaDomotico::getCantidadControladores()const{return Co.size();}	

unsigned int sistemaDomotico::getCantidadActuadores()const{return Ac.size();}

unsigned int sistemaDomotico::getCantidadSensores()const{return Se.size();}

/*por ver*/ sistemaDomotico::getEstadoControladores(){}

/*por ver*/ sistemaDomotico::getEstadoActuadores(){}

/*por ver*/ sistemaDomotico::getEstadoSensores(){}

//establecer atributos
inline void setId(const std::string& NewId){Id = NewId;}

inline void setVersion(const std::string& NewVersion){Version = NewVersion;}	

void sistemaDomotico::insertControlador(const controlador& NewControlador){Co.push_back(NewControlador);}

void sistemaDomotico::insertActuador(const actuador& NewActuador){Ac.push_back(NewActuador);}

void sistemaDomotico::insertSensor(const sensor& NewSensor){Se.push_back(NewSensor);}			

void replaceControlador(const controlador& NewCo);

void replaceActuador(const actuador& NewAc);

void replaceSensor(const sensor& NewSe);		

void sistemaDomotico::removeControlador(){}

void sistemaDomotico::removeActuador(){}

void sistemaDomotico::removeSensor(){}