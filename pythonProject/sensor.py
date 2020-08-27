class sensor():
	def __init__(self,Id,ZonaId,VariableMedida,Estado=True):		
		self.Id = Id
		self.ZonaId = ZonaId
		self.VariableMedida = VariableMedida
		self.Estado = Estado		
	#obtener atributos
	def getId(self):
		return self.Id		
	def getZonaId(self):
		return self.ZonaId		
	def getVariableMedida(self):
		return self.VariableMedida		
	def getEstado(self):
		return self.Estado				
	#establecer atributos	
	def setId(self,NewId):
		self.Id = NewId
	def setZonaId(self,NewZonaId):
		self.ZonaId = NewZonaId
	def setVariableMedida(self,NewVariableMedida):
		self.VariableMedida = NewVariableMedida
	def setEstado(self):
		self.Estado = ~self.Estado
		