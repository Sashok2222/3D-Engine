//#include <cmath>
#include <SFML/Graphics.hpp>
#include "Camera.h"
#include "ObjLoader.h"


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
    std::vector<Polygon> model = {
            Polygon(Vec3(-100, -100, 100), Vec3(-100, 100, 100), Vec3(100, 100, 100)),
            Polygon(Vec3(100, 100, 100), Vec3(100, -100, 100), Vec3(-100, -100, 100))
    };
    Vec3 offset(0.0f);
    float a = 0.0f;
    std::vector<Vec3> vertices;
    ObjLoader loader;
    loader.loadObj("monkey.obj");
    vertices = loader.vertices;
    std::vector<Polygon> test;
    for (int i = 0; i < vertices.size(); i++) {
        if (i + 2 < vertices.size()) {
            test.push_back(Polygon(vertices[i], vertices[i + 1], vertices[i + 2]));
        }
        else {
            test.push_back(Polygon(vertices[i], vertices[i + 1], Vec3(0.0f, 0.0f, 0.0f)));
        }
        if (i + 1 > vertices.size()) {
            test.push_back(Polygon(vertices[i], Vec3(0.0f, 0.0f, 0.0f), Vec3(0.0f, 0.0f, 0.0f)));
        }
    }
    while (win.isOpen()) {
        sf::Event e;
        while (win.pollEvent(e)) {
            if (e.type == sf::Event::Closed) win.close();
            if (e.type == sf::Event::KeyPressed) {
                switch(e.key.code) {
                    case sf::Keyboard::W: offset.z += 0.1f; break;
                    case sf::Keyboard::S: offset.z -= 0.1f; break;
                    case sf::Keyboard::D: offset.x += 0.1f; break;
                    case sf::Keyboard::A: offset.x -= 0.1f; break;
                    case sf::Keyboard::Q: offset.y -= 0.1f; break;
                    case sf::Keyboard::Z: offset.y += 0.1f; break;
                }
            }
        }
        win.clear(sf::Color::White);
        cam.Draw(test, win, a, a, 0.0f);
        win.display();
        a += 0.01f;
    }
    return 0;
}
