#falta:
# 1 - ver como agregar e implementar la clase contacto y la clase propiedad
# 2 - la clase cliente no se implemento como una persona puede q una persona tenga varias casas o 
#     q varias personas vivan en la misma casa y el sistema tiene q ajustarse 
import contacto.py as co
import propiedad.py as pd

class cliente():	
	""" clase para representar una entidad cliente"""
	def __init__(self):		
		self.Contacto = []
		self.CantidadContacto = 0
		self.Propiedad = []	
		self.Propiedad = 0
	def insertContacto(self):
		Contacto.append(co.contacto())
		CantidadContacto += CantidadContacto
	def insertPropiedad(self):
		Propiedad.append(pd.propiedad())
	# criterio de seleccion	
	def removeContacto(self):			
	def removePropiedad(self):					