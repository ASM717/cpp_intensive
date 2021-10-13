/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 17:04:29 by amuriel           #+#    #+#             */
/*   Updated: 2021/08/26 20:58:02 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#define GREEN "\x1b[32m"
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
