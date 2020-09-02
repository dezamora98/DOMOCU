class contacto():	
	def __init__(self,NewNombre,NewApodo='null',NewEdad='null',
				 NewCumple='null',NewCel='null',NewTel='null',NewCorreo='null'):		
		self.Nombre = NewNombre
		self.Apodo = NewApodo
		self.Edad = NewEdad
		self.Cumple = NewCumple
		self.Cel = NewCel
		self.Tel = NewTel
		self.Correo = NewCorreo		
	# getters(metodos para obtener atributos)	
	def getNombre(self):
		return self.Nombre
	def getApodo(self):
		return self.Apodo
	def getEdad(self):
		return self.Edad
	def getCumple(self):
		return self.Cumple
	def getCel(self):
		return self.Cel
	def getTel(self):
		return self.Tel
	def getCorreo(self):
		return self.Correo		
	# setters(metodos para establecer atributos)
	def setNombre(self,NewNombre):
		self.Nombre = NewNombre
	def setApodo(self,NewApodo):
		self.Apodo = NewApodo
	def setEdad(self,NewEdad):
		self.Edad = NewEdad
	def setCumple(self,NewCumple):
		self.Cumple = NewCumple
	def setCel(self,NewCel):
		self.Cel = NewCel
	def setTel(self,NewTel):
		self.Tel = NewTel
	def setCorreo(self,NewCorreo):
		self.Correo = NewCorreo