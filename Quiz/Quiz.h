#pragma once
#include "Question.h"
#include <vector>
#include <string>
using namespace std;

class Quiz
{
private:
    string title;
    vector<Question> questions;
public:
    Quiz();

    Quiz(string title);

    void SetTitle(string title);

    string GetTitle()const;

    void Print();

    void AddQuestion(Question newQuestion);

    bool CheckQuestion(int indeQuestion, int indexAnswer);

    void PassQuize();

    void Edit();
    void Info();

    bool operator == (const Quiz& right);
};