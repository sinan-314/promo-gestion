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

void promo::addStudent(const Student &eleve)
{
    student_list.push_back(eleve);
}


