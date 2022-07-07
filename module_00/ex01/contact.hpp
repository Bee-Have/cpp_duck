/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 22:10:19 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/07 19:48:54 by amarini-         ###   ########.fr       */
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

	// methodes 
		void	new_contact(int nbr);

	// encapsulation of private var
		// contact infos
		std::string	get_first_name() const;
		void		set_first_name(std::string value);
		std::string	get_last_name() const;
		void		set_last_name(std::string value);
		std::string	get_nickname() const;
		void		set_nickname(std::string value);
		std::string	get_phone_number() const;
		void		set_phone_number(std::string value);
		std::string	get_darkest_secret() const;
		void		set_darkest_secret(std::string value);
		// indexing
		int			get_index() const;
		void		set_index(int value);
		int			get_oldest() const;
		void		set_oldest(int value);

	private:
	// attributes
		// contact infos
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
		// indexing
		int			_index;
		int			_oldest;
};

#endif
