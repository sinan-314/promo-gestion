#ifndef PROMO_H
#define PROMO_H

#include <vector>
#include <string>

#include "student.h"


class promo
{
private:
    /* data */

    std::string name;
    std::vector<student> student_list;
    std::vector<float> moyenne_list;
    float moyenne_class;

public:
    // constructeur
    promo(std::string name);

    // destructeur
    ~promo();

    // autre fonctions
    void addStudent(const Student &eleve);

};

#endif // PROMO_H