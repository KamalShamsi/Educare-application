#ifndef PLATFROM_H
#define PLATFROM_H

#include "DataStructure.h"
#include <fstream>
#include <vector>

class Platfrom {
    public:
        Platfrom(std::ifstream& savedData);
        void buildSelection();
    private:
        std::vector<Course> courseData;
        std::vector<Course> courseSelection;
};

#endif PLATFROM_H

// Id title proficency <average count> <average count> <more then one>
// 19 "Title" 6 10 100 6 10 20 10 30 !!