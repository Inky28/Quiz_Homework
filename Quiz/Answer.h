#pragma once

#include <iostream>
using namespace std;

class Answer
{
private:
    string textAnswer;
    bool isTrue;
public:
    Answer();

    Answer(string textAnswer, bool isTrue);

    bool GetTrue() const;

    void Print();

    string GetTextAnswer() const;

    void SetTrue(bool isTrue);
    void SetTextAnswer(string textAnswer);

    void Edit();
    void Info();

};