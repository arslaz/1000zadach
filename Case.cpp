#include <iostream>
using namespace std;

void case1() {
	int a;
	switch (a) {
	case 1:
		cout << "�����������";
		break;

	case 2:
		cout << "�������";
		break;
	case 3:
		cout << "�����";
		break;
	case 4:
		cout << "�������";
		break;
	case 5:
		cout << "�������";
		break;
	case 6:
		cout << "������";
		break;
	case 7:
		cout << "�����������";
		break;
	}

	
}

void case2() {
	int K;
	switch (a) {
	case 1:
		cout << "�����";
		break;

	case 2:
		cout << "�������������������";
		break;
	case 3:
		cout << "�����������������";
		break;
	case 4:
		cout << "������";
		break;
	case 5:
		cout << "�������";
		break;
	
	}
}
void case3() {
	int a;
	switch (a) {
	case 1:
		cout << "������  "<<"����";
		break;

	case 2:
		cout << "�������  "<<"����";
		break;
	case 3:
		cout << "����  "<<"�����";
		break;
	case 4:
		cout << "������  "<<"�����";
		break;
	case 5:
		cout << "���  "<<"�����";
		break;
	case 6:
		cout << "����  "<<"����";
		break;
	case 7:
		cout << "����  "<<"����";
		break;
	case 8:
		cout << "������  "<<"����";
		break;

	case 9:
		cout << "��������  "<<"�����";
		break;
	case 10:
		cout << "�������   "<<"�����";
		break;
	case 11:
		cout << "������   "<<"�����";
		break;
	case 12:
		cout << "�������   "<<"����";
		break;
	}


}
void case4() {
	int a;
	switch (a) {
	case 1:
		cout << "������  " << "31";
		break;

	case 2:
		cout << "�������  " << "28";
		break;
	case 3:
		cout << "����  " << "31";
		break;
	case 4:
		cout << "������  " << "30";
		break;
	case 5:
		cout << "���  " << "31";
		break;
	case 6:
		cout << "����  " << "30";
		break;
	case 7:
		cout << "����  " << "31";
		break;
	case 8:
		cout << "������  " << "30";
		break;

	case 9:
		cout << "��������  " << "31";
		break;
	case 10:
		cout << "�������   " << "30";
		break;
	case 11:
		cout << "������   " << "31";
		break;
	case 12:
		cout << "�������   " << "30";
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
	cout <<"����������" << D  << M;
}
void case1011() {
	char C;
	int N;
	cout << "�-�����  " << "�-�����  " << "�-��" << "�-������";
		
	cin >> C >> N;
	switch (C) {
	case "�":
		switch (N) {
		case 0:
			cout << C;
			break;
		case 1:
			cout << C = "�";
			break;
		case 2:
			cout << C = "�";
			break;
		}
		break;
	case "�":
		switch (N) {
		case 0:
			cout << C;
			break;
		case 1:
			cout << C = "�";
			break;
		case 2:
			cout << C = "�";
			break;
		}
		break;
	case "�":
		switch (N) {
		case 0:
			cout << C;
			break;
		case 1:
			cout << C = "�";
			break;
		case 2:
			cout << C = "�";
			break;
		}
		break;
	case "�":
		switch (N) {
		case 0:
			cout << C;
			break;
		case 1:
			cout << C = "�";
			break;
		case 2:
			cout << C = "�";
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
			cout << "��������� ����";
			break;
		case 7:
			cout << "������� ����";
			break;
		case 8:
			cout << "��������� ����";
			break;
		case 9:
			cout << "������� ����";
			break;
		case 10:
			cout << "������� ����";
			break;
		case 11:
			cout << "����� ����";
			break;
		case 12:
			cout << "���� ����";
			break;
		case 13:
			cout << "������ ����";
			break;
		case 14:
			cout << "��� ����";
			break;
		}
		break;
	case 2:
		switch(N){
		case 6:
			cout << "��������� ����";
			break;
		case 7:
			cout << "������� ����";
			break;
		case 8:
			cout << "��������� ����";
			break;
		case 9:
			cout << "������� ����";
			break;
		case 10:
			cout << "������� ����";
			break;
		case 11:
			cout << "����� ����";
			break;
		case 12:
			cout << "���� ����";
			break;
		case 13:
			cout << "������ ����";
			break;
		case 14:
			cout << "��� ����";
			break;
		}
		break;
	case 3:
		switch (N) {
		case 6:
			cout << "��������� �����";
			break;
		case 7:
			cout << "������� �����";
			break;
		case 8:
			cout << "��������� �����";
			break;
		case 9:
			cout << "������� �����";
			break;
		case 10:
			cout << "������� �����";
			break;
		case 11:
			cout << "����� �����";
			break;
		case 12:
			cout << "���� �����";
			break;
		case 13:
			cout << "������ �����";
			break;
		case 14:
			cout << "��� �����";
			break;
		}
		break;
	case 4:
		switch (N) {
		case 6:
			cout << "��������� �����";
			break;
		case 7:
			cout << "������� �����";
			break;
		case 8:
			cout << "��������� �����";
			break;
		case 9:
			cout << "������� �����";
			break;
		case 10:
			cout << "������� �����";
			break;
		case 11:
			cout << "����� �����";
			break;
		case 12:
			cout << "���� �����";
			break;
		case 13:
			cout << "������ �����";
			break;
		case 14:
			cout << "��� �����";
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