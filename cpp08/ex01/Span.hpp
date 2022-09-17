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
    Span& Span(const Span& ref);
    ~Span();
    unsigned int shortestSpan(void);
    unsigned int longestSpan(void);
    void addNumber(unsigned int num) throw(AddNumberExecption);
    void myGenerate(std::vector<unsigned int>::iterator front, std::vector<unsigned int>::iterator end);
    class AddNumberExecption : public exception
    {
    public:
        const char* what() const thorw()
        {
            return (" is already stored");
        }
    };
};

#endif