#include "file.h"
file::file(string nom){
	nombre=nom;
}
~file::file(){

}
void file::listar(){
    cout<<nombre<<'\t';
}




