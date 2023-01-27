/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 15:39:05 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/27 15:55:55 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP


class Base
{
	public:
			virtual ~Base();


			Base * generate(void);
			void identify(Base* p);
			void identify(Base& p);
}

#endif;



ctx.send('dawda')

ctx.defer('je pense trop' , time_out=5)
action x 40
ctx.respond('sasad', ephemer=true)