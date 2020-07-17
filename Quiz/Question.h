#pragma once
#include "Answer.h"
#include <vector>
#include <iostream>
using namespace std;

class Question
{
private:
    string textQuestion;
    vector<Answer> answers;
public:
    Question();

    Question(string textQuestion);

    void PrintAnswers();

    void SetTextQuestion(string textQuestion);

    string GetTextQuestion() const;

    bool CheckAnswer(int indexAnswer);

    void Print();
    void ClearList();

    void AddAnswer(Answer newAnswer);

    void Edit();
    void Info();

};