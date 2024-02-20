// Game.cpp
#include "../include/app.hpp"
#include <iostream>
#include "SFML/Graphics/RenderWindow.hpp"
#include "SFML/System/Vector2.hpp"
#include "SFML/Window/Event.hpp"

/*
    Game
This class represents the controller for a "game"
This class is responsible for
*/
app::app() {
    // setting the default `sf::RenderWindow` options
    window_mode_ = sf::VideoMode(window_size_.x, window_size_.y);
    window_title_ = "My window";
    window_.create(window_mode_, window_title_);
    window_background_color_ = sf::Color::White;
}


// runs a game
void app::run() {
    while (window_.isOpen()) {
        const float dt = game_clock_.restart().asSeconds();
        handle_events();
        update(dt);
        draw();
    }
}


// manages events
void app::handle_events() {
    sf::Event event{};
    while (window_.pollEvent(event)) {
        switch (event.type) {
            case sf::Event::Closed:
                window_.close();
                break;
            case sf::Event::KeyPressed:
                switch (event.key.scancode) {
                    case sf::Keyboard::Scan::Scancode::S:
                        std::cout << "S was pressed!\n";
                        break;
                    default:
                        break;
                }
                break;
            case sf::Event::KeyReleased:
                break;
            default:;
                break;
        }
    }
}


// updates the game state
void app::update(const float delta_time) {
    // updating `GameObjects`
}


// draws window
void app::draw() {
    window_.clear(window_background_color_);

    // drawing `GameObjects`

    // flipping the window
    window_.display();
}
