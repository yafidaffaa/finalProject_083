#include <iostream>
using namespace std;

class bidangDatar {
protected:
	int x, y; 
public:
	bidangDatar() { 
		x = 0;
		y = 0;
	}
	virtual void input() {}  
	virtual float Luas(int a) { return 0; } 
	virtual float Keliling(int a) { return 0; } 
	virtual void cekUkuran() {}  
	void setX(int a) { 
		this->x = a;
	}
	int getX() { 
		return x, y;
	}

	void setY(int a) {
		this->y = a;
	}
	int getY() {
		return y, x;
	}
};

class Lingkaran : public bidangDatar {
public:
	float Luas() {
		return (x * x * 3.14); 
	}
	float Keliling() {
		return (2 * x * 3.14); 
	}
	void input() {
		int a;
		cout << "\nLingkaran dibuat" << endl;
		cout << "Masukkan jejari: ";
		cin >> a;
		setX(a); 
		cout << "Luas Lingkaran = " << Luas() << endl; 
		cout << "Keliling Lingkaran = " << Keliling() << endl; 
		cout << "Ukuran lingkaran adalah";
		cekUkuran();
	}
	void cekUkuran() {
		if (x <= 10) {
			cout << "Ukuran lingkaran adalah kecil\n" << endl;
		}
		else if (x <= 20) {
			cout << "Ukuran lingkaran adalah sedang\n" << endl;
		}
		else if (x > 40) {
			cout << "Ukuran lingkaran adalah besar\n" << endl;
		}
		else {
			cout << "Ukuran lingkaran tidak diketahui\n" << endl;
		}
	}

};

class Persegipanjang : public bidangDatar {
public:
	int Luas() {
		return  (x * y); 
	}
	int Keliling() {
		return 2* (x + y); 
	}
	void input() {
		int x;
		int y;
		cout << "Persegi panjang dibuat" << endl;
		cout << "Masukkan panjang: ";
		cin >> x;
		cout << "Masukkan Lebar: ";
		cin >> y;
		setX(x); 
		setY(y);
		cout << "Luas Persegi panjang = " << Luas() << endl; 
		cout << "Keliling Persegi panjang = " << Keliling() << endl; 
		cekUkuran();
	}
	void cekUkuran() {
		if (x <= 10) {
			cout << "Ukuran persegi panjang adalah kecil\n" << endl;
		}
		else if (x <= 20) {
			cout << "Ukuran persegi panjang adalah sedang\n" << endl;
		}
		else if (x > 40) {
			cout << "Ukuran persegi panjang adalah besar\n" << endl;
		}

		else {
			cout << "Ukuran lingkaran tidak diketahui\n" << endl;
		}
	}
};

int main() {
	char ch;

	do {
		bidangDatar* obj;
		Lingkaran L;
		Persegipanjang P;

		obj = &L; 
		obj->input(); 
		obj = &P; 
		obj->input(); 

		cout << "\nApakah anda ingin mengulang program?  y/n\n";
		cin >> ch;

	} while ((ch == 'y'));

	return 0;

}

