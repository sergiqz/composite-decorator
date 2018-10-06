#ifndef DIRECTORIO_H
#define DIRECTORIO_H
#include <iostream>
#include "fileabstract.h"
#include <vector>
using namespace std;

class Directorio
{
	private:
		string nombre;
		vector<Fileabstract *> files;

    public:
        Directorio(string nom);
        ~Directorio(){}
        void listar();
        add(Fileabstract* fileabs);

};


#endif