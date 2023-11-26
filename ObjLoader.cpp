//
// Created by SUPER_COMP on 26.11.2023.
//

#include "ObjLoader.h"

void ObjLoader::loadObj(const char *name) {
    std::ifstream file(name);
    std::vector<Vec3> tempVertices; // тимчасовий масив вершин

    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string type;
        iss >> type;

        if (type == "v") {
            float x, y, z;
            iss >> x >> y >> z;
            tempVertices.push_back(Vec3(x, y, z));
        } else if (type == "f") {
            // Опрацювання граней
            std::string v1, v2, v3;
            iss >> v1 >> v2 >> v3;

            int index1, index2, index3;
            sscanf(v1.c_str(), "%d", &index1);
            sscanf(v2.c_str(), "%d", &index2);
            sscanf(v3.c_str(), "%d", &index3);

            vertices.push_back(tempVertices[index1 - 1]);
            vertices.push_back(tempVertices[index2 - 1]);
            vertices.push_back(tempVertices[index3 - 1]);
        }
        // Додайте обробку інших типів даних .obj, якщо необхідно (нормалі, текстурні координати і т.д.)
    }
}