/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 06:29:23 by plee              #+#    #+#             */
/*   Updated: 2022/01/23 01:55:31 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

class Awesome
{
	public:
		Awesome() : _n(0){}
		Awesome(int n): _n(n){}
		bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
		bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
		bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
		bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
		bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
		bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }
		int  getN() {return(_n);}
	private:
		int _n;
};

int	main(void)
{
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;


	std::cout << "--------------------------------" << '\n';
	Awesome j(20);
	Awesome k(30);

	std::cout << "j: " << j.getN() << '\n';
	std::cout << "k: " << k.getN() << '\n';
	swap(j, k);
	std::cout << "-----------after swap-----------" << '\n';
	std::cout << "j: " << j.getN() << '\n';
	std::cout << "k: " << k.getN() << '\n';

	Awesome minAwesome = ::min(j, k);
	std::cout << "min: " << minAwesome.getN() << '\n';
	Awesome maxAwesome = ::max(j, k);
	std::cout << "max: " << maxAwesome.getN() << '\n';

	return 0;
}