/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 22:06:59 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/04 20:12:03 by amarini-         ###   ########.fr       */
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

	// attributes
		Contact	contacts[8];

	// methods
		void	add_contact();
		int		get_oldest_contact() const;
		void	print_phonebook()const;
		void	search();

	// encaplusation of private var
		int		get_nbr_contacts() const;
		void	set_nbr_contacts(int value);

	private:
		int	_nbr_contacts;
};

#endif
