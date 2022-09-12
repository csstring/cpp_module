#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>

class Brain
{
private:
	std::string ideas[100];
public:
	Brain();
	Brain(const Brain &copy);
	Brain& operator=(const Brain &ref);
	~Brain();
	void	setIdeas(int i, std::string temp);
	std::string	getIdeas(int i) const;
	void	showIdeas(void) const;
	void	initIdeas(void);
};

#endif