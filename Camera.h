#ifndef INC_3D_CAMERA_H
#define INC_3D_CAMERA_H
#include <SFML/Graphics.hpp>
#include "Structs.h"
#include <cmath>

class Camera {
public:
    Camera(int _w, int _h);
    int w, h;
    void Draw(std::vector<Polygon> &mesh, sf::RenderWindow &win, float angleXY, float angleXZ, float angleYZ);
};


#endif //INC_3D_CAMERA_H
