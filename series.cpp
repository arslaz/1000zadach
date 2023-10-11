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
	cout << "сумма=" << a << endl << "произведение =" << b << endl << "среднее орифметическое=" << a / 10;


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
	cout << "сумма=" << a << endl << "произведение =" << b << endl;
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
			cout << "дробь числа " << j << "=" << k << endl << "целая часть числа " << j << "=" << c << endl;
			a += k;
			g += c;

		}
		cout << "сумма дробного=" << a << endl << "сумма целого=" << g << endl;


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
				cout << "число " << j << "четное=" << c << endl;
				a++;
			}
			else {
				cout << "число " << j << "нечетное=" << c << endl;
				b++;
			}


		}
		cout << "количество четных чисел=" << a << endl << "количество нечетнах чисел=" << b;
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
					cout << "сумма положительных четных чисел=" << b << endl;
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
					cout << "количество чисел меньше k=" << b << endl;
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
							cout << "номер первого числа которое меньше k=" << ++j << endl << "количесто чисел которые меньше k=" << b << endl;
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

					cout << "последнее число больше k=" << a << endl;
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
				cout << "число меньше=" << ara[i] << endl;
				b++;
			}
			a = ara[i];

		}
		cout << b;
	}
	void series21() {
		int size, a = 0, b = 0;
		cin >> size;

		float ara[1000]{};

		for (int i = 0; i < size; i++) {
			cin >> ara[i];
		}
		for (int j = 0; j < size; j++) {

			if (a > ara[j]) {
				cout << false;
				return(0);
			}
			a = ara[j];
		}
		cout << true;
	}
	void series22() {
		int size, a = 1000, b = 0;
		cin >> size;

		float ara[1000]{};

		for (int i = 0; i < size; i++) {
			cin >> ara[i];
		}
		for (int j = 0; j < size; j++) {

			if (a < ara[j]) {
				cout << ara[j];
				return(0);
			}
			a = ara[j];
		}
		cout << false;
	}
	void series23() {
		int size, a = 0, b = 0;
		cin >> size;

		float ara[1000]{};

		for (int i = 0; i < size; i++) {
			cin >> ara[i];
		}
		for (int j = 0; j < size; j++) {
			b = ara[j + 1];
			if (a == ara[j] || b == ara[j]) {
				cout << ara[j];
				return(0);
			}
			a = ara[j];
		}
		cout << false;
	}
		void series25() {
			int size, a = 0, b = 0, sum = 0;
			cin >> size;

			float ara[1000]{};

			for (int i = 0; i < size; i++) {
				cin >> ara[i];
			}
			for (int j = 0; j < size; j++) {
				if (ara[j] == 0) {
					a = j;
					for (int g = j + 1; g < size; g++) {
						if (ara[g] == 0) {
							b = g;
							for (int r = a; r < b; r++) {
								sum += ara[r];

							}
							cout << sum;
							return(0);
						}
					}
				}

			}

			cout << false;



	}
		void series26() {
			int size, b, k;
			cin >> size >> k;
			int ara[1000]{};
			for (int i = 0; i < size; i++) {
				cin >> ara[i];
			}
			for (int j = 0; j < size; j++) {
				int a = 1;
				for (int g = 0; g <= k; g++) {

					a = a * ara[j];
				}
				cout << "A" << j + 1 << "в степени " << k << "=" << a << endl;
			}
		}
		void series27() {
			int size;
			cin >> size;
			int ara[1000]{};
			for (int i = 0; i < size; i++) {
				cin >> ara[i];
			}
			for (int j = 0; j < size; j++) {
				int a = 1;
				for (int g = 1; g <= j + 1; g++) {

					a = a * ara[j];
				}
				cout << "A" << j + 1 << "в степени " << "=" << a << endl;
			}
		}
		void series28() {
			int size, b = 0;
			cin >> size;
			int ara[1000]{};
			for (int i = 0; i < size; i++) {
				cin >> ara[i];
			}
			for (int j = 0; j < size; j++) {
				int a = 1;
				b = size - j;
				for (int g = 1; g <= b; g++) {

					a = a * ara[j];
				}
				cout << "A" << j + 1 << "в степени " << "=" << a << endl;
			}

		}
		void series29() {
			int size, b = 0, k;
			cin >> k >> size;
			int ara[1000]{};
			for (int i = 0; i < k; i++) {
				cout << "набор " << i + 1 << endl;
				for (int j = 0; j < size; j++) {
					cout << "элемент " << j + 1 << endl;
					cin >> ara[j];
					b += ara[j];
				}
			}
			cout << b;
		}
		void series30() {
			int size, b = 0, k;
			cin >> k >> size;
			int ara[1000]{};
			for (int i = 0; i < k; i++) {
				cout << "набор " << i + 1 << endl;
				b = 0;
				for (int j = 0; j < size; j++) {
					cout << "элемент " << j + 1 << endl;
					cin >> ara[j];
					b += ara[j];
				}
				cout << "сумма " << i + 1 << " набора=" << b << endl;
			}
		}
		void series31() {
			int size, b = 0, a = 0, k;
			cin >> k >> size;
			int ara[1000]{};
			for (int i = 0; i < k; i++) {
				cout << "набор " << i + 1 << endl;
				for (int j = 0; j < size; j++) {
					cout << "элемент " << j + 1 << endl;
					cin >> ara[j];
					if (ara[j] == 2) {
						++b;
					}
				}
				if (b > 0) {
					b = 1;
				}
				a += b;
			}
			if (a > 0) {
				cout << a;
			}
			else {
				cout << false;
			}
		}
		void series32() {
			int size, b = 0, a = 0, k;
			cin >> k >> size;
			int ara[1000]{};
			for (int i = 0; i < k; i++) {
				cout << "набор " << i + 1 << endl;
				b = 0;

				for (int j = 0; j < size; j++) {
					cout << "элемент " << j + 1 << endl;
					cin >> ara[j];
					if (ara[j] == 2) {
						++b;
						a = j + 1;
					}
					if (b == 1) {
						cout << "первый элемент который равен 2=" << a << endl;
					}
					if (b == 0) {
						cout << "в данном наборе нет такого элемента" << endl;
					}

				}

			}

		}
		void series33() {
			int size, b = 0, a = 0, k;
			cin >> k >> size;
			int ara[1000]{};
			for (int i = 0; i < k; i++) {
				cout << "набор " << i + 1 << endl;
				b = 0;

				for (int j = 0; j < size; j++) {
					cout << "элемент " << j + 1 << endl;
					cin >> ara[j];
					if (ara[j] == 2) {
						++b;
						a = j + 1;
					}

				}
				if (b == 1) {
					cout << "последний элемент который равен 2=" << a << endl;
				}
				if (b == 0) {
					cout << "в данном наборе нет такого элемента" << endl;
				}

			}
		}
		void series34() {
			int size, b = 0, a = 0, k;
			cin >> k >> size;
			int ara[1000]{};
			for (int i = 0; i < k; i++) {
				cout << "набор " << i + 1 << endl;
				b = 0;

				for (int j = 0; j < size; j++) {
					cout << "элемент " << j + 1 << endl;
					cin >> ara[j];
					a += ara[j];
					if (ara[j] == 2) {
						++b;

					}

				}

				if (b > 0) {

					cout << "сумма элементов=" << a << endl;
				}
				else {
					cout << false;
				}
			}
		}
