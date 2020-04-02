#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>



class student
{
private:
    /* data */

    std::string name;
    std::string fname;   
    std::string lname; 
    std::vector<float> mark_list;
    float moyenne;

public:
    // constructeur
    student(std::string name);

    // destructeur
    ~student();

    // autre fonctions
    void giveName();
    void showName();

    int addMark();
    void showMark();

    int getMoyenne();

};

#endif // STUDENT_H