#include "UserManager.h"
#include <iostream>

void UserManager::addUser(const User& user) {
    pendingUsers.push_back(user);
    std::cout << "Kullanıcı kayıt isteği eklendi: " << user.getEmail() << std::endl;
}

void UserManager::approveUser(const std::string& email) {
    for (auto it = pendingUsers.begin(); it != pendingUsers.end(); ++it) {
        if (it->getEmail() == email) {
            users.push_back(*it);
            pendingUsers.erase(it);
            std::cout << "Kullanıcı onaylandı: " << email << std::endl;
            return;
        }
    }
    std::cout << "Kullanıcı bulunamadı: " << email << std::endl;
}

void UserManager::listPendingUsers() const {
    std::cout << "Bekleyen kullanıcı kayıtları:" << std::endl;
    for (const auto& user : pendingUsers) {
        std::cout << "Ad: " << user.getName() << ", Email: " << user.getEmail() << std::endl;
    }
}
