/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 17:04:47 by amuriel           #+#    #+#             */
/*   Updated: 2021/08/26 18:48:42 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#define RED		"\x1b[31m"
#define GREEN	"\x1b[32m"
#define YEL		"\x1B[33m"

#include <iostream>

class Karen
{
private:
	void debug( void );
	void info (void );
	void warning( void );
	void error( void );
	std::string m_level[4];
public:
	Karen(void);
	~Karen();
	void complain( std::string level );
};

#endif

