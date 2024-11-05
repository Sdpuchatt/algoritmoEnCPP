using namespace std;

class Rectangulo {
    private:
        int base, altura;
    public:
        Rectangulo(int base, int altura) {
            this->base = base;
            this->altura = altura;
        }
        int area() {
            return base * altura;
        }
        int perimetro() {
            return 2 * (base + altura);
        }
}