class controlador(object):
	"""docstring for controlador"""
	def __init__(self,Id,ZonaId,Estado):
		self.Id = Id
		self.ZonaId = ZonaId
		self.Estado = Estado		
	def getId(self):
		return self.Id		
	def getZonaId(self):
		return self.ZonaId		
	def getEstado(self):
		return self.Estado		
	def setId(self,NewId):
		self.Id = NewId			
	def setZonaId(self,NewZonaId):
		self.ZonaId = NewZonaId					
	def setEstado(self):
		self.Estado = ~self.NewEstado					