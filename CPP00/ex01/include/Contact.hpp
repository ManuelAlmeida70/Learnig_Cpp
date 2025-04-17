#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact {
    private:
        std::string firsName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkSecret;

    public:
        Contact();
        Contact( std::string fir);
        void setName( std::string );
        void setLastName( std::string);
        void setNickname( std::string);
        void setPhoneNumber( std::string);
        void setDarkSecret( std::string );
        

        std::string getName();
        std::string getLastName();
        std::string getNickname();
        std::string getPhoneNumber();
        std::string getDarkSecret();

        bool isEmpty() const;
};

#endif