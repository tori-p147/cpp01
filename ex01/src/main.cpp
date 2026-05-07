#include <Zombie.hpp>

int	main(void)
{
	int N = 5;
	Zombie *arr = zombieHorde(N, "z");
	for (int i = 0; i < N; i++)
	{
		arr[i].announce();
	}
	delete[](arr);
	return (0);
}
