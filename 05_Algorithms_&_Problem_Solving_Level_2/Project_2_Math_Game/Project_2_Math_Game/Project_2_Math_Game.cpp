// Write a small game program for Math Quiz
// Requirements:
// Ask the user how many questions they want to answer.
// Ask the user to select the difficulty level (Easy, Med, Hard, Mix).
// Ask the user to select the operation type (Add, Subtract, Multiply, Divide, Mix).
// Generate questions based on selected level and operation type.
// Show each question to the player.
// Read player's answer and check correctness.
// If the answer is correct, show green screen.
// If the answer is wrong, show red screen and display the correct answer.
// After all questions, show the final quiz results (Pass/Fail, number of right/wrong answers, etc.).
// Ask the user if s/he wants to play again.

#include <iostream>
using namespace std;

// Defines the difficulty levels for questions
enum enQuestionLevel
{
    EasyLevel = 1,
    MedLevel = 2,
    HardLevel = 3,
    Mix = 4
};

// Defines types of operations in the quiz
enum enOperrationType
{ 
    Add = 1,
    Sub = 2,
    Mult = 3,
    Div = 4,
    MixOp = 5 
};

// Represents a single question
struct stQuestion
{
    int Number1 = 0;
    int Number2 = 0;
    enQuestionLevel QuestionLevel;
    enOperrationType OperrationType;
    int CorrectAnswer = 0;
    int PlayerAnswer = 0;
    bool AnswerResult = false;
};

// Represents the quiz with multiple questions
struct stQuizz
{
    stQuestion QuestionList[100];
    int NumberOfQuestions;
    enQuestionLevel QuestionsLevel;
    enOperrationType OpType;
    int NumberOfWrongAnswers = 0;
    int NumberOfRightAnswers = 0;
    bool IsPass = false;
};

// Returns the symbol string for a given operation type
string GetOpTypeSymbol(enOperrationType operationType)
{
    switch (operationType)
    {
    case enOperrationType::Add:
        return "+";
    case enOperrationType::Sub:
        return "-";
    case enOperrationType::Mult:
        return "*";
    case enOperrationType::Div:
        return "/";
    case enOperrationType::MixOp:
        return "Mix";
    }
}

// Returns the text for a question level
string GetQuestionLevelText(enQuestionLevel questionLevel)
{
    string arrQuestionLevelText[4] = { "Easy","Med","Hard","Mix" };
    return arrQuestionLevelText[questionLevel - 1];
}

// Asks the user how many questions they want to answer (1-100)
int ReadHowManyQuestions()
{
    int questionsNumber = 1;
    do
    {
        cout << "How many Questions do you want to answer ? ";
        cin >> questionsNumber;
    } while (questionsNumber < 1 || questionsNumber > 100);

    return questionsNumber;
}

// Generates a random number between From and To (inclusive)
int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

// Clears the console screen and resets color
void ResetScreen()
{
    system("cls");
    system("color 0F");
}

// Reads the difficulty level from the user
enQuestionLevel ReadQuestionsLevel()
{
    int questionsLevel = 0;
    do
    {
        cout << "Enter Question Level [1] Easy, [2] Med, [3] Hard, [4] Mix ? ";
        cin >> questionsLevel;
    } while (questionsLevel < 1 || questionsLevel > 4);
    return enQuestionLevel(questionsLevel);
}

// Reads the operation type from the user
enOperrationType ReadOpType()
{
    int operationType = 0;
    do
    {
        cout << "Enter Operration Type [1] Add, [2] Sub, [3] Mul, [4] Div, [5] Mix ? ";
        cin >> operationType;
    } while (operationType < 1 || operationType > 5);
    return enOperrationType(operationType);
}

// Performs a simple calculation between two numbers
short SimpleCalculator(short numb1, short numb2, enOperrationType operationType)
{
    switch (operationType)
    {
    case enOperrationType::Add:
        return numb1 + numb2;
    case enOperrationType::Sub:
        return numb1 - numb2;
    case enOperrationType::Mult:
        return numb1 * numb2;
    case enOperrationType::Div:
        return numb1 / numb2;
    default:
        return numb1 + numb2;
    }
}

// Returns a random operation type (Add, Sub, Mult, Div)
enOperrationType GetRandomOperationType()
{
    return enOperrationType(RandomNumber(1, 4));
}

// Generates a single question based on difficulty and operation type
stQuestion GenerateQuestion(enQuestionLevel questionLevel, enOperrationType operationType)
{
    stQuestion question;

    // Randomize if Mix is selected
    if (questionLevel == enQuestionLevel::Mix)
        questionLevel = enQuestionLevel(RandomNumber(1, 3));

    if (operationType == enOperrationType::MixOp)
        operationType = GetRandomOperationType();

    question.OperrationType = operationType;
    question.QuestionLevel = questionLevel;

    // Assign number ranges based on difficulty
    switch (questionLevel)
    {
    case enQuestionLevel::EasyLevel:
        question.Number1 = RandomNumber(1, 10);
        question.Number2 = RandomNumber(1, 10);
        break;
    case enQuestionLevel::MedLevel:
        question.Number1 = RandomNumber(10, 50);
        question.Number2 = RandomNumber(10, 50);
        break;
    case enQuestionLevel::HardLevel:
        question.Number1 = RandomNumber(50, 100);
        question.Number2 = RandomNumber(50, 100);
        break;
    }
    question.CorrectAnswer = SimpleCalculator(question.Number1, question.Number2, question.OperrationType);
    return question;
}

// Fills the quiz with the required number of questions
void GenerateQuizzQuestions(stQuizz& quizz)
{
    for (int question = 0; question < quizz.NumberOfQuestions; question++)
    {
        quizz.QuestionList[question] = GenerateQuestion(quizz.QuestionsLevel, quizz.OpType);
    }
}

// Reads user's answer input
int ReadQuestionAnswer()
{
    int answer = 0;
    cin >> answer;
    return answer;
}

// Prints a single question to the screen
void PrintTheQuestion(stQuizz& quizz, short questionNumber)
{
    cout << "Question [" << questionNumber + 1 << "/" << quizz.NumberOfQuestions << "] " << endl;
    cout << quizz.QuestionList[questionNumber].Number1 << endl;
    cout << quizz.QuestionList[questionNumber].Number2 << " " << endl;
    cout << GetOpTypeSymbol(quizz.QuestionList[questionNumber].OperrationType) << endl << "_______" << endl;
}

// Changes screen color depending on correctness
void SetScreenColor(bool right)
{
    if (right)
        system("color 2F");
    else
    {
        system("color 4F");
        cout << "\a";
    }
}

// Checks user's answer and updates quiz stats
void CorrectTheQuestionAnswer(stQuizz& quizz, short questionNumber)
{
    if (quizz.QuestionList[questionNumber].PlayerAnswer != quizz.QuestionList[questionNumber].CorrectAnswer)
    {
        quizz.QuestionList[questionNumber].AnswerResult = false;
        quizz.NumberOfWrongAnswers++;
        cout << "Wrong Answer :-( " << endl;
        cout << "The right answer is: " << quizz.QuestionList[questionNumber].CorrectAnswer << endl;
    }
    else
    {
        quizz.QuestionList[questionNumber].AnswerResult = true;
        quizz.NumberOfRightAnswers++;
        cout << "Right Answer :-) " << endl;
    }
    cout << endl;
    SetScreenColor(quizz.QuestionList[questionNumber].AnswerResult);
}

// Loops through all questions to ask and correct answers
void AskAndCorrectQuestionListAnswers(stQuizz& quizz)
{
    for (short questionNumber = 0; questionNumber < quizz.NumberOfQuestions; questionNumber++)
    {
        PrintTheQuestion(quizz, questionNumber);
        quizz.QuestionList[questionNumber].PlayerAnswer = ReadQuestionAnswer();
        CorrectTheQuestionAnswer(quizz, questionNumber);
    }
    quizz.IsPass = (quizz.NumberOfRightAnswers >= quizz.NumberOfWrongAnswers);
}

// Returns final pass/fail text
string GetFinalResultText(bool Pass)
{
    return Pass ? "Pass :-)" : "Fail :-(";
}

// Prints summary of quiz results
void PrintQuizzResults(stQuizz quizz)
{
    cout << "________________________________" << endl;
    cout << "Final Results: " << GetFinalResultText(quizz.IsPass) << endl;
    cout << "Number of Questions: " << quizz.NumberOfQuestions << endl;
    cout << "Questions Level    : " << GetQuestionLevelText(quizz.QuestionsLevel) << endl;
    cout << "OpType             : " << GetOpTypeSymbol(quizz.OpType) << endl;
    cout << "Number of Right Answers: " << quizz.NumberOfRightAnswers << endl;
    cout << "Number of Wrong Answers: " << quizz.NumberOfWrongAnswers << endl;
    cout << "________________________________" << endl;
}

// Runs a single quiz session
void PlayMathGame()
{
    stQuizz quizz;
    quizz.NumberOfQuestions = ReadHowManyQuestions();
    quizz.QuestionsLevel = ReadQuestionsLevel();
    quizz.OpType = ReadOpType();

    GenerateQuizzQuestions(quizz);
    AskAndCorrectQuestionListAnswers(quizz);
    PrintQuizzResults(quizz);
}

// Main loop: allows replay
void StartGame()
{
    char playAgain = 'Y';
    do
    {
        ResetScreen();
        PlayMathGame();
        cout << endl << "Do you want to play again? Y/N? ";
        cin >> playAgain;
    } while (playAgain == 'Y' || playAgain == 'y');
}

// Main Function
int main()
{
    srand((unsigned)time(NULL));
    StartGame();
    return 0;
}
