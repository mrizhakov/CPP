/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrizakov <mrizakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:13:31 by mrizakov          #+#    #+#             */
/*   Updated: 2024/02/02 12:47:13 by mrizakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include<iostream>
# include<string>


class Contact {
    public:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string secret;
    std::string phone;
    Contact(void);
    ~Contact(void);

    
};


class Phonebook {

public:
    Phonebook(void);
    ~Phonebook(void);
    AddContact(void);
    SearchContact(contact_number) const;
    Contact contact_list[8];

    static int getNbContacts(void);

private:
    static int _nbContacts;

};

#endif