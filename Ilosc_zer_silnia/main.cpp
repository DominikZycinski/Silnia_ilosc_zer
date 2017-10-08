//Dominik Zycinski
//Silnia
//26.06.2017


#include <iostream>


int main()
{

	long long x;
	long long n;
	std::cin >> n;


	do
	{
		long long zera = 0;
		std::cin >> x;


		for (long long i = 5; x / i >= 1; i = i * 5)
		{
			zera += x / i;
		}

		std::cout << zera << std::endl;

		n--;
	} while (n > 0);


	return 0;
}