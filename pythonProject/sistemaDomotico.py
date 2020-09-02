# falta:
# 1 - definitr metodos y restos de caracterisitcas para controlador,actuador y sensor
# 2 - definir mediante q propiedad da la instrumentacion se va a buscar para eliminarse
# 3 - cambiar la funcion implementada para representar el estado de la instrumentacion(no es practica)
# 4 - definir como implementar la construccion de la instrumentacion
#	  la idea por el momento es construir la clase en el momento q se inserta en el sistema
# 5 - comprobar por si acaso,si las clases se pueden componer al insertarlas y construirlas 
import instrumentacion as ins

class sistemaDomotico():	
	def __init__(self,NewId,NewVersion='1.0.0'):
		self.Id = NewId
		self.Version = NewVersion
		self.ListaControladores = []		
		self.CantidadControladores = 0
		self.ListaActuadores = []
		self.CantidadActuadores = 0
		self.ListaSensores = []
		self.CantidadSensores = 0
	# getters(metodos para obtener atributos)
	def getId(self):
		return self.Id	
	
	def getVersion(self):
		return self.Version		
	
	def getCantidadControladores(self):
		return CantidadControladores
	
	def getCantidadActuadores(self):
		return CantidadActuadores
	
	def getCantidadSensores(self):		
		return CantidadSensores			
	
	def getEstadoControladores(self):
		ControladoresRotos = [[]]
		for i in ListaControladores:
			if ListaControladores[i].getEstado()==False:
				ControladoresRotos[i]=ControladoresRotos[i].append(Lista.Controladores[i].getId())
				ControladoresRotos[i]=ControladoresRotos[i].append(Lista.Controladores[i].getZonaId())
	
	def getEstadoActuadores(self):
		ActuadoresRotos = [[]]
		for i in ListaActuadores:
			if ListaActuadores[i].getEstado()==False:				
				ActuadoresRotos[i] = ActuadoresRotos[i].append(Lista.Actuadores[i].getId())
				ActuadoresRotos[i] = ActuadoresRotos[i].append(Lista.Actuadores[i].getZonaId())
				ActuadoresRotos[i] = ActuadoresRotos[i].append(Lista.Actuadores[i].getVariableManipulada())				
	
	def getEstadoSensores(self):
		SensoresRotos = [[]]
		for i in ListaSensores:
			if ListaSensores[i].getEstado()==False:				
				SensoresRotos[i]=SensoresRotos[i].append(Lista.Sensores[i].getId())
				SensoresRotos[i]=SensoresRotos[i].append(Lista.Sensores[i].getZonaId())
				SensoresRotos[i]=SensoresRotos[i].append(Lista.Sensores[i].getVAriableMedida())
	
	# setters(metodos para establecer atributos)		
	def setId(self,NewId):
		self.Id = NewId					
	
	def setVersion(self,NewVersion):
		self.Version = NewVersion		
	
	def insertControlador(self,NewControladorData): #aqui se reciben los valores valores
		self.ListaControladores.append(ins.controlador()) # aqui valores para inicializar el dispositivo
		self.CantidadControladores += 1
	
	def insertActuador(self,NewActuadorData): # aqui se reciben los valores
		self.ListaActuadores.append(ins.append()) # aqui valores para inicializar el dispositivo
		self.CantidadActuadores += 1
	
	def insertSensor(self,NewSensorData):	# aqui se reciben los valores
		self.ListaSensores.append(ins.sensor())	# aqui se crea 
		self.CantidadSensores += 1				
	
	# aqui hay q recibir 2 y ver q criterio se va a usar para remplazarlos	
	def removeSensor(self):	
		#del(self.ListaSensores[self.CantidadSensores-1])
		self.CantidadActuadores -= 1			
	def removeActuador(self):
		#del(self.ListaActuadores[self.CantidadActuadores-1])
		self.CantidadActuadores -= 1		
	def removeControlador(self):
		#el(self.ListaControladores[self.CantidadControladores-1])
		self.CantidadControladores -= 1	
	def replaceControlador(self):
		
	def replaceActuador(self):
		
	def replaceSensor(self):	