#include "contacto.h"
#include "propiedad.h"
#include "cliente.h"

cliente::cliente(){}		
cliente::~cliente(){}
	
//obtener valores de atributos
inline std::string getId()const{return cliente.Id;}

inline bool getEstado()const{return cliente.Estado;}

//establecer valores de atributos
inline void setId(const std::string& NewId){cliente.Id = NewId;}

inline void setEstado(){cliente.Estado = ~cliente.Estado;}