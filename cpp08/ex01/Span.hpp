#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>
#include <exception>
#include <iterator>

class Span
{
private:
    unsigned int maxSize;
    std::vector<unsigned int> myVector;
public:
    Span();
    Span(unsigned int maxSize);
    Span(const Span& copy);
    Span& operator=(const Span& ref);
    ~Span();
    unsigned int shortestSpan(void) throw(SpanExecption);
    unsigned int longestSpan(void) throw(SpanExecption);
    void addNumber(unsigned int num) throw(AddNumberExecption, FullStoredExecption);
	void initNumberRange(unsigned int count) throw(FullStoredExecption);
	void displayVector();
    class SpanExecption : public std::exception
    {
    public:
        const char* what() const throw()
		{
			return ("we can't calculate a Span");
		}
	};
	class AddNumberExecption : public std::exception
    {
    public:
		const char* what() const throw()
		{
			return (" is already stored");
		}
	};
	class FullStoredExecption : public std::exception
    {
    public:
        const char* what() const throw()
        {
            return ("container is already full");
        }
    };
};

#endif