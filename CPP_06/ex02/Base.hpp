/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 15:39:05 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/30 14:32:29 by jcarlen          ###   ########.ch       */
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
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif