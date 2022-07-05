/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 22:06:59 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/05 19:37:00 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"

class Phonebook
{
	public:
	// contructor & destructor
		Phonebook();
		~Phonebook();

	// methods
		int		get_oldest_contact() const;
		void	print_phonebook()const;
		void	search();

	// encaplusation of private var
		Contact	get_contact(int index) const;
		void	set_contact();
		int		get_nbr_contacts() const;
		void	set_nbr_contacts(int value);

	private:
	// attributes
		Contact	_contacts[8];
		int	_nbr_contacts;
};

#endif
