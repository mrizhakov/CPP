/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrizakov <mrizakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:13:37 by mrizakov          #+#    #+#             */
/*   Updated: 2024/02/02 12:27:59 by mrizakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Phonebook.class.hpp"

Phonebook::Phonebook(void) {
    std::cout << "Instantiated Phonebook" << std::endl;
    return;
}

Phonebook::~Phonebook(void) {
    std::cout << "Destroyed Phonebook" << std::endl;
    return;
}

Contact::Contact(void) {
    std::cout << "Instantiated Contact" << std::endl;
    return;
}

Contact::~Contact(void) {
    std::cout << "Destroyed Contact" << std::endl;
    return;
}

int Phonebook::_nbContacts = 0;

int main(void)
{
    Phonebook   my_phonebook;
    std::string command;
    return(0);
}





