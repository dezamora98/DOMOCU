# definitr metodos y restos de caracterisitcas para controlador,actuador y sensor
class sistemaDomotico(object):	
	def __init__(self,controlador,actuador,sensor,Id,Version):
		self.controlador.__init__()
		self.actuador.__init__()
		self.sensor.__init__()
		self.Id = Id
		self.Version = Version
	def getId(self):
		return self.Id	
	def getVersion(self):
		return self.Version			
	def setId(self,NewId):
		self.Id = NewId					
	def setVersion(self,NewVersion):
		self.Version = NewVersion		

		