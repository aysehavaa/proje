#ifndef USER_MANAGER_H
#define USER_MANAGER_H

#include "User.h"
#include <vector>

class UserManager {
public:
    void addUser(const User& user);
    void approveUser(const std::string& email);
    void listPendingUsers() const;

private:
    std::vector<User> users;
    std::vector<User> pendingUsers;
};

#endif
