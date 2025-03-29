#include <iostream>
#include <string>
using namespace std;
//Costruttore di default

class complex_number{
	public:
	 complex_number(){
	 p_real=0;
	 p_im=0;
	
	//Costruttore user-defined
	complex_number(double r, double im  ){
		p_real = r;
		p_im = im;
		
	}

	//Metodi
	double parteReale(){
		return p_real;
	}
	
	double parteImmaginaria(){
		return p_im;
	}
	
	complex_number coniugato(){
		return complex_number(p_real,-p_im);
	}
	
	}
	void stampa(){
		cout << "Numero complesso" << p_real;
		if(p_im >= 0)
			cout << "+" << p_im << "i" << endl;
		else
			cout << "-" << -p_im << "i" << endl;
	}
	
	complex_number somma(const complex_number& altro) {
        return complex_number(p_real + altro.p_real, p_im + altro.p_im);
    }
	complex_number prodotto((const complex_number& altro) {
        double real_part = (p_real * altro.p_real) - (p_im * altro.p_im);
        double imag_part = (p_real * altro.p_im) + (p_im * altro.p_real);
        return complex_number(real_part, imag_part) 

	private:
	 double impart;
	 double realpart; 
	
};

int main() {
	double r, im, r_o, i_o;
	cout << "Inserisci un numero reale:" << endl;
	cin >> r;
	cout << "Inserisci numero immaginario:" << endl;
	cin >> im;
	cout << "Inserisci un altro numero reale:" << endl;
	cin >> r_o;
	cout << "Inserisci un altro numero immaginario:" << endl;
    cin << i_o;	
	complex_number n1(r,im);
	cout << "Numero complesso inserito (1):";
	n1.stampa();
	complex_number n2(r_o, i_o)

	//metodo per ottenere i valori singolarmente
	cout << "Parte reale:" << n1.parteReale() << endl;
	cout << "Parte immaginaria:" << n1.parteImmaginaria() << endl;
	
	//coniugato
	complex_number numConiugato = n1.coniugato();
	cout << "Coniugato\n";
	numConiugato.stampa();
	complex_number sommaR =n1.somma(n2);
	complex_number prodttoR= n1.prodotto(n2);
	cout << "la somma è:" << endl
	sommaR.stampa();
	cout << "il prodotto è" << endl;
	prodorrtoR.stampa()
	return 0;
}