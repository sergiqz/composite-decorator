#ifndef FILE_H
#define FILE_H
#include <iostream>
#include "fileabstract.h"
using namespace std;

class file: public Fileabstract
{
	private:
		string nombre;

    public:
        file(string nom);
        ~file();
        void listar();

};


#endif
