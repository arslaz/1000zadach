void series1.2.3(){
	float ara[10]{};
	float a = 0, b = 1;
	for (int i = 0; i < 10; i++) {
		cin << ara[i];
	}
	for (int j = 0; j < 10; j++) {
		a += ara[j];
		b *= ara[j];
	}
	cout << "�����=" << a << endl << "������������ =" << b << endl << "������� ��������������=" << a / 10;


}
void series 4() {
	int  size;
	cin >> size;
	float ara[1000]{};
	float a = 0, b = 1;
	for (int i = 0; i < size; i++) {
		cin >> ara[i];
	}
	for (int j = 0; j < size; j++) {
		a += ara[j];
		b *= ara[j];
	}
	cout << "�����=" << a << endl << "������������ =" << b << endl;
}

	void series5.6(){
		int  size;
		cin >> size;
		float ara[1000]{};
		float a = 0, g = 0;
		float b, k;
		int c;
		for (int i = 0; i < size; i++) {
			cin >> ara[i];
		}
		for (int j = 0; j < size; j++) {
			b = ara[j];
			c = b;
			k = b - c;
			cout << "����� ����� " << j << "=" << k << endl << "����� ����� ����� " << j << "=" << c << endl;
			a += k;
			g += c;

		}
		cout << "����� ��������=" << a << endl << "����� ������=" << g << endl;


	}
	void series8.9() {
		int  size;
		cin >> size;
		float ara[1000]{};
		int a = 0, b = 0;
		int c;
		for (int i = 0; i < size; i++) {
			cin >> ara[i];
		}
		for (int j = 0; j < size; j++) {
			c = ara[j];
			if (c % 2 == 0) {
				cout << "����� " << j << "������=" << c << endl;
				a++;
			}
			else {
				cout << "����� " << j << "��������=" << c << endl;
				b++;
			}


		}
		cout << "���������� ������ �����=" << a << endl << "���������� �������� �����=" << b;
	}
	void series10() {
		int  size;
		cin >> size;
		float ara[1000]{};

		float c;
		int b = 0;
		for (int i = 0; i < size; i++) {
			cin >> ara[i];
		}
		for (int j = 0; j < size; j++) {
			c = ara[j];
			if (c > 0) {
				b++;
			}

		}
		if (b > 0) {
			cout << true;
		}
		else {
			cout << false;
		}

	}
	void series11() {
		int  size, k;
		cin >> size >> k;
		float ara[1000]{};

		float c;
		int b = 0;
		for (int i = 0; i < size; i++) {
			cin >> ara[i];
		}
		for (int j = 0; j < size; j++) {
			c = ara[j];
			if (c < k) {
				b++;
			}

		}
		if (b > 0) {
			cout << true;
		}
		else {
			cout << false;
		}

	}
	void series12() {
		int ara[1000]{};
		int b = 0;
		for (int i = 0; i < 1000; i++) {
			cin >> ara[i];
			if (ara[i] == 0) {
				cout << "finish";
				return(0);

			}

		}
	}
	void series13() {
		int ara[1000]{};
		int b = 0;
		for (int i = 0; i < 1000; i++) {
			cin >> ara[i];
			if (ara[i] % 2 == 0&&ara[i]>0) {
				b += ara[i];
			}
			if (ara[i] == 0) {
				if (b > 0) {
					cout << "����� ������������� ������ �����=" << b << endl;
				}
				else {
					cout << false;
				}
				cout << "finish" << endl;

				return(0);

			}

		}
	}
	void series14() {
		int ara[1000]{};
		int k;
		cin >> k;
		int b = 0;
		for (int i = 0; i < 1000; i++) {
			cin >> ara[i];
			if (ara[i] < k) {
				++b;
			}
			if (ara[i] == 0) {
				if (b > 0) {
					cout << "���������� ����� ������ k=" << b << endl;
				}
				else {
					cout << false;
				}
				cout << "finish" << endl;

				return(0);

			}

		}

	}
	void series15() {
		int ara[1000]{};
		int k;
		cin >> k;
		int b = 0;
		for (int i = 0; i < 1000; i++) {
			cin >> ara[i];
			if (ara[i] < k) {
				++b;
			}
			if (ara[i] == 0) {
				if (b > 0) {
					for (int j = 0; j < 1000; j++) {
						if (ara[j] < k) {
							cout << "����� ������� ����� ������� ������ k=" << ++j << endl << "��������� ����� ������� ������ k=" << b << endl;
							return(0);
						}
					}

				}
				else {
					cout << false;
				}
				cout << "finish" << endl;

				return(0);

			}

		}
	}
	void series16() {
		int ara[1000]{};
		int k;
		cin >> k;
		int b = 0, a;
		for (int i = 0; i < 1000; i++) {
			cin >> ara[i];
			if (ara[i] < k && ara[i]>0) {
				++b;
				a = ara[i];
			}
			if (ara[i] == 0) {
				if (b > 0) {

					cout << "��������� ����� ������ k=" << a << endl;
				}
				else {
					cout << false;
				}

				cout << "finish" << endl;

				return(0);

			}

		}

	}
	void series19() {
		int size, a = 0, b = 0;
		cin >> size;

		float ara[1000]{};

		for (int i = 0; i < size; i++) {
			cin >> ara[i];

			if (ara[i] < a) {
				cout << "����� ������=" << ara[i] << endl;
				b++;
			}
			a = ara[i];

		}
		cout << b;
	}