/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 22:10:19 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/04 20:07:56 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class	Contact
{
	public:
	// constructor & destructor
		Contact();
		~Contact();

	// attributes
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		int			phone_number;
		std::string	darkest_secret;
		int			index;

	// methodes 
		void	new_contact(int nbr);

	// encapsulation of private var
		int		get_oldest()const;
		void	set_oldest(int value);

	private:
		int	_oldest;
};

#endif
