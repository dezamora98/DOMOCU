# falta:
# 1 - definitr metodos y restos de caracterisitcas para controlador,actuador y sensor
# 2 - definir mediante q propiedad da la instrumentacion se va a buscar para eliminarse
# 3 - cambiar la funcion implementada para representar el estado de la instrumentacion(no es practica)
# 4 - definir como implementar la construccion de la instrumentacion
#	  la idea por el momento es construir la clase en el momento q se inserta en el sistema
# 5 - comprobar por si acaso,si las clases se pueden componer al insertarlas y construirlas 

#import instrumentacion 
class sistemaDomotico(object):	
	def __init__(self,Id='none',Version='none'):
		self.Id = Id
		self.Version = Version
		self.ListaControladores = []
		self.NumeroControladores = len(ListaControladores)
		self.ListaActuadores = []
		self.NumeroActuadores = len(ListaActuadores)
		self.ListaSensores = []
		self.NumeroSensores = len(ListaSensores)		
	# getters(metodos para obtener atributos)
	def getId(self):
		return self.Id	
	def getVersion(self):
		return self.Version		
	def getNumeroControladores(self):
		return NumeroControladores
	def getNumeroActuadores(self):
		return NumeroActuadores
	def getNumeroSensores(self):		
		return NumeroSensores			
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
	def insertControlador(self,NewControlador):					
		self.ListaControladores.append(NewControlador)
		self.NumeroControladores = self.NumeroControladores+1
	def removeControlador(self):					
		del(self.ListaControladores[self.NumeroControladores-1])
		self.NumeroControladores = self.NumeroControladores-1	
	def insertActuador(self,NewActuador):					
		self.ListaActuadores.append(NewActuador)
		self.NumeroActuadores = self.NumeroActuadores+1
	def removeActuador(self):			
		del(self.ListaActuadores[self.NumeroActuadores-1])
		self.NumeroActuadores = self.NumeroActuadores-1		
	def insertSensor(self,NewSensor):					
		self.ListaSensores.append(NewSensor)
		self.NumeroSensores = self.NumeroSensores+1				
	def removeSensor(self):			
		del(self.ListaSensores[self.NumeroSensores-1])
		self.NumeroActuadores = self.NumeroActuadores-1			