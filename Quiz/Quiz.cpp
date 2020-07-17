#include "Quiz.h"

Quiz::Quiz() 
{
	this->title = "";
}

Quiz::Quiz(string title) 
{
	this->title = title;
}

void Quiz::SetTitle(string title) 
{
	this->title = title;
}

string Quiz::GetTitle() const
{
	return this->title;
}

void Quiz::Print() 
{
	cout << "You pass quize: " << this->title << endl;
}

void Quiz::AddQuestion(Question newQuestion) 
{
	this->questions.push_back(newQuestion);
}

bool Quiz::CheckQuestion(int indeQuestion, int indexAnswer) 
{
	for (int i = 0; i < questions.size(); i++)
		if (i == indeQuestion)
			return questions[i].CheckAnswer(indexAnswer);
}

void Quiz::PassQuize() 
{
	int score = 0;
	Print();

	int i;
	for (i = 0; i < questions.size(); i++) 
	{
		int key = 0;
		questions[i].Print();
		cout << "Enter answer the question: ";
		cin >> key;

		bool isCheck = CheckQuestion(key, i);
		if (isCheck == true)
			score++;
	}

	system("cls");
	cout << "Score: " << score << "/" << i - 1 << endl;
	system("pause");
}

void Quiz::Edit() 
{
	system("cls");

	int choice;
	bool exit = false;
	string newTitile;
	char temp[100];
	do 
	{
		cout << "Menu\n";
		cout << "1. Show info about quiz\n";
		cout << "2. Change title\n";
		cout << "3. Edit questions\n";
		cout << "0. Exit\n";
		cin >> choice;

		system("cls");
		switch (choice) 
		{
		case 0:
			return;

		case 1:
			Info();
			break;

		case 2:
			cin.get();
			cout << "Enter new title: ";
			cin.getline(temp, 100);
			newTitile = temp;
			SetTitle(newTitile);
			system("cls");
			break;

		case 3:
			char choiceQuestion;
			for (Question item : questions)
			{
				cout << "Edit this question: " << item.GetTextQuestion() << endl;
				cout << "Enter Y/N: ";
				cin >> choiceQuestion;
				switch (choiceQuestion) 
				{
				case 'y': case 'Y':
					system("cls");
					item.Edit();
					break;
				}
				system("cls");
			}
			break;
		}
	} while (!exit);
}

void Quiz::Info() 
{
	if (!questions.size())
			cout << "List empty\n";
	else
	{

		//cout << "===================================\n\n";
		cout << "Title: " << GetTitle() << endl;
		cout << "Questions: " << questions.size() << endl << endl;
		//cout << "===================================\n\n";
		//system("pause");
		//system("cls");
	}
	system("pause");
	system("cls");
}

bool Quiz::operator==(const Quiz& right) 
{
	return this->title == right.GetTitle();
}