#decidir como implementar el estado ('todo rico','robo','mal clima','fuga agua','fuga gas')
#definir como incorporar sistemaDomotico
#definir mediante q estructura de datos implementar las zonas de la casa

class propiedad(object):
	"""docstring for propiedad"""
	def __init__(self,NewId = 'none',NewDireccion = 'none',NewServicios = [],
				 NewEstado = ('todo rico','robo','mal clima','fuga de agua','fuga de gas')):
	self.Id = NewId		
	self.Direccion = NewDireccion		
	self.Servicios = NewServicios		
	Estado = NewEstado[1]
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