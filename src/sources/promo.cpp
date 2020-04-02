#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include "../headers/promo.h"
#include "../Headers/student.h"

promo::promo(string name)
{
}

promo::~promo()
{
}

void promo::addStudent(const student &eleve)
{
    student_list.push_back(eleve);
}

float promo::showMoyenne()
{


    return (0);
}

