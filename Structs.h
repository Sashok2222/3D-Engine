#ifndef INC_3D_STRUCTS_H
#define INC_3D_STRUCTS_H
#include <vector>
#include <cmath>


struct Vec2 {
    float x, y;
    Vec2() : x(0), y(0) {}
    Vec2(float val) : x(val), y(val) {}
    Vec2(float _x, float _y) : x(_x), y(_y) {}
};

struct Vec3 {
    float x, y, z;
    static void RotateXY(Vec3& in, Vec3& out, float angle) {
        float radians = angle * 3.14f / 180.0f;
        out.x = in.x * cosf(radians) - in.y * sinf(radians);
        out.y = in.x * sinf(radians) + in.y * cosf(radians);
        out.z = in.z;
    }
    static void RotateXZ(Vec3& in, Vec3& out, float angle) {
        float radians = angle * 3.14f / 180.0f;
        out.x = in.x * cosf(radians) - in.z * sinf(radians);
        out.y = in.y;
        out.z = in.x * sinf(radians) + in.z * cosf(radians);
    }
    static void RotateYZ(Vec3& in, Vec3& out, float angle) {
        float radians = angle * 3.14f / 180.0f;
        out.x = in.x;
        out.y = in.y * cosf(radians) - in.z * sinf(radians);
        out.z = in.y * sinf(radians) + in.z * cosf(radians);
    }
    Vec3() : x(0), y(0), z(0) {}
    Vec3(float val) : x(val), y(val), z(val) {}
    Vec3(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}
};

class Polygon {
public:
    Polygon(Vec3 v0, Vec3 v1, Vec3 v2) {
        vertices[0] = v0;
        vertices[1] = v1;
        vertices[2] = v2;
    }
    Polygon() {
        for(int i = 0; i < 3; i++) {
            vertices[i].x = 0.0f;
            vertices[i].y = 0.0f;
            vertices[i].z = 0.0f;
        }
    }
    static void Move(std::vector<Polygon>& mesh, std::vector<Polygon>& out, Vec3 offset) {
        int i = 0;
        for (const Polygon& poly : mesh) {
            Polygon outPoly;
            for (int j = 0; j < 3; j++) {
                outPoly.vertices[j].x = poly.vertices[j].x + offset.x;
                outPoly.vertices[j].y = poly.vertices[j].y + offset.y;
                outPoly.vertices[j].z = poly.vertices[j].z + offset.z;
            }
            out[i] = outPoly;
            i++;
        }
    }

    static void Move(Polygon& poly, Polygon& out, Vec3 offset) {
        for (int i = 0; i < 3; i++) {
            out.vertices[i].x = poly.vertices[i].x + offset.x;
            out.vertices[i].y = poly.vertices[i].y + offset.y;
            out.vertices[i].z = poly.vertices[i].z + offset.z;
        }
    }
    Vec3 vertices[3];
};


#endif //INC_3D_STRUCTS_H585
