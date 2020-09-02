//falta: 
//1-por definir la interaccion con la interfaz 
//2-en linea 17 y 18,separar las tareas a ejecutar por el sistema en pasiva y activa?
//las pasivas son aquellas sobre las q el cliente no puede decidir,por ejemplo el control de un tanque de agua
//las activas son aquellas sobre las q el cliente puede decidir,ejemplo la intensidad,encendido o apagado de la iluminacion 
//3-definir si se va a utilizar la clase salida como medio para comunicar al sistema las peticiones del usuario
//4-definir e implementar resto de metodos
//5-ver q tipo va a devolver la funcion de los estados
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
	sistemaDomotico(const std::string&,const std::string& = "1.0.0");
	~sistemaDomotico();
	inline std::string getId()const;
	inline std::string getVersion()const;						
	unsigned int getCantidadControladores()const;	
	unsigned int getCantidadActuadores()const;
	unsigned int getCantidadSensores()const;
	void getEstadoControladores();
	void getEstadoActuadores();
	void getEstadoSensores();	
	inline void setId(const std::string&);
	inline void setVersion(const std::string&);	
	void insertControlador(const controlador&);
	void insertActuador(const actuador&);
	void insertSensor(const sensor&);	
	//aqui hay q recibir 2 y ver q criterio se va a usar para remplazarlos
	void replaceControlador(const controlador&); 
	void replaceActuador(const actuador&); 
	void replaceSensor(const sensor&); 
	void removeControlador(); 
	void removeActuador(); 
	void removeSensor(); 
	//TareaType getTareaActivaPendiente()const;
};
#endif