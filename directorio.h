#ifndef DIRECTORIO_H
#define DIRECTORIO_H
#include <iostream>
using namespace std;

class Directorio
{
	private:
		string nombre;
		Fileabstract *fileabstra;

    public:
        Directorio(string nom);
        ~Directorio(){}
        void listar();
        addFile(Fileabstract* fileabs);

};


#endif