#include "DataStructure.h"

// Student class
Student::Student(int score, std::string type){
    average = score;
    learnType = type;
}

std::string Student::getLearnType() {
    return learnType;
}

void Student::updateLearnType(std::string att) {
    learnType = att;
}

int Student::getAvarage() {
    return average;
}

void Student::updateAvarage(int avg) {
    average = avg;
}

// Course class
Course::Course(int id, std::string name, int visualRate,int audioRate) :
    courseId(id),
    title(name),  
    visual(visualRate),
    auditory(audioRate) {};

void Course::updateRating(std::string userType, int rating) {

}
