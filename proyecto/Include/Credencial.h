#ifndef CREDENCIAL_H
#include <iostream>
using namespace std;
#include <string>


class Credencial {
private:
    string nombre;
    string codigo;
    string programa;
    string documento;

public:
    void setNombre(string nombre);
    void setCodigo(string codigo);
    void setPrograma(string programa);
    void setDocumento(string documento);
    
    string getNombre();
    string getCodigo();
    string getPrograma();
    string getDocumento();

protected:

};
#endif // CREDENCIAL_H