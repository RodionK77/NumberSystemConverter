#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include <vector>
#include <string>
#include <cassert>
using namespace std;


string ten(float x, int cc2) {
	if (cc2 == 0) {
		return "error";
	}
	else {
		string result = "";
		float y, z, j = 0, k = 0;
		int a = floor(x);
		float d = x - a;
		if (x == 0) {
			return "0";
		}
		else {
			while (a / cc2 > 0) {
				z = a % cc2;
				a = a / cc2;
				j++;
			} j++;
			vector<int> vv(j);
			a = floor(x);
			while (a / cc2 > 0) {
				z = a % cc2;
				a = a / cc2;
				vv[j - k - 1] = z;
				k++;
			}vv[j - k - 1] = a;
			for (int i = 0; i < j; i++) {
				switch (vv[i])
				{
				case 10: result += "A"; break;// cout << "A"; break;
				case 11: result += "B"; break;//cout << "B"; break;
				case 12: result += "C"; break;//cout << "C"; break;
				case 13: result += "D"; break;//cout << "D"; break;
				case 14: result += "E"; break;//cout << "E"; break;
				case 15: result += "F"; break;//cout << "F"; break;
				case 16: result += "G"; break;//cout << "G"; break;
				case 17: result += "H"; break;//cout << "H"; break;
				case 18: result += "I"; break;//cout << "I"; break;
				case 19: result += "J"; break;//cout << "J"; break;
				case 20: result += "K"; break;//cout << "K"; break;
				case 21: result += "L"; break;//cout << "L"; break;
				case 22: result += "M"; break;//cout << "M"; break;
				case 23: result += "N"; break;//cout << "N"; break;
				case 24: result += "O"; break;//cout << "O"; break;
				default: result += to_string(vv[i]); break;// cout << vv[i]; break;
				}
			}
			int u = -1, L;
			float d2;
			if (d != 0) {
				string k = to_string(d);
				for (int i = 0; i < k.size(); i++) {
					if (k[i] != '0' && k[i] != '.') {
						u++;
					}
				}
				result += ".";//cout << ".";
				L = floor(abs(log(pow(10, (-1 * u)) / 2) / log(cc2)));
				for (int i = 0; i < L; i++) {
					d2 = d * cc2;
					int f_d2 = floor(d2);
					switch (f_d2)
					{
					case 10: result += "A"; break;//cout << "A"; break;
					case 11: result += "B"; break;//cout << "B"; break;
					case 12: result += "C"; break;//cout << "C"; break;
					case 13: result += "D"; break;//cout << "D"; break;
					case 14: result += "E"; break;//cout << "E"; break;
					case 15: result += "F"; break;//cout << "F"; break;
					case 16: result += "G"; break;//cout << "G"; break;
					default: result += to_string(f_d2); break;//cout << f_d2; break;
					}
					d = d2 - floor(d2);
				}
			}
			return result;
		}
	}
}

string more(string x1, int cc1, int cc2) {
	if (x1[0] == '0' && x1.length() == 1) {
		cout << 0;
	}
	else {
		bool mark = false;
		int o = 0;
		for (int i = 0; i < x1.length(); i++) {
			if (x1[i] != '.') {
				o++;
			}
			else {
				mark = true;
				break;
			}
		}
		vector<int> num1(o);
		for (int i = 0; i < o; i++) {
			if (x1[i] == '0') { num1[i] = 0; }
			else if (x1[i] == '1') { num1[i] = 1; }
			else if (x1[i] == '2') { num1[i] = 2; }
			else if (x1[i] == '3') { num1[i] = 3; }
			else if (x1[i] == '4') { num1[i] = 4; }
			else if (x1[i] == '5') { num1[i] = 5; }
			else if (x1[i] == '6') { num1[i] = 6; }
			else if (x1[i] == '7') { num1[i] = 7; }
			else if (x1[i] == '8') { num1[i] = 8; }
			else if (x1[i] == '9') { num1[i] = 9; }
			else if (x1[i] == 'A' || x1[i] == 'a') { num1[i] = 10; }
			else if (x1[i] == 'B' || x1[i] == 'b') { num1[i] = 11; }
			else if (x1[i] == 'C' || x1[i] == 'c') { num1[i] = 12; }
			else if (x1[i] == 'D' || x1[i] == 'd') { num1[i] = 13; }
			else if (x1[i] == 'E' || x1[i] == 'e') { num1[i] = 14; }
			else if (x1[i] == 'F' || x1[i] == 'f') { num1[i] = 15; }
			else if (x1[i] == 'G' || x1[i] == 'g') { num1[i] = 16; }
			else if (x1[i] == 'H' || x1[i] == 'h') { num1[i] = 17; }
			else if (x1[i] == 'I' || x1[i] == 'i') { num1[i] = 18; }
			else if (x1[i] == 'J' || x1[i] == 'j') { num1[i] = 19; }
			else if (x1[i] == 'K' || x1[i] == 'k') { num1[i] = 20; }
			else if (x1[i] == 'L' || x1[i] == 'l') { num1[i] = 21; }
			else if (x1[i] == 'M' || x1[i] == 'm') { num1[i] = 22; }
			else if (x1[i] == 'N' || x1[i] == 'n') { num1[i] = 23; }
			else if (x1[i] == 'O' || x1[i] == 'o') { num1[i] = 24; }
		}
		int p = x1.length() - o - 1;
		float a = 0, b = 0; int j = 0;
		if (p != -1) {
			vector<int> num2(p);
			for (int i = o + 1; i < x1.length(); i++) {
				if (x1[i] == '0') { num2[j] = 0; j++; }
				else if (x1[i] == '1') { num2[j] = 1; j++; }
				else if (x1[i] == '2') { num2[j] = 2; j++; }
				else if (x1[i] == '3') { num2[j] = 3; j++; }
				else if (x1[i] == '4') { num2[j] = 4; j++; }
				else if (x1[i] == '5') { num2[j] = 5; j++; }
				else if (x1[i] == '6') { num2[j] = 6; j++; }
				else if (x1[i] == '7') { num2[j] = 7; j++; }
				else if (x1[i] == '8') { num2[j] = 8; j++; }
				else if (x1[i] == '9') { num2[j] = 9; j++; }
				else if (x1[i] == 'A' || x1[i] == 'a') { num2[j] = 10; j++; }
				else if (x1[i] == 'B' || x1[i] == 'b') { num2[j] = 11; j++; }
				else if (x1[i] == 'C' || x1[i] == 'c') { num2[j] = 12; j++; }
				else if (x1[i] == 'D' || x1[i] == 'd') { num2[j] = 13; j++; }
				else if (x1[i] == 'E' || x1[i] == 'e') { num2[j] = 14; j++; }
				else if (x1[i] == 'F' || x1[i] == 'f') { num2[j] = 15; j++; }
				else if (x1[i] == 'G' || x1[i] == 'g') { num2[j] = 16; j++; }
				else if (x1[i] == 'H' || x1[i] == 'h') { num1[i] = 17; j++; }
				else if (x1[i] == 'I' || x1[i] == 'i') { num1[i] = 18; j++; }
				else if (x1[i] == 'J' || x1[i] == 'j') { num1[i] = 19; j++; }
				else if (x1[i] == 'K' || x1[i] == 'k') { num1[i] = 20; j++; }
				else if (x1[i] == 'L' || x1[i] == 'l') { num1[i] = 21; j++; }
				else if (x1[i] == 'M' || x1[i] == 'm') { num1[i] = 22; j++; }
				else if (x1[i] == 'N' || x1[i] == 'n') { num1[i] = 23; j++; }
				else if (x1[i] == 'O' || x1[i] == 'o') { num1[i] = 24; j++; }
			}
			float k = -1;
			for (int h = 0; h < p; h++) {
				b = b + (num2[h] * pow(cc1, k));
				k = k - 1;
			}
		}
		for (int i = 0; i < o; i++) {
			a = a + (num1[o - i - 1] * pow(cc1, i));
		}
		float x = a + b;
		if (cc2 == 10) {
			if (!mark) { return to_string((int)x); }
			else return to_string(x);
		}
		else return ten(x, cc2);
	}
}

void programm() {
	int cc1, cc2;
	cout << "\nВведите исходную систему счисления: ";
	cin >> cc1;
	if (cc1 == 10) {
		float x;
		cout << "Введите число: ";
		cin >> x;
		cout << "Введите искомую систему счисления: ";
		cin >> cc2;
		if (cc2 > 0 && cc1 > 0) {
			cout << "Число в искомой системе счисления: "<< ten(x, cc2);
			//ten(x, cc2);
			cout << "\n~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~";
		}
		else cout << "Ошибка\n~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~";
	}
	else {
		string x1;
		cout << "Введите число: ";
		cin >> x1;
		cout << "Введите искомую систему счисления: ";
		cin >> cc2;
		if (cc2 > 0 && cc1 > 0) {
			cout << "Число в искомой системе счисления: "<< more(x1, cc1, cc2);
			//more(x1, cc1, cc2);
			cout << "\n~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~";
		}
		else cout << "Ошибка\n~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~";
	}
}


int main() {
	setlocale(LC_ALL, "rus");
	char c;
	cout << "Для начала работы нажмите Enter;\nДля окончания работы введите X;\n";
	while ((c = getchar()) != 'x') {
		programm();
	}
}