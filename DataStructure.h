#ifndef DATA_STRUCTURE_H
#define DATA_STRUCTURE_H

#include <vector>
#include <string>

class Student {
    // there are two types of learners so far for the simplicity of the task
    public:
        Student(int score, std::string type);
        std::string getLearnType();
        void updateLearnType(std::string att);
        int getAvarage();
        void updateAvarage(int avg);

    private:
        int average;
        std::string learnType;    // "visual" learner; "auditoty" learner
};

class Course {
    public:
        Course(int id, std::string name, int visualRate, int audioRate);
        void updateRating(std::string userType, int rating);
    
    // Variable
        int courseId;
        std::string title;
        // Learning Types: just two for now
        int visual; // Visual Rating
        int auditory;   // Auditory Rating
        // Course module connect to neighbor.
        std::vector<int> neighbor;

};
#endif // DATA_STRUCTURE_H