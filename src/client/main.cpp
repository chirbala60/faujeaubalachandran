#include <iostream>
#include "string.h"
// Les lignes suivantes ne servent qu'à vérifier que la compilation avec SFML fonctionne
#include <SFML/Graphics.hpp>

void testSFML() {
    sf::Texture texture;
}

// Fin test SFML

#include "state.h"

using namespace std;
using namespace state;

int main(int argc,char* argv[])
{
    Exemple exemple;
    exemple.setX(53);

    if (argv[1] &&!strcmp(argv[1],"hello")){
      cout << "Bonjour le monde!" << endl;
    } else {
      cout << "Please type 'hello'!" << endl;
    }

    return 0;
}
