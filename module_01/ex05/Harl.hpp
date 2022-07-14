/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:15:17 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/14 14:03:18 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
 
class Harl
{
	private:
		void	debug();
		void	info();
		void	warning();
		void	error();

	public:
		// constructor
		Harl();
		~Harl();
		void	complain(std::string level);
};
