/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 13:21:47 by amarini-          #+#    #+#             */
/*   Updated: 2022/11/20 14:22:23 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Converter
{
	public:
	// Constructors :
		Converter();
		Converter(Converter &cpy);
	// Destructor :
		~Converter();
	// Assignment operator :
		Converter	&operator=(Converter &assign);
	// Accessors :
		std::string	get_type() const;
		char		get_type_char() const;
		int			get_type_int() const;
		float		get_type_float() const;
		double		get_type_double() const;
	// Methods :
		void	print_values() const;
		void	find_true_type(std::string &str);
		void	convert_to_all_types();

	private:
	// Attributes :
		std::string	type;
		char		type_c;
		int			type_i;
		float		type_f;
		double		type_d;
};
