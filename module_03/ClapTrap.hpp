/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:57:58 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/25 17:38:37 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class ClapTrap
{
	public:
	// Constructors :
		ClapTrap();
		ClapTrap(std::string &name);
		ClapTrap(ClapTrap &cpy);
	// Destructor :
		~ClapTrap();
	// Assignment operator (=) :
		ClapTrap	&operator=(const ClapTrap &assign);

	// Member functions :
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
	// Accessors :
		std::string	get_name(void) const;
		void		set_name(std::string &new_name);
		int			get_hitpts(void) const;
		void		set_hitpts(int &new_hitpts);
		int			get_energypts(void) const;
		void		set_energypts(int &new_energypts);
		int			get_attackdmg(void) const;
		void		set_attackdmg(int &new_attackdmg);

	private:
		std::string	_name;
		int			_hit_pts;
		int			_energy_pts;
		int			_attack_dmg;
};
