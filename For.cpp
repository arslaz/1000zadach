void for2() {
	int A, B;
	int N = 0;
	int i;
	cin >> A;
	cin >> B;
	cout << "в порядке возрастания";
	for (i = A; i <= B; ++i) {
		cout << i << endl;
		N++;
	}
	cout << N;
	return(0);

}
void for3() {
	int A, B;
	int N = 0;
	int i;
	cin >> A;
	cin >> B;
	for (i = --B; i > A; --i) {
		cout << i << endl;
		N++;
	}
	cout << N;
	return(0);
}
void for4() {
	int i;
	float a;
	cin >> a;
	for (i = 0; i <= 10; i++) {
		a = a * 2;
		cout << a << endl;
	}
	return(0);
}
void for5() {
	float i;
	float a;
	cin >> a;
	for (i = 0; i <= 10; i++) {

		cout << i / 10 << "kg:" << a * (i / 10) << endl;
	}
	return(0);
}
void for6() {
	float i;
	float a;
	cin >> a;
	for (i = 1.2; i <= 2; i += 0.2) {

		cout << i << "kg:" << a * i << endl;
	}
	return(0);

}
void for7,8,9() {
	int A, B, sum, proi, sumkvad;
	int i;
	sum = 0;
	proi = 1;
	sumkvad = 0;
	cin >> A >> B;
	for (i = A; i <= B; ++i) {
		sum += i;
		proi = proi * i;
		sumkvad += (i * i);
	}
	cout << "сумма: " << sum << endl << "произведение:" << proi << endl << "сумма квадратов:" << sumkvad;
	return(0);
}
void for10() {
	int N;
	float sum;
	cin >> N;
	sum = 0;
	for (int i = 1; i <= N; ++i) {
		sum += 1 / (float)i;
	}cout << sum;
	return(0);
}
void for11() {
	setlocale(LC_ALL, "Rus");
	int i, N, sum;
	cin >> N;
	sum = 0;
	for (i = 0; i <= N; i++) {
		sum += ((N + i) * (N + i));
	}
	cout << sum;

}
void for12() {
	float n, mn, a;
	a = 1.1;
	mn = 1;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		mn *= a;
		a += 0.1;
	}cout << mn;

}
void for15,16() {
	int n, a, b = 1;
	cin >> n >> a;
	for (int i = 1; i <= n; i++) {
		b *= a;
		cout << "a в степени " <<i<<":" << b<<endl;
	}
	
}
void for17() {
	int n, a, b, g = 1;
	cin >> n >> a;
	b = a;
	for (int i = 2; i <= n; i++) {
		b *= a;
		g += b;
	}
	cout << g;
}
void for19() {
	int n, a;
	a = 1;
	cin >> n;
	for (int i = 2; i <= n; i++) {
		a *= i;
	}cout << a;
}
void for20() {
	int n, a, sum;
	sum = 0;
	a = 1;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		a *= i;
		sum += a;

	}cout << sum;

}
void for21() {
	int n, a, sum;
	sum = 0;
	a = 1;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		a *= i;
		sum += 1/a;

	}cout << sum;
}
void for22() {
	float n, a, sum, X;
	cin >> n >> X;
	sum = 1;
	a = 1;

	for (float i = 1; i <= n; ++i) {
		a *= i;
		X *= X;
		sum += X / a;

	}cout << sum;

}
void for25() {
	float  sum, X;
	int n;
	cin >> n >> X;
	float x1 = X;
	sum = X;



	for (float i = 2; i <= n; i++) {

		x1 *= (-1) * X;
		sum += x1 / i;

	}cout << sum;
}
void for26() {
	float  sum, X;
	int n;
	cin >> n >> X;
	float x1 = X;
	sum = X;



	for (float i = 2; i <= n; i++) {

		x1 *= (-1) * X * X;
		sum += x1 / (i * 2 - 1);

	}cout << sum;
}
void for29() {
	int n;
	float a, b, h, rez;
	cin >> n >> a >> b;
	h = (b - a) / n;
	for (int i = 1; i <= n; i++) {

		rez = a + i * h;
		cout << "длина" << i << "отрезка: " << rez << endl;
	}
}
void for31() {

	int n;
	cin >> n;
	float A = 2;
	float a = 2, rez;
	for (int i = 1; i <= n; i++) {

		A = 2 + 1 / a;
		a = A;
		cout << "A" << i << "=" << A << endl;
	}
}
	void for33() {
		int n;
		cin >> n;
		float A = 1;
		float a = 1, b = 1;
		for (int i = 1; i <= n; i++) {

			A = a + b;
			b = a;
			a = A;
			cout << "A" << i << "=" << A << endl;
		}
	}
	void for34() {
		int n;
		cin >> n;
		float A = 1;
		float a = 2, b = 1;
		for (int i = 1; i <= n; i++) {

			A = (a + 2 * b) / 3;
			b = a;
			a = A;
			cout << "A" << i << "=" << A << endl;
		}
	}
	void for35() {
		int n;
		cin >> n;
		float A = 1;
		float a = 1, b = 2, c = 3;
		for (int i = 1; i <= n; i++) {

			A = c + b - 2 * a;
			a = b;
			b = c;
			c = A;
			cout << "A" << i << "=" << A << endl;
		}

	}
	void for36() {
		int n, k;
		cin >> n >> k;
		float rez = 0, f;
		for (int i = 1; i <= n; i++) {
			f = i;
			for (int j = 1; j <= k; j++) {
				f *= f;
			}
			rez += f;
		}cout << rez;
	}
	void for37() {
		int n, rez = 0;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			rez += i * i;
		}cout << rez;
	}
	void for38() {
		int n, rez = 0, a;
		cin >> n;
		for (int i = 1; i <= n; i++) {

			for (int j = 1; j < n; j++) {
				a = i * i;
			}
			rez += a;
		}cout << rez;
	}




