#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include "../headers/student.h"
#include "../headers/promo.h"


student::student(string name)
{
}

student::~student()
{
}

void student::giveName()
{
    cout << "Entrez le nom : " << endl;
    cin >> fname;
    cout << endl;

    cout << "entrez le prenom : " << endl;
    cin >> lname;
    cout << endl;
}

void student::showName()
{
    cout << "le prénom est " << fname << " et le nom est " << lname <<endl;
}

int student::addMark()
{
    float mark;

    cout << "entrez une note pour " << fname << " " << lname << " :" << endl;
    cin >> mark;

    if(mark > 20)
    {
        cout << "désolé mais la valeur entrée est supérieur à 20, veuillez réessayer" << endl; 
        
        addMark();
        
        return(0);

    }else if (mark < 0)
    {
        cout << "désolé mais la valeur entrée est inférieur à 0, veuillez réessayer" << endl;
        
        addMark();
        
        return (0);
    }
    
    mark_list.push_back(mark);
    
    return(0);
}

void student::showMark()
{
    float moyenne = 0;

    for(int i(0); i<mark_list.size(); ++i)
    {
        moyenne = moyenne + mark_list[i];
        cout << " la note numero " << i+1 << " vaut :" << mark_list[i] << endl;
    }

    moyenne = moyenne / mark_list.size();
   
    cout << "Votre moyenne est : " << moyenne << endl;
}

int student::getMoyenne()
{
    promo::moyenne_list.pushback(moyenne);

    return (0);
}
