/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 22:10:19 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/04 15:31:29 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class	Contact
{
	public:
		Contact();
		~Contact();
		void	new_contact();
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		int			phone_number;
		std::string	darkest_secret;
	// private ?
		int			index;
};

#endif
