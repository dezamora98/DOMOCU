#definir como implementar ZonaId
class instrumentacion():
	"""superclase de las clases sensor,actuador y controlador"""
	def __init__(self,NewId = 'null',NewZonaId = 'null',NewVariableAsociada = 'null',NewEstado = True):		
		self.Id = NewId
		self.ZonaId = NewZonaId		
		self.Estado = NewEstado		
	# getters(metodos para obtener atributos)
	def getId(self):
		return self.Id		
	def getZonaId(self):
		return self.ZonaId	
	def getVariableManipulada(self):
		return self.VariableManipulada	
	def getEstado(self):	
		return self.Estado		
	# setters(metodos para establecer atributos)
	def setId(self,NewId):		
		self.Id = NewId
	def setZonaId(self,NewZonaId):		
		self.ZonaId = NewZonaId
	def setVariableAsociado(self,NewVariableAsociado):		
		self.VariableAsociado = NewVariableAsociado
	def setEstado(self):		
		self.Estado = ~self.Estado

class sensor(instrumentacion):
	"""exactamente igual q la clase instrumentacion,se le agrega un atributo 
	variable medida q representa la variable q se mide"""
	def __init__(self,Id,ZonaId,Estado,NewVariableMedida):
		super().__init__(Id,ZonaId,Estado)
		self.VariableMedida = NewVariableMedida
	def getVariableMedida(self):
		return self.VariableMedida
	def setVariableMedida(self,NewVariableMedida):
		self.VariableMedida = NewVariableMedida			

class actuador(instrumentacion):
	"""exactamente igual q la clase instrumentacion,se le agrega un atributo 
	variable manipulada representa la variable sobre la q se actua"""
	def __init__(self,self,Id,ZonaId,Estado,NewVariableManipulada):
		super().__init__(Id,ZonaId,Estado)
		self.VariableManipulada = NewVariableManipulada
	def getVariableManipulada(self):
		return self.VariableManipulada
	def setVariableManipulada(self,NewVariableManipulada):
		self.VariableManipulada = NewVariableManipulada							

class controlador(instrumentacion):
		"""clase para representar el controlador"""
		pass				