/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrizakov <mrizakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:13:31 by mrizakov          #+#    #+#             */
/*   Updated: 2024/02/01 18:56:48 by mrizakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

class Contact {
    public:
    std::string name;
    std::string last_name;
    std::string nickname;
    std::string secret;
    std::string phone;

    
}


class Phonebook {

public:
    Phonebook(void);
    ~Phonebook(void);
    Contact contact_list[8];

    static int getNbContacts(void);

private:
    static int _nbContacts;

}

#endif