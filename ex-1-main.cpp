#include <iostream>
#define CPP2_PRIME_UPPER_LIMIT 1000000 //探索する値の上限値。

bool isPrime(int num)
{
	if (num == 0 || num == 1)
		return false;

	for (int i = 2; i*i < num + 1; i++)
	{
		if (num % i == 0)
			return false;
	}
	return true;
}

// nth_prime 関数
int nth_prime(unsigned int a, unsigned int d, unsigned int n) {

	int count = 0;
	while (true)
	{
		if (isPrime(a)) count++;
		if (count == n) break;
		a += d;
	}
	return a;
}

int nth_prime(unsigned int a, unsigned int d, unsigned int n);
int main() {
 std::cout << nth_prime(367, 186, 151) << std::endl;
 std::cout << "入出力例の答え：" << "92809" << std::endl;
 // 以下、同様に、入出力例通りになるか確認せよ。
return 0;
}
