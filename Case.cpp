#include <iostream>
using namespace std;

void case1() {
	int a;
	switch (a) {
	case 1:
		cout << "понедельник";
		break;

	case 2:
		cout << "вторник";
		break;
	case 3:
		cout << "среда";
		break;
	case 4:
		cout << "четверг";
		break;
	case 5:
		cout << "п€тница";
		break;
	case 6:
		cout << "субота";
		break;
	case 7:
		cout << "воскресенье";
		break;
	}

	
}

void case2() {
	int K;
	switch (a) {
	case 1:
		cout << "плохо";
		break;

	case 2:
		cout << "неудовлетворительно";
		break;
	case 3:
		cout << "удовлетворительно";
		break;
	case 4:
		cout << "хорошо";
		break;
	case 5:
		cout << "отлично";
		break;
	
	}
}
void case3() {
	int a;
	switch (a) {
	case 1:
		cout << "€нварь  "<<"зима";
		break;

	case 2:
		cout << "февраль  "<<"зима";
		break;
	case 3:
		cout << "март  "<<"весна";
		break;
	case 4:
		cout << "апрель  "<<"весна";
		break;
	case 5:
		cout << "май  "<<"весна";
		break;
	case 6:
		cout << "июнь  "<<"лето";
		break;
	case 7:
		cout << "июль  "<<"лето";
		break;
	case 8:
		cout << "август  "<<"лето";
		break;

	case 9:
		cout << "сент€брь  "<<"осень";
		break;
	case 10:
		cout << "окт€брь   "<<"осень";
		break;
	case 11:
		cout << "но€брь   "<<"осень";
		break;
	case 12:
		cout << "декабрь   "<<"зима";
		break;
	}


}
void case4() {
	int a;
	switch (a) {
	case 1:
		cout << "€нварь  " << "31";
		break;

	case 2:
		cout << "февраль  " << "28";
		break;
	case 3:
		cout << "март  " << "31";
		break;
	case 4:
		cout << "апрель  " << "30";
		break;
	case 5:
		cout << "май  " << "31";
		break;
	case 6:
		cout << "июнь  " << "30";
		break;
	case 7:
		cout << "июль  " << "31";
		break;
	case 8:
		cout << "август  " << "30";
		break;

	case 9:
		cout << "сент€брь  " << "31";
		break;
	case 10:
		cout << "окт€брь   " << "30";
		break;
	case 11:
		cout << "но€брь   " << "31";
		break;
	case 12:
		cout << "декабрь   " << "30";
		break;
	}


}
void case5() {
	int N;
	float A;
	float B;
	cin >> N >> B >> A;
	switch (N) {
	case 1:
		cout << A + B;
		break;
	case 2:
		cout << A - B;
		break;
	case 3:
		cout << A * B;
		break;
	case 4:
		cout << A / B;
		break;
	}
}
void case6() {
	int M;
	float A;
	cin >> M >> A;
	switch (M) {
	case 1:
		cout << A*10;
		break;
	case 2:
		cout << A/1000;
		break;
	case 3:
		cout << A;
		break;
	case 4:
		cout << A * 1000;
		break;
	case 5:
		cout << A*100;
		break;
	}
}
void case7() {
	int D;
	float A;
	cin >> D >> A;
	switch (D) {
	case 1:
		cout << A ;
		break;
	case 2:
		cout << A ;
		break;
	case 3:
		cout << A/1000;
		break;
	case 4:
		cout << A * 1000;
		break;
	case 5:
		cout << A * 100;
		break;
	}
}
void case89(){
	int D;
	int M;
	cin >> D >> M;
	D = D - 1;
	if (D == 0) {
		M = M - 1;
		If(M == 0) {
			M = 12;
		}
		switch (M) {
		case 1:
			D = 31;
			break;
		case 2:
			D = 28;
			break;
		case 3:
			D = 31;
			break;
		case 4:
			D = 30;
		    break;
		case 5:
			D = 31;
			break;
		case 6:
			D = 30;
			break;
		case 7:
			D = 31;
			break;
		case 8:
			D = 30;
			break;
		case 9:
			D = 31;
			break;
		case 10:
			D = 30;
			break;
		case 11:
			D = 31;
			break;
		case 12:
			D = 30;
			break;
		}
	}
	cout <<"предыдущий" << D  << M;
}
void case1011() {
	char C;
	int N;
	cout << "с-север  " << "з-запад  " << "ю-юг" << "в-восток";
		
	cin >> C >> N;
	switch (C) {
	case "с":
		switch (N) {
		case 0:
			cout << C;
			break;
		case 1:
			cout << C = "з";
			break;
		case 2:
			cout << C = "в";
			break;
		}
		break;
	case "з":
		switch (N) {
		case 0:
			cout << C;
			break;
		case 1:
			cout << C = "ю";
			break;
		case 2:
			cout << C = "с";
			break;
		}
		break;
	case "ю":
		switch (N) {
		case 0:
			cout << C;
			break;
		case 1:
			cout << C = "в";
			break;
		case 2:
			cout << C = "з";
			break;
		}
		break;
	case "в":
		switch (N) {
		case 0:
			cout << C;
			break;
		case 1:
			cout << C = "с";
			break;
		case 2:
			cout << C = "ю";
			break;
		}
		break;
	}
}
void case12() {
	const float pi = 3.14;
	int R;
	int N;
	int M;
	cin >> M;
	switch (M) {
	case 1:
		cin >> R;
		cout << N = R;
		cout << N = N * 2;
		cout << N = R * 2 * pi;
		cout << N = R * R * pi;
		break;
	case 2:
		cin >> R;
		cout << N=R/2;
		cout << N = R;
		cout << N = R * pi;
		cout << N = R * R * pi;
		break;
	case 3:
		cin >> R;
		cout << N = R / 2 / pi;
		cout << N = R/pi;
		cout << N = R;
		cout << N = (R / 2) * R;
		break;
	case 4:
		cin >> R;
		cout << N = R / R / pi;
		cout << N = N * 2;
		cout << N = N * pi;
		cout << N = R;
		break;
	}
}
void case15() {
	int N;
	int M;
	cin >> N >> M;
	switch (M) {
	case 1:
		cin >> N;
		switch (N) {
		case 6:
			cout << "шестьерка пика";
			break;
		case 7:
			cout << "семерка пика";
			break;
		case 8:
			cout << "восьмерка пика";
			break;
		case 9:
			cout << "дев€тка пика";
			break;
		case 10:
			cout << "дес€тка пика";
			break;
		case 11:
			cout << "валет пика";
			break;
		case 12:
			cout << "дама пика";
			break;
		case 13:
			cout << "король пика";
			break;
		case 14:
			cout << "туз пика";
			break;
		}
		break;
	case 2:
		switch(N){
		case 6:
			cout << "шестьерка треф";
			break;
		case 7:
			cout << "семерка треф";
			break;
		case 8:
			cout << "восьмерка треф";
			break;
		case 9:
			cout << "дев€тка треф";
			break;
		case 10:
			cout << "дес€тка треф";
			break;
		case 11:
			cout << "валет треф";
			break;
		case 12:
			cout << "дама треф";
			break;
		case 13:
			cout << "король треф";
			break;
		case 14:
			cout << "туз треф";
			break;
		}
		break;
	case 3:
		switch (N) {
		case 6:
			cout << "шестьерка бубны";
			break;
		case 7:
			cout << "семерка бубны";
			break;
		case 8:
			cout << "восьмерка бубны";
			break;
		case 9:
			cout << "дев€тка бубны";
			break;
		case 10:
			cout << "дес€тка бубны";
			break;
		case 11:
			cout << "валет бубны";
			break;
		case 12:
			cout << "дама бубны";
			break;
		case 13:
			cout << "король бубны";
			break;
		case 14:
			cout << "туз бубны";
			break;
		}
		break;
	case 4:
		switch (N) {
		case 6:
			cout << "шестьерка червы";
			break;
		case 7:
			cout << "семерка червы";
			break;
		case 8:
			cout << "восьмерка червы";
			break;
		case 9:
			cout << "дев€тка червы";
			break;
		case 10:
			cout << "дес€тка червы";
			break;
		case 11:
			cout << "валет червы";
			break;
		case 12:
			cout << "дама червы";
			break;
		case 13:
			cout << "король червы";
			break;
		case 14:
			cout << "туз червы";
			break;
		}
		break;
	}
}
void case19() {
	int V;
	int G = 1;
	cin >> V;
	switch ((V)%10) {
	case 1:

		break;
	case 2:
		break:
			cas
	

	}
}