#include "console.hpp"
#include "page.hpp"
#include "perform.hpp"

#include <iostream>

using namespace std;

int main() {
    User user("SON");
    Game game;
    game.start(user);
    return 0;
}
