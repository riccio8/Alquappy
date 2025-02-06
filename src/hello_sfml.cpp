#include <SFML/Graphics.hpp>

int main() {
    // Creazione della finestra
    sf::RenderWindow window(sf::VideoMode({800, 600}), "SFML Hello World");

    // Caricamento del font
    sf::Font font;
    if (!font.openFromFile("arial.ttf")) {
        return -1;
    }

    // Creazione del testo
    sf::Text text(font, "Hello, World!", 50);
    text.setPosition({200.f, 250.f});
    text.setFillColor(sf::Color::White);

    // Loop principale
    while (window.isOpen()) {
        // Gestione degli eventi
        while (auto event = window.pollEvent()) {
            if (event->type == sf::Event::Closed)
                window.close();
        }
 
        // Pulizia della finestra e rendering
        window.clear(sf::Color::Black);
        window.draw(text);
        window.display();
    }

    return 0;
}
