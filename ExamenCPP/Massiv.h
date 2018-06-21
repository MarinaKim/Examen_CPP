#pragma once
#include"Library.h"

class Massiv {
private:
	int *mas;
	int cur_size;
	int buf_size;
public:
	Massiv() {
		cur_size = 0;
		buf_size = 0;
		mas = nullptr;
	}
	Massiv(int s) {
		this->cur_size = s;
		this->buf_size = s;
		this->mas = new int[buf_size];
		for (int i = 0;i < buf_size;i++) {
			mas[i] = 0;
		}
	}
	Massiv(const Massiv& m) {
		this->cur_size = m.cur_size;
		this->buf_size = m.cur_size;
		this->mas = new int[cur_size];
		for (int i = 0;i < cur_size;i++) {
			mas[i] = m.mas[i];
		}
	}
	~Massiv() {
		delete[]mas;
		mas = nullptr;
	}
	void PrintMassiv() {
		for (int i = 0;i < cur_size;i++) {
			cout << mas[i]<<"\t";
		}
		cout << endl;
	}

	void SetValue(int Value) {
		
		for (int i = 0;i < cur_size;i++) {
			this->mas[i] = Value;
		}
	}

	Massiv operator+(const Massiv &obj) {
		for (int i = 0;i < cur_size;i++) {
			this->mas[i] += obj.mas[i];
		}
		return *this;
	}
	
};