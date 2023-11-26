#include "Camera.h"

Camera::Camera(int _w, int _h) {
    w = _w;
    h = _h;
}

void DrawTriangle(Vec2 coords[3], sf::RenderWindow& win) {
    sf::VertexArray line0(sf::Lines, 2);
    sf::VertexArray line1(sf::Lines, 2);
    sf::VertexArray line2(sf::Lines, 2);

    line0[0].position = sf::Vector2f(coords[0].x, coords[0].y);
    line0[1].position = sf::Vector2f(coords[1].x, coords[1].y);

    line1[0].position = sf::Vector2f(coords[1].x, coords[1].y);
    line1[1].position = sf::Vector2f(coords[2].x, coords[2].y);

    line2[0].position = sf::Vector2f(coords[2].x, coords[2].y);
    line2[1].position = sf::Vector2f(coords[0].x, coords[0].y);

    line0[0].color = sf::Color::Black;
    line0[1].color = sf::Color::Black;
    line1[0].color = sf::Color::Black;
    line1[1].color = sf::Color::Black;
    line2[0].color = sf::Color::Black;
    line2[1].color = sf::Color::Black;

    win.draw(line0);
    win.draw(line1);
    win.draw(line2);
}

void Camera::Draw(std::vector<Polygon> &mesh, sf::RenderWindow &win, float angleXY, float angleXZ, float angleYZ) {
    for (const auto& poly : mesh) {
        Vec2 coords[mesh.size()];
        for (int j = 0; j < 3; j++) {
            Vec3 toProj = poly.vertices[j];
            Vec3 toProjMove;

            Vec3 toProjRotXY;
            Vec3 toProjRotXZ;
            Vec3 toProjRotFinal;
            Vec3::RotateXY(toProj, toProjRotXY, angleXY);
            Vec3::RotateXZ(toProjRotXY, toProjRotXZ, angleXZ);
            Vec3::RotateYZ(toProjRotXZ, toProjRotFinal, angleYZ);
            toProjMove = toProjRotFinal;
            toProjMove.z += 1.5f;
            Vec2 proj = Vec2(toProjMove.x * (200 / toProjMove.z) + w / 2,
                    toProjMove.y * (200 / toProjMove.z) + h / 2);
            coords[j] = proj;
        }
        DrawTriangle(coords, win);
    }
}