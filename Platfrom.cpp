#include "Platfrom.h"
#include <string>
#include <algorithm>

Platfrom::Platfrom(std::ifstream& savedData) {
    std::string data;
    int typeData = 1;

    int id;
    std::string name;
    int visualRating;
    int auditoryRating;
    std::vector<int> sequalCourse;
    
    while(savedData >> data) {
        if (data == "!!") { // End of object
            
        } 
        else if (typeData == 1) {   // Id
            id = std::stoi(data);
        }
        else if (typeData == 2) {   // Title
            //
        }
        else if (typeData == 3) {   // Visual Rating
            //
        }
        else if (typeData == 3) {   // Auditory Rating
            //
        }
        else {
            //
        }
    }
}

void Platfrom::buildSelection() {
    int currentClass;
    std::string currentTitle;
    int currentVisual;
    int currentAuditory;
    int currentNeighborId;

    for (unsigned i=0;i<courseData.size();i++){
    currentClass = courseData[i].courseId;
    currentTitle = courseData[i].title;
    currentVisual  = courseData[i].visual;
    currentAuditory = courseData[i].auditory;

    currentNeighborId = courseData[i].neighbor[i];
    }
    
    for(int k = 0; k < courseData.size();k++)
    {
    if(currentNeighborId == courseData[k].courseId){
    int neighborVisual = courseData[k].visual;
    int neighborAuditory = courseData[k].auditory;
    }
    }
}