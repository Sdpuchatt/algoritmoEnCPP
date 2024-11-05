//Se conoce de una persona el nombre, el día, mes y año de nacimiento, escriba un programa que
//lea la fecha de hoy, como día, mes y año e imprima el nombre de la persona y su edad.

using namespace std;

class Persona
{
    private:
        string nombre;
        int diaNacimiento;
        int mesNacimiento;
        int anioNacimiento;
        int diaHoy;
        int mesHoy;
        int anioHoy;
    public:
        Persona(string _nombre, int _diaNacimiento, int _mesNacimiento, int _anioNacimiento, int _diaHoy, int _mesHoy, int _anioHoy);
        void setNombre(string _nombre);
        string getNombre();
        void setDiaNacimiento(int _diaNacimiento);
        int getDiaNacimiento();
        void setMesNacimiento(int _mesNacimiento);
        int getMesNacimiento();
        void setAnioNacimiento(int _anioNacimiento);
        int getAnioNacimiento();
        void setDiaHoy(int _diaHoy);
        int getDiaHoy();
        void setMesHoy(int _mesHoy);
        int getMesHoy();
        void setAnioHoy(int _anioHoy);
        int getAnioHoy();
        int calcularEdad();

    Persona(string _nombre, int _diaNacimiento, int _mesNacimiento, int _anioNacimiento, int _diaHoy, int _mesHoy, int _anioHoy) {
        this->nombre = _nombre;
        this->diaNacimiento = _diaNacimiento;
        this->mesNacimiento = _mesNacimiento;
        this->anioNacimiento = _anioNacimiento;
        this->diaHoy = _diaHoy;
        this->mesHoy = _mesHoy;
        this->anioHoy = _anioHoy;
    }
    void setNombre(string _nombre) {
        this->nombre = _nombre;
    }
    string getNombre() {
        return this->nombre;
    }    
    void setDiaNacimiento(int _diaNacimiento) {
        this->diaNacimiento = _diaNacimiento;
    }
    int getDiaNacimiento() {
        return this->diaNacimiento;
    }
    void setMesNacimiento(int _mesNacimiento) {
        this->mesNacimiento = _mesNacimiento;
    }
    int getMesNacimiento() {
        return this->mesNacimiento;
    }
    void setAnioNacimiento(int _anioNacimiento) {
        this->anioNacimiento = _anioNacimiento;
    }
    int getAnioNacimiento() {
        return this->anioNacimiento;
    }
    void setDiaHoy(int _diaHoy) {
        this->diaHoy = _diaHoy;
    }
    int getDiaHoy() {
        return this->diaHoy;
    }
    void setMesHoy(int _mesHoy) {
        this->mesHoy = _mesHoy;
    }
    int getMesHoy() {
        return this->mesHoy;
    }
    void setAnioHoy(int _anioHoy) {
        this->anioHoy = _anioHoy;
    }
    int getAnioHoy() {
        return this->anioHoy;
    }
    int calcularEdad() {
        return this->anioHoy - this->anioNacimiento;
    }
};