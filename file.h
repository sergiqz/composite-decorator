#ifndef FILE_H
#define FILE_H
#include <iostream>
#include "fileabstract.h"
using namespace std;

class File: public Fileabstract
{
	private:
		string nombre;

    public:
        File(string nom);
        ~File();
        void listar();

};


#endif