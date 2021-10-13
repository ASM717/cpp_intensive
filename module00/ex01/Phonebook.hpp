/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 10:48:11 by amuriel           #+#    #+#             */
/*   Updated: 2021/08/23 11:08:42 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#define ARR 8

class Phonebook
{
private:
	Contact contact[ARR];
	int count;
	int check_num;
public:
	Phonebook();
	~Phonebook();
	void add();
	void search();
};

#endif
