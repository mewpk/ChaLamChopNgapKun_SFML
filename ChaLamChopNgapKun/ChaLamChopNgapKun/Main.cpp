#include <SFML/Graphics.hpp>
#include <stdlib.h>
#include "Menu.h"

using namespace menu;
using namespace sf;
using namespace std;

int main()
{
    ContextSettings settings;
    settings.antialiasingLevel = 8;
    RenderWindow window(VideoMode(1600, 986), "ChaLamChopNgapKun",Style::Default ,settings );
    render Menu;
    Menu.draw();

    sf::Texture texture;
    texture.loadFromFile("src/imgs/bg-under-water.jpg");
    texture.setSmooth(true);
    sf::Sprite sprite(texture);

    // Font
    sf::Text text;
    sf::Font font;

    font.loadFromFile("src/fonts/KaushanScript-Regular.ttf");

    text.setFont(font);
    // set the string to display
    text.setString("ChaLamChopNgapKun");

    // set the character size
    text.setCharacterSize(24); // in pixels, not points!

    // set the color
    text.setFillColor(sf::Color::White);

    // set the text style
    text.setStyle(sf::Text::Bold );

    text.setPosition(700, 493);


    if (font.loadFromFile("src/fonts/KaushanScript-Regular.ttf"))
    {

    }

    if (!texture.loadFromFile("src/imgs/bg-under-water.jpg"))
    {

    }
    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {   
            if (event.type == Event::Closed)
                window.close();
       
        }

        window.clear();
        window.draw(sprite);
        window.draw(text);
      
        
        window.display();
    }

    return 0;
}