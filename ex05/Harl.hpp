/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 15:00:42 by rjeong            #+#    #+#             */
/*   Updated: 2023/07/27 15:00:43 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl {
private:
	void debug(void);

	void info(void);

	void warning(void);

	void error(void);

public:
	void complain(std::string level);
};

# endif
