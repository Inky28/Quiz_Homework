/*
1)Розміти проект з вікторинами по окремих файлах
2)Зробити в main меню за допомогою якого можна буде курувати вікторина
	1)Додати вікторини (Коли користувач додає нову вікторину в нього запитує скільки буде питань,
	коли користувач починає заповнювати кожне з питань в нього має питати скільки буде відповідей до цього запитання)
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

3)Видаляти вікторини
4)*Редагувати інформацію про вікторини (Редагувати можна як title до вікторини так і питання і відповіді) (Занада на алмазік з +12)
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