using namespace std;

class Articulo{
    private:
        double costoBase;
    public:
        void setCostoBase(double costoBase),
        double getCostoBase();
        double PVPMayor(); // aumenta un %15
        double PVPDetal(); // aumenta un %30

    Articulo(double _costoBase){
        costoBase = _costoBase;
    }

    void setCostoBase(double _costoBase){
        costoBase = _costoBase;
    }
    double getCostoBase(){
        return costoBase;
    }

    double PVPMayor(){
    return (costoBase*1.15);
    }

    double PVPDetal(){
    return (costoBase*1.30);
    } 

};