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
    float moyenne_class;

public:
    // la parce que je sais pas comment faire
    std::vector<float> moyenne_list;

    // constructeur
    promo(std::string name);

    // destructeur
    ~promo();

    // autre fonctions
    void addStudent(const student &eleve);
    float showMoyenne();

};

#endif // PROMO_H