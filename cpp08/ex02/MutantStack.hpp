#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::deque<T>::iterator iterator;
	typedef typename std::deque<T>::const_iterator const_iterator;
	typedef std::reverse_iterator<iterator>       reverse_iterator;
	typedef std::reverse_iterator<const_iterator>       const_reverse_iterator;
	iterator	begin() throw() { return (std::stack<T>::c.begin()); }
    const_iterator	begin() const throw() { return (std::stack<T>::c.begin()); }
    iterator	end() throw() { return (std::stack<T>::c.end()); }
    const_iterator	end() const throw(){ return (std::stack<T>::c.end()); }
    reverse_iterator	rbegin() throw() { return (std::stack<T>::c.rbegin()); }
    const_reverse_iterator	rbegin() const throw() { return (std::stack<T>::c.rbegin()); }
    reverse_iterator	rend() throw(){ return (std::stack<T>::c.rend()); }
    const_reverse_iterator	rend() const throw() { return (std::stack<T>::c.rend()); }
};

#endif