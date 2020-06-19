// thanks to : https://github.com/lamphanviet

struct BigInteger {
	static const int BASE = 1000000000; // 10^9
	
	vector<int64> digits;
	
	BigInteger() {
		digits.clear();
		digits.pb(0);
	}
	BigInteger(int64 number) {
		digits.clear();
		do {
			digits.pb(number % BASE);
			number /= BASE;
		} while (number);
	}
	
	BigInteger operator + (const BigInteger &b) const {
		BigInteger res = BigInteger();
		res.digits.resize(max(b.digits.size(), digits.size()));
		int64 remainder = 0;
		rep(i, res.digits.size()) {
			if (i < digits.size()) remainder += digits[i];
			if (i < b.digits.size()) remainder += b.digits[i];
			res.digits[i] = remainder % BASE;
			remainder /= BASE;
		}
		while (remainder) {
			res.digits.pb(remainder % BASE);
			remainder /= BASE;
		}
		return res;
	}
	
	BigInteger operator * (const BigInteger &b) const {
		BigInteger res = BigInteger();
		res.digits = vector<int64>(b.digits.size() + digits.size() - 1, 0);
		rep(i, digits.size()) rep(j, b.digits.size())
			res.digits[i + j] += digits[i] * (int64)b.digits[j];
		int64 remainder = 0;
		rep(i, res.digits.size()) {
			remainder += res.digits[i];
			res.digits[i] = remainder % BASE;
			remainder /= BASE;
		}
		while (remainder) {
			res.digits.pb(remainder % BASE);
			remainder /= BASE;
		}
		return res;
	}
	
	void print() {
		printf("%lld", digits.back());
		repr(i, (int)digits.size() - 1) printf("%09lld", digits[i]);
	}
	
	static BigInteger power(const BigInteger &b, int64 k) {
		if (k == 0) return BigInteger(1);
		if (k == 1) return b;
		BigInteger res = power(b, k / 2);
		res = res * res;
		if (k & 1) return res * b;
		return res;
	}
};

 