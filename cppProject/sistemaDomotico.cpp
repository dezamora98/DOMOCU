#include "sistemaDomotico.h"

sistemaDomotico::sistemaDomotico(){}
sistemaDomotico::~sistemaDomotico(){}

//obtener atributos
inline std::string getId()const{return sistemaDomotico.Id;}

inline std::string getVersion()const{return sistemaDomotico.Version;}

//establecer atributos
inline void setId(const std::string& NewId){sistemaDomotico.Id = NewId;}

inline void setVersion(const std::string& NewVersion){sistemaDomotico.Version = NewVersion;}