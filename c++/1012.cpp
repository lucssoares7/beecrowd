#include <iostream>
#include <cmath>

#define pi 3.14159

using namespace std;

class Triangulo{
	private:
		double comprimento, altura;
	
	public:
		Triangulo();
		void setTriangulo(double c, double a);
		double areaTriangulo();		
};

Triangulo::Triangulo(){
	comprimento = 0;
	altura = 0;
}

void Triangulo::setTriangulo(double c, double a){
	comprimento = c;
	altura = a;
}
double Triangulo::areaTriangulo(){
	return comprimento*altura/2;
}

class Circulo{
	private:
		double raio;
	public:
		Circulo();
		void setCirculo(double r);
		double areaCirculo();
};

Circulo::Circulo(){
	raio = 0;
}

void Circulo::setCirculo(double r){
	raio = r;
}

double Circulo::areaCirculo(){
	return pi*pow(raio,2);
}


class Trapezio{
	private:
		double baseMaior, baseMenor, altura;
	public:
		Trapezio();
		void setTrapezio(double bm,double bn,double a);
		double areaTrapezio();
	
};


Trapezio::Trapezio(){
	baseMaior = 0;
	baseMenor = 0;
	altura = 0;
}

void Trapezio::setTrapezio(double bm, double bn, double a){
	baseMaior = bm;
	baseMenor = bn;
	altura = a;
}

double Trapezio::areaTrapezio(){
	return ((baseMaior+baseMenor)*altura)/2;
}

class Quadrado{
	private: 
		double lado;
	public:
		Quadrado();
		void setQuadrado(double l);
		double areaQuadrado();
};

Quadrado::Quadrado(){
	lado = 0;
}

void Quadrado::setQuadrado(double l){
	lado = l;
}

double Quadrado::areaQuadrado(){
	return lado*lado;
}

class Retangulo{
	private: 
		double comprimento, largura;
	public:
		Retangulo();
		void setRetangulo(double c, double l);
		double areaRetangulo();
};

Retangulo::Retangulo(){
	comprimento = 0;
	largura = 0;
}

void Retangulo::setRetangulo(double c, double l){
	comprimento = c;
	largura = l;
}

double Retangulo::areaRetangulo(){
	return comprimento * largura;
}

int main(void){
	
	double A,B,C;
	Triangulo T;
	Circulo Cr;
	Trapezio Tr;
	Quadrado Q;
	Retangulo R;
	
	
	cin >> A >> B >> C;
	T.setTriangulo(C,A);
	Cr.setCirculo(C);
	Tr.setTrapezio(A,B,C);
	Q.setQuadrado(B);
	R.setRetangulo(A,B);
	
	cout.setf(ios::fixed);
	cout.precision(3);
	cout <<"TRIANGULO: "<<T.areaTriangulo()<<endl;
	cout <<"CIRCULO: "<<Cr.areaCirculo()<<endl;
	cout <<"TRAPEZIO: "<<Tr.areaTrapezio()<<endl;
	cout <<"QUADRADO: "<<Q.areaQuadrado()<<endl;
	cout <<"RETANGULO: "<<R.areaRetangulo()<<endl;

	return 0;
}
