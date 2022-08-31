#include <iostream>
#include <string>
#include <cctype>

class megaphone
{
	private :
		int		argc;
		char	**argv;
	public :
		megaphone(int ac, char **av) : argc(ac), argv(av)
		{}
		void shout(void);
};

void megaphone::shout(void)
{
	std::string temp;

	if (argc == 1)
		std::cout<< "* LOUD AND UNBEARABLE FEEDBACK NOISE *" <<std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			for (int k = 0; argv[i][k] != '\0'; k++)
				temp += toupper(argv[i][k]);
		}
		std::cout<< temp << std::endl;
	}
}

int	main(int ac, char **av)
{
	megaphone temp(ac, av);
	temp.shout();
	return (0);
}