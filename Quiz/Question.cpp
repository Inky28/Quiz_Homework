#include "Question.h"

Question::Question()
{
	textQuestion = "";
}

Question::Question(string textQuestion)
{
	this->textQuestion = textQuestion;
}

void Question::PrintAnswers()
{
	for (Answer item : answers)
		item.Print();
}

void Question::SetTextQuestion(string textQuestion)
{
	this->textQuestion = textQuestion;
}

string Question::GetTextQuestion() const
{
	return this->textQuestion;
}

bool Question::CheckAnswer(int indexAnswer)
{
	for (int i = 1; i < answers.size(); i++)
		if (i == indexAnswer)
			return answers[i].GetTrue();
}

void Question::Print()
{
	cout << textQuestion << endl;
	PrintAnswers();
}

void Question::ClearList()
{
	answers.clear();
}

void Question::AddAnswer(Answer newAnswer)
{
	answers.push_back(newAnswer);
}

void Question::Edit()
{
	system("cls");

	int choice;
	bool exit = false;
	string questionText;
	char temp[100];
	do
	{
		cout << "Menu\n";
		cout << "1. Show info about question\n";
		cout << "2. Change question text\n";
		cout << "3. Edit answers\n";
		cout << "0. Exit\n";
		cin >> choice;

		system("cls");
		switch (choice)
		{
		case 1:
			Info();
			break;

		case 2:
			cin.get();
			cout << "Enter new title: ";
			cin.getline(temp, 100);
			questionText = temp;
			SetTextQuestion(questionText);
			system("cls");
			break;

		case 3:
			char ch;
			for (Answer item : answers)
			{
				cout << "Edit this answer: " << item.GetTextAnswer() << endl;
				cout << "Enter Y/N: ";
				cin >> ch;
				switch (ch)
				{
				case 'y': case 'Y':
					system("cls");
					item.Edit();
					break;
				}
				system("cls");
			}
			break;
		case 0:
			exit = true;
			break;
		}
	} while (!exit);
}

void Question::Info()
{
	cout << "Question: " << GetTextQuestion() << endl;
	cout << "Answers: " << answers.size() << "\n\n";
	system("pause");
	system("cls");
}