using namespace std;

class Alumno{
    private:
        string cedula;
        string nombre;
        double nota1;
        double nota2;
        double nota3;

    public:
        Alumno(string _cedula, string _nombre, double _nota1, double _nota2, double _nota3);
        void setCedula(string _cedula);
        void setNombre(string _nombre);
        string getCedula();
        string getNombre();
        void setNota1(double _nota1);
        void setNota2(double _nota2);
        void setNota3(double _nota3);
        double getNota1();
        double getNota2();
        double getNota3();
        double notaFinal();
        string aproRepro();

    Alumno( string _cedula, string _nombre, double _nota1, double _nota2, double _nota3){
        cedula = _cedula;
        nombre = _nombre;
        nota1 = _nota1;
        nota2 = _nota2;
        nota3 = _nota3;
    }
    void setCedula(string _cedula){
        cedula = _cedula;
    }
    void setNombre(string _nombre){
        nombre = _nombre;
    }
    void setNota1(double _nota1){
        nota1 = _nota1;
    }
    void setNota2(double _nota2){
        nota2 = _nota2;
    }
    void setNota3(double _nota3){
        nota3 = _nota3;
    }
    string getCedula(){
        return cedula;
    }
    string getNombre(){
        return nombre;
    }
    double getNota1(){
        return nota1;
    }
    double getNota2(){
        return nota2;
    }
    double getNota3(){
        return nota3;
    }
    double notaFinal(){
        return (nota1+nota2+nota3)/3;
    }
    string aproRepro(){
        if(notaFinal() >= 48){
            return "Aprobado";
        }else{
            return "Reprobado";
        }
    }
    
}