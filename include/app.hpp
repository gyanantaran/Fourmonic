// app.hpp
#pragma once

#include "SFML/Graphics/RenderWindow.hpp"
#include "SFML/System/String.hpp"
#include "SFML/Window/VideoMode.hpp"

class app {
public:
    app();

    void run();

private:
    void handle_events();
    void update(float delta_time);
    void handle_collisions();
    void draw();

    sf::VideoMode window_mode_;
    sf::String window_title_;
    sf::RenderWindow window_;
    sf::Vector2u window_size_ = {800, 500};
    sf::Color window_background_color_;

    sf::Clock game_clock_;
};
