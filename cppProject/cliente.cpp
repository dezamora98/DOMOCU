#include "cliente.h"

cliente::cliente(){}		
cliente::~cliente(){}
	
//obtener valores de atributos
inline std::string getId()const{return Id;}

inline bool getEstado()const{return Estado;}

//establecer valores de atributos
inline void setId(const std::string& NewId){Id = NewId;}

inline void setEstado(){Estado = !Estado;}