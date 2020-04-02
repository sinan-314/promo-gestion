#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include "headers/student.h"
#include "headers/promo.h"

int main() 
{
    student eleve1("abdel");

    eleve1.giveName();
    eleve1.showName();

    eleve1.addMark();
    eleve1.addMark();
    eleve1.showMark();

    return (0);
}