//falta: 
//1-por definir la interaccion con la interfaz 
//2-en linea 17 y 18,separar las tareas a ejecutar por el sistema en pasiva y activa?
//las pasivas son aquellas sobre las q el cliente no puede decidir,por ejemplo el control de un tanque de agua
//las activas son aquellas sobre las q el cliente puede decidir,ejemplo la intensidad,encendido o apagado de la iluminacion 
//3-definir si se va a utilizar la clase salida como medio para comunicar al sistema las peticiones del usuario
//4-definir e implementar resto de metodos
#ifndef sistemaDomotico_H
#define sistemaDomotico_H 
#include <string>
#include <vector>
#include "controlador.h"
#include "actuador.h"
#include "sensor.h"

class sistemaDomotico{
private:
	std::string Id;
	std::string Version;				
	//tareaPasiva Tp;
	//tareaActiva Ta;
	std::vector<controlador> Co;	
	std::vector<actuador> Ac;
	std::vector<sensor> Se;
public:
	sistemaDomotico(std::string,std::string);
	~sistemaDomotico();
	inline std::string getId()const;
	inline std::string getVersion()const;				
	//TareaType getTarea()const;
	//getControlador()const;	
	//getActuador()const;
	//getSensor()const;
	inline void setId(const std::string&);
	inline void setVersion(const std::string&);
	//setSalida();
	//setTarea();
	//setControlador();
	//setActuador();
	//setSensor();			
};
#endif