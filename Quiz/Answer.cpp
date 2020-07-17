#include "Answer.h"

Answer::Answer() 
{
	textAnswer = "";
	isTrue = false;
}

Answer::Answer(string textAnswer, bool isTrue) 
{
	this->textAnswer = textAnswer;
	this->isTrue = isTrue;
}

bool Answer::GetTrue() const 
{
	return this->isTrue;
}

void Answer::Print() 
{
	cout << this->textAnswer << endl;
}

string Answer::GetTextAnswer() const 
{
	return this->textAnswer;
}

void Answer::SetTrue(bool isTrue) 
{
	this->isTrue = isTrue;
}

void Answer::SetTextAnswer(string textAnswer) 
{
	if (!textAnswer.empty())
		this->textAnswer = textAnswer;
}

void Answer::Edit() 
{
	int choice;
	bool exit = false;
	string questionText;
	char temp[100];
	do 
	{
		cout << "Menu\n\n";
		cout << "1. Show info about answer\n";
		cout << "2. Change answer text\n";
		cout << "3. Set true\n";
		cout << "0. Exit\n";
		cin >> choice;

		system("cls");
		switch (choice)
		{
		case 0:
			exit = true;
			break;
		case 1:
			Info();
			break;

		case 2:
			cin.get();
			cout << "Enter new title: ";
			cin.getline(temp, 100);
			questionText = temp;
			SetTextAnswer(questionText);
			system("cls");
			break;

		case 3:
			bool tempChoice;
			cout << "This question true? (1 - true 0 - false): ";
			cin >> tempChoice;
			SetTrue(tempChoice);
			system("cls");
			break;
		}
	} while (!exit);
}

void Answer::Info() 
{
	cout << "Answer: " << GetTextAnswer() << endl;
	cout << "Truthfulness: " << GetTrue() << "\n\n";
	system("pause");
	system("cls");
}