Cliente( string _codigo, string _nombre, string _direccion){
    codigo = _codigo;
    nombre = _nombre;
    direccion = _direccion;
}

string obtenerNombre() const { return nombre; }
string obtenerDireccion() const { return direccion; }