# falta:
#1-decidir como implementar el estado ('todo rico','robo','mal clima','fuga agua','fuga gas')
#2-definir como incorporar sistemaDomotico
#3-definir mediante q estructura de datos implementar las zonas de la casa
#4-determinar como se va a inicializar el sistema domotico
import sistemaDomotico.py as sd

class propiedad():
	"""docstring for propiedad"""
	def __init__(self,NewId = 'null',NewDireccion = 'null',NewServicios = [],
				 NewEstado = ('todo rico','robo','mal clima','fuga de agua','fuga de gas')):
	self.Id = NewId		
	self.Direccion = NewDireccion		
	self.Servicios = NewServicios		
	self.Estado = NewEstado
	self.SistemaDomotico = sd.sistemaDomotico()
	def getId(self):
		return self.Id
	def getDireccion(self):
		return self.Direccion
	def getServicios(self):
		return self.Servicios
	def setId(self,NewId):
		self.Id = NewId
	def setDireccion(self,NewDireccion):
		self.Direccion = NewDireccion
	def setServicios(self,NewServicios):
		self.Servicios = NewServicios
	#Zona: la propiedad se va a dividir por pisos(p) y cada piso en seccion(s)la zona es una combinacion de piso,seccion(p,s)
	#sistemaDomotico Sd;	// la representacion del sistema,esta es la clase con la q ha de interactual la interfaz 

	def getEstado():
	def setEstado():			
	#ver criterio de busqueda para los siguientes metodos
	def replaceServicios(): 
	def replaceEstado(): 
	def removeServicios(): 
	def removeEstado(): 			