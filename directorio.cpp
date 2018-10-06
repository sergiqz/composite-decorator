#include "directorio.h"


Directorio::Directorio(string nom){
	nombre=nom;

}

void Directorio::listar(){
	

}



void Directorio::add(Fileabstract* fileabs){
	files.push_back(fileabs);


}
