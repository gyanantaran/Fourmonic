// app.hpp
#pragma once

#include "SFML/Graphics/RenderWindow.hpp"
#include "SFML/System/String.hpp"
#include "SFML/Window/VideoMode.hpp"

class app {
public:
    app();
    ~app();

    void run();

private:
    void handle_events();
    void update(float delta_time);
    void handle_collisions();
    void draw();

    sf::RenderWindow window_;

    sf::Color window_background_color_;

    sf::Clock game_clock_;
};
