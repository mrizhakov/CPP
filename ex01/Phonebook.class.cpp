/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrizakov <mrizakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:13:37 by mrizakov          #+#    #+#             */
/*   Updated: 2024/02/02 17:52:17 by mrizakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <limits>




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

void Phonebook::AddContact(void) {
    unsigned long long verified_phone_number;
    char *endptr; // Pointer to the character after the converted number
    
    std::cout << "Input contact information one line at a time: " << std::endl;
    std::cout << "1. First name" << std::endl;
    std::cin >> contact_list[getNbContacts()].first_name;
    std::cout << "2. Last name" << std::endl;
    std::cin >> contact_list[getNbContacts()].last_name;
    std::cout << "3. Nickname" << std::endl;
    std::cin >> contact_list[getNbContacts()].nickname;
    std::cout << "4. Phone number" << std::endl;
    std::cin >> contact_list[getNbContacts()].phone_number;
    verified_phone_number = strtoull(contact_list[getNbContacts()].phone_number.c_str(), &endptr, 10);
    while (*endptr != '\0') {
        std::cout << "Invalid phone number, try again" << std::endl;
        std::cin >> contact_list[getNbContacts()].phone_number;
        verified_phone_number = strtoull(contact_list[getNbContacts()].phone_number.c_str(), &endptr, 10);
    }
    std::cout << "5. Darkest secret" << std::endl;
    std::cin >> contact_list[getNbContacts()].secret;
    // if (first_name.empty() || last_name.empty() ||  nickname.empty() ||  phone_number.empty() ||  secret.empty())
    //     std::cout << "Data invalid, contact not added!" << std::endl;
    // else 
    // {
    //     my_phonebook.AddContact(first_name, last_name, nickname, phone_number, secret);
    //     my_phonebook.incrementContacts();
        
    // }
    std::cout << "Contact added succesfully!" << std::endl;
    incrementContacts();
    if (getNbContacts() == 8)
        _nbContacts = 0;
    return;
}
void Phonebook::incrementContacts(void) {
    if (this->_nbContacts == 8)
        this->_nbContacts = 0;
    else
        this->_nbContacts++;
    return;
}

void Phonebook::DisplayContact(unsigned int search_number) const {
    std::cout << "|Index     |First name|Last name | Nickname |" << std::endl;

    
    std::cout << "|" << search_number << "         |";
    if (contact_list[search_number].first_name.size() > 10)
        std::cout << contact_list[search_number].first_name.substr(0,9) << ".";
    else
        std::cout << std::setw(10) << contact_list[search_number].first_name;
    std::cout << "|";
    if (contact_list[search_number].last_name.size() > 10)
        std::cout << contact_list[search_number].last_name.substr(0,9) << ".";
    else
        std::cout << std::setw(10) << contact_list[search_number].last_name;
    std::cout << "|";
    if (contact_list[search_number].nickname.size() > 10)
        std::cout << contact_list[search_number].nickname.substr(0,9) << ".";
    else
        std::cout << std::setw(10) << contact_list[search_number].nickname;
    std::cout << "|";
    std::cout << std::endl;




    // std::cout << "Contact number " << search_number << " info:" << std::endl;
    // std::cout << "First name: " << contact_list[search_number].first_name << std::endl;
    // std::cout << "Last name: " <<  contact_list[search_number].last_name << std::endl;
    // std::cout << "Nickname: " << contact_list[search_number].nickname << std::endl;
    // std::cout << "Phone number: " << contact_list[search_number].phone_number << std::endl;
    // std::cout << "Darkest secret: " << contact_list[search_number].secret << std::endl;
}





int main(void)
{
    Phonebook   my_phonebook;
    std::string command = "";
    std::string first_name  = "";
    std::string last_name = "";
    std::string nickname = "";
    std::string secret = "";
    std::string phone_number = "";
    int i = 0;
    int search_number;
    

    //char *endptr; // Pointer to the character after the converted number
    //unsigned long long verified_phone_number;


    while (true)
    {
        //system("clear");
        std::cout << "To use the Phonebook, use commands or aliases:" << std::endl;
        std::cout << "1. ADD" << std::endl;
        std::cout << "2. SEARCH" << std::endl;
        std::cout << "3. EXIT" << std::endl;
        std::cout << "4. DISPLAY ALL" << std::endl;
        
        std::cin >> command;
        

        if (command == "EXIT" || command == "3")
            break ;
        else if (command == "ADD" || command == "1" )
            my_phonebook.AddContact();
        else if (command == "SEARCH" || command == "2")
        {
            std::cout << "Input the number of the contact you would like to display: " << std::endl;
            std::cin >> search_number;
            while (!(search_number >= 0 && search_number <= 7))
            {
                std::cout << "This phonebook has only up to 8 contacts, please input numbers 0-7 (yes, this a 0-based phonebook): " << std::endl;
                std::cin >> search_number;
            }
            if (search_number >= 0 && search_number <= 7)
            {
                my_phonebook.DisplayContact(search_number);
            }
            search_number = 0;
        }
        else if (command == "DISPLAY ALL" || command == "4")
        {
            i = 0;
            while (i != 8)
            {
                my_phonebook.DisplayContact(i);
                i++;
            }
            //command = "";   
        }
        else
        std::cin.ignore();
    }
    return(0);
}





