//#include <cmath>
#include <SFML/Graphics.hpp>
#include "Camera.h"

int main() {
    int w = 1600, h = 900;
    sf::RenderWindow win(sf::VideoMode(w, h), "3D");
    Camera cam(w, h);
    /*std::vector<Polygon> polygon {
        Polygon(Vec3(-100, -100, 100), Vec3(-100, 100, 100), Vec3(100, 100, 100)),
        Polygon(Vec3(100, 100, 100), Vec3(100, -100, 100), Vec3(-100, -100, 100)),

        Polygon(Vec3(-100, -100, 300), Vec3(-100, 100, 300), Vec3(100, 100, 300)),
        Polygon(Vec3(100, 100, 300), Vec3(100, -100, 300), Vec3(-100, -100, 300)),

        Polygon(Vec3(-100, 100, 100), Vec3(-100, 100, 300), Vec3(-100, -100, 300)),
        Polygon(Vec3(100, 100, 100), Vec3(100, 100, 300), Vec3(100, -100, 300)),

        Polygon(Vec3(100, -100, 100), Vec3(100, -100, 300), Vec3(-100, -100, 300)),
        Polygon(Vec3(100, 100, 100), Vec3(100, 100, 300), Vec3(-100, 100, 300)),

        Polygon(Vec3(-100, -100, 100), Vec3(-100, -100, 300), Vec3(100, -100, 300))
    };*/
    std::vector<Polygon> model {
        Polygon(Vec3(-100, -100, 100), Vec3(-100, 100, 100), Vec3(100, 100, 100)),
        Polygon(Vec3(100, 100, 100), Vec3(100, -100, 100), Vec3(-100, -100, 100))
    };
    Vec3 offset(0.0f);
    float a = 0.0f;
    while (win.isOpen()) {
        sf::Event e;
        while (win.pollEvent(e)) {
            if (e.type == sf::Event::Closed) win.close();
            /*if (e.type == sf::Event::KeyPressed) {
                switch(e.key.code) {
                    case sf::Keyboard::W: offset.z += 10.0f; break;
                    case sf::Keyboard::S: offset.z -= 10.0f; break;
                    case sf::Keyboard::D: offset.x += 10.0f; break;
                    case sf::Keyboard::A: offset.x -= 10.0f; break;
                    case sf::Keyboard::Q: offset.y -= 10.0f; break;
                    case sf::Keyboard::Z: offset.y += 10.0f; break;
                }
            }*/
        }
        win.clear(sf::Color::White);
        std::vector<Polygon> moved;
        moved.resize(model.size());
        Polygon::Move(model, moved, offset);
        cam.Draw(moved, win, a, 0.0f, 0.0f);
        win.display();
        a += 0.01f;
    }
    return 0;
}
