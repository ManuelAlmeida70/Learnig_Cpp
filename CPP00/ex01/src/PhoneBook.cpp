/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalmeid <maalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:06:25 by maalmeid          #+#    #+#             */
/*   Updated: 2025/05/02 11:37:56 by maalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() : count(0), oldest(0) {}

void PhoneBook::addContact(const Contact& contact)
{
    if (count < 8)
    {
        contacts[count] = contact;
        count++;
    }
    else
    {
        contacts[oldest] = contact;
        oldest = (oldest + 1) % 8;
    }
}

void PhoneBook::displayContactList() const
{
    std::cout << std::setw(40) << std::string(43, '-') << std::endl;
    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "Nickname" << "|" << std::endl;
    std::cout << std::setw(40) << std::string(43, '-') << std::endl;

    for (int i = 0; i < count; i++)
    {
        std::cout << std::setw(10) << i << "|";

        formatField(contacts[i].getFirstName());
        formatField(contacts[i].getLastName());
        formatField(contacts[i].getNickname());
        std::cout << std::endl;
        
        if (i < count - 1)
            std::cout << std::string(43, '.') << std::endl;
    }
}


void PhoneBook::displayContact(int index) const
{
    if (index < 0 || index >= count)
    {
        std::cout << "Invalid index!" << std::endl;
        return;
    }

    std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
    std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
    std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
    std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contacts[index].getDarkSecret() << std::endl;
}


void PhoneBook::searchContact() const
{
    int index;

    if (count == 0)
    {
        std::cout << "PhoneBook is empty!" << std::endl;
        return;
    }

    displayContactList();

    std::cout << "\nEnter the index of the contact you want to display: ";
    std::cin >> index;

    std::cin.ignore(1000, '\n');
    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "Invalid input!" << std::endl;
        return;
    }

    displayContact(index);
}

void PhoneBook::formatField( const std::string& field) const
{
    if (field.length() > 10)
        std::cout << std::setw(10) << field.substr(0, 9) + "." << "|";
    else
        std::cout << std::setw(10) << field << "|";
}