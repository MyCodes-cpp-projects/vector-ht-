// vector(HT).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <ctime>
int main()
{
	srand(time(0));
	int N;
	std::cout << "HEEEEEEEEEEEEY man, wanna some WEEE... Vector? Well, enter vector capacity \n->> ";
	std::cin >> N;
	std::cout << std::endl;
	std::vector<int> v1(N);
	std::cout << "Well, we creat him! Enter range of number what you want to generate (from A to B) \n>>";
	int n1,n2;
	std::cin >> n1 >> n2;
	std::cout << std::endl;
	int buff = 0;
	for (int i = 0; i < N; i++)
	{
		buff = rand() % n2 + n1;
		if (buff <= n2)
		{
			v1[i] = buff;
		}
		else
		{
			v1[i] = buff - n1 + 1;
		}
		
	}
	std::cout << "All numbers in vector: " << std::endl;
	for (int i = 0; i < N; i++)
	{
		std::cout << v1[i] << " ";

	}
	std::cout << "\n\n" << std::endl;
}
