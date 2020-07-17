/*
1)������ ������ � ���������� �� ������� ������
2)������� � main ���� �� ��������� ����� ����� ���� �������� ��������
	1)������ �������� (���� ���������� ���� ���� �������� � ����� ������ ������ ���� ������,
	���� ���������� ������ ����������� ����� � ������ � ����� �� ������ ������ ���� �������� �� ����� ���������)
Enter title: Test
Enter count question: 2
	  Enter text question 1: question1
	  Enter count answer: 2
			Enter text answer 1: answer 1
			Enter 1 - true or 0 - false: 1
			Enter text answer 2: anwer2
			Enter 1 - true or 0 - false: 0
	 Enter text question 2: question2
			Enter count answer:1
			Enter text answer 1: answer 1
			Enter 1 - true or 0 - false: 1

3)�������� ��������
4)*���������� ���������� ��� �������� (���������� ����� �� title �� �������� ��� � ������� � ������) (������ �� ������ � +12)
*/

#include <iostream>
#include <vector>
#include "Answer.h"
#include "Question.h"
#include "Quiz.h"

using namespace std;

int main()
{
	Quiz test;
	test.Info();

	Question quesTest1("5+30 = ? ");

	Answer answerTest1("35", true);
	Answer answerTest2("80", false);
	Answer answerTest3("90", false);

	quesTest1.AddAnswer(answerTest1);
	quesTest1.AddAnswer(answerTest2);
	quesTest1.AddAnswer(answerTest3);

	Quiz test1("Plus");
	test1.AddQuestion(quesTest1);
	test1.PassQuize();

	test1.Info();

	return 0;
}