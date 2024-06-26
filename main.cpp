#include "UserManager.h"
#include <iostream>

int main() {
    UserManager userManager;

    User superUser("Admin", "admin@example.com", UserRole::SUPER_USER);
    User consultant("Consultant", "consultant@example.com", UserRole::CONSULTANT);
    User client("Client", "client@example.com", UserRole::CLIENT);

    userManager.addUser(superUser);
    userManager.addUser(consultant);
    userManager.addUser(client);

    std::cout << "\n--- Bekleyen Kullanıcılar ---" << std::endl;
    userManager.listPendingUsers();

    std::cout << "\n--- Kullanıcı Onaylama ---" << std::endl;
    userManager.approveUser("consultant@example.com");

    std::cout << "\n--- Bekleyen Kullanıcılar ---" << std::endl;
    userManager.listPendingUsers();

    return 0;
}
