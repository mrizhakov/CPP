/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrizakov <mrizakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:13:37 by mrizakov          #+#    #+#             */
/*   Updated: 2024/02/02 12:49:16 by mrizakov         ###   ########.fr       */
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

Phonebook::AddContact(first_name, last_name, nickname, phone, secret) {
    Contact[get_NbContacts+].first_name = first_name;
    
    return;
}


int Phonebook::_nbContacts = 0;

int main(void)
{
    Phonebook   my_phonebook;
    std::string command;
    std::cout << "To use the Phonebook, use ADD, SEARCH or EXIT commands" << std::endl;
    std::cin >> command;
    while (true)
    {
    if (command == "EXIT")
        return (0);
    if (command == "ADD")
    {
        
    }   
    
    return(0);
}





