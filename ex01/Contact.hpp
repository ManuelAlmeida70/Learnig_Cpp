#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
    public:
        void setName( std::string );
        std::string getName();
        void setLastName( std::string);
        std::string getLastName();
        void setNickname( std::string);
        std::string getNickname();
        void setNumber( std::string);
        std::string getNumber();
    private:
        std::string name;
        std::string lastName;
        std::string nickname;
        std::string number;
};

#endif