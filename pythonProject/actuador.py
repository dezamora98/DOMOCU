class actuador():
	def __init__(self,Id,ZonaId,VariableManipulada,Estado=True):		
		self.Id = Id
		self.ZonaId = ZonaId
		self.VariableManipulada = VariableManipulada
		self.Estado = Estado		
	#obtener atributos
	def getId(self):
		return self.Id		
	def getZonaId(self):
		return self.ZonaId		
	def getVariableManipulada(self):
		return self.VariableManipulada		
	def getEstado(self):
		return self.Estado				
	#establecer atributos	
	def setId(self,NewId):
		self.Id = NewId
	def setZonaId(self,NewZonaId):
		self.ZonaId = NewZonaId
	def setVariableManipulada(self,NewVariableManipulada):
		self.VariableManipulada = NewVariableManipulada
	def setEstado(self):
		self.Estado = ~self.Estado
		