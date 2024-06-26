#ifndef USER_H
#define USER_H

#include <string>

enum class UserRole {
    SUPER_USER,
    CONSULTANT,
    CLIENT
};

class User {
public:
    User(const std::string& name, const std::string& email, UserRole role);
    std::string getName() const;
    std::string getEmail() const;
    UserRole getRole() const;

private:
    std::string name;
    std::string email;
    UserRole role;
};

#endif
