#include <iostream>
#define CPP2_PRIME_UPPER_LIMIT 1000000 //�T������l�̏���l�B

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

// nth_prime �֐�
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
 std::cout << "���o�͗�̓����F" << "92809" << std::endl;
 // �ȉ��A���l�ɁA���o�͗�ʂ�ɂȂ邩�m�F����B
return 0;
}
