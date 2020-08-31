#falta:
# 1 - ver como agregar e implementar la clase contacto y la clase propiedad
# 2 - la clase cliente no se implemento como una persona puede q una persona tenga varias casas o 
#     q varias personas vivan en la misma casa y el sistema tiene q ajustarse 
class cliente():	
	""" clase para representar una entidad cliente"""
	def __init__(self, arg):
		super(cliente, self).__init__()
		self.arg = arg
		