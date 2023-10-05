
#include <iostream>
using namespace std;

void if1(int n) {
	if (n > 0) { n++; };
	cout << n;
}
void if2,3(int n) {
	if (n > 0) { n++; };
	 else if (n = 0) { n = 10; }
	else { n-=2; };
	cout << n;
}
void if4, 5(int n1, int n2, int n3, int p=0, int o=0){
	if(n1>0){p++}
	else{o++}
	if (n2 > 0) { p++ }
	else { o++ }
	if (n2 > 0) { p++ }
	else { o++ }
	cout << "количество положительных чисел:" << p << endl << "количество отрицательных чисел : " << o << endl;

}
void if6(int a, int b) {
	if (a > b) { cout << "a"; }
	else { cout << b; }
}
void if7(int n1, int n2) {
	if (n1 > n2) { cout << n2; }
	else { cout << n1; }
}
void if8(int n1, n2) {
	if (n1 > n2) { cout << n1 << endl << n2; }
	else { cout << n2 << endl << n2; }
}
void if9(float A, float B,float f) {
	if (A > B) { f = A; A = B; B = f; cout << A <<endl<< B; }
	else { cout << A << B; }
}
void if11(int A, int B) {
	if (A == B) { A = 0; B = 0; cout << A <<endl<< B; }
	else{if(A>B){B=A}else{A=B} }
	cout << A << B;
}
void if12(int A, int B, int C) {
	if (A > B) { if (B > C) { cout << C; } else { cout << B; } }
	else { if (B > A && C > A) { cout << A; } else { cout << C; } }
}
void if13(int A, int B, int C) {
	if (A > B) { if (B > C) { cout << B; } else { cout << C; } }
	else { if (B > A && C > A) { cout << C; } else { cout << A; } }
}
void if14(int A, int B, int C) {
	if (A > B) { if (B > C) { cout << C; cout << A; } else { cout << B; cout << A; } }
	else { if (B > A && C > A) { if (B > C) { cout << A << endl << B; } else { cout << A << endl << C; } } else { cout << C << endl << B; } }
}
void if15(int A, int B, int C int s) {
	if (A > B) { if (B > C) {  cout << s=A+B; } else {  cout << s=C+A; } }
	else { if (B > A && C > A) { cout << s = B + C; } else { cout << s = A + B; } }
}
void if16, 17(float A, float B, float C) {
	if (A > B && B > C || A < B && B < C) { A *= 2; B *= 2; C *= 2; }
	else { A = -A; B = -B; C = -C;}
	cout << A << endl << B << endl << C << endl;
}
void if18(int A, int B, int C) {
	if (A == B) { cout << "3" }
	else if (A == C) { cout <<"2" }
	else {cout<<"1" }
}
void if19(int A, int B, int C,int D) {
	if (A == B && A==C) { cout << "4" }
	else if (A == B &&A==D) { cout << "3" }
	else if (A == C && A == D) { cout << "2" }
	else { cout << "1" }
}
void if20(float a, float b, float c) {
	if ((a - b) < (a - c)) {
		cout << "Точка:" << b;
		if ((a - b) > 0)
			cout << "Расстояние:" << a - b;
		else if ((a - b) < 0)
			cout << "Расстояние:" << (a - b) * -1;
	}
	else {
		cout << "Точка:" << c << endl;
		if ((a - c) > 0)
			cout << "Расстояние:" << a - c;
		else if ((a - c) < 0)
			cout << "Расстояние:" << (a - c) * -1;
	}
		
}
void if24(int x,int f) {
	if (x > 0) { f = 2 * sin(x); }
	else { f = 6 - x; }cout << f;
}
void if25(int x, int f) {
	if (x < -2 && x>2) { f = 2 * x; }
	else { f = -3 * x; }cout << f;
}
void if26(int x, int f) {
	if (x <= 0) { f = -x; }
	else if (x > 0 && x < 2) { f = x * x; }
	else if (x >= 2) { f = 4; }cout << f;
}
void if27(int x, int f) {
	if (x <0) { f = 0; }
	else if(x>=0 && x<1 && x >=2 && x<3){ f = 1; }
	else if (x >= 1 && x < 2 && x >= 3 && x < 4) { f = -1; }
	cout << f;
}
void if29(int n) {
	if (n > 0) { cout << "число положительное "; if (n % 2 == 0) { cout << "четное"; } else { cout << "нечетное"; } }
	else if (n < 0) { cout << "число отрицательное "; if (n % 2 == 0) { cout << "четное"; }
	else { cout << "нечетное"; }
	}
	else { cout << "число нулевое "; }
}
void if30(int a) {
	if (a % 2 == 0) { cout << "четное "; }
	else { cout << "не четное "; }
	if (a / 100 > 0 && a / 100 < 10) { cout << "трехзначное "; }
	else if (a / 10 > 0 && a / 10 < 10) { cout << "двухзначное "; }
	else if (a / 10 == 0) { cout << "однозначное "; }
}


