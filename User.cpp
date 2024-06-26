#include "User.h"

User::User(const std::string& name, const std::string& email, UserRole role)
    : name(name), email(email), role(role) {}

std::string User::getName() const {
    return name;
}

std::string User::getEmail() const {
    return email;
}

UserRole User::getRole() const {
    return role;
}
