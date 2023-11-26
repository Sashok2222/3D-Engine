//
// Created by SUPER_COMP on 26.11.2023.
//

#ifndef INC_3D_OBJLOADER_H
#define INC_3D_OBJLOADER_H
#include <vector>
#include <sstream>
#include <fstream>
#include "Structs.h"

class ObjLoader {
public:
    std::vector<Vec3> vertices;
    void loadObj(const char* name);
};


#endif //INC_3D_OBJLOADER_H
