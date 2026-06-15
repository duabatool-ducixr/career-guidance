#include <iostream>
#include <fstream>
using namespace std;

int software = 0;
int ai = 0;
int cyber = 0;
int graphic = 0;
int business = 0;
int teaching = 0;

void welcomeScreen();
void mainMenu();
void saveResult(string career)
{
    ofstream file("career_result.txt");

    file << "Career Guidance System Result" << endl;
    file << "=============================" << endl;

    file << "Recommended Career: "
         << career << endl;

    file.close();

    cout << "\nResult saved successfully!" << endl;
}

void resetScores()
{
    software = 0;
    ai = 0;
    cyber = 0;
    graphic = 0;
    business = 0;
    teaching = 0;
}
void showCareerDetails(string career)
{
    cout << "==================================" << endl;
    cout << "      CAREER INFORMATION" << endl;
    cout << "==================================" << endl;

    if(career == "Software Engineering")
    {
        cout << "\nDescription:" << endl;
        cout << "Develops software applications and systems." << endl;

        cout << "\nSkills Required:" << endl;
        cout << "- Programming" << endl;
        cout << "- Problem Solving" << endl;
        cout << "- Teamwork" << endl;

        cout << "\nCareer Opportunities:" << endl;
        cout << "- Software Engineer" << endl;
        cout << "- Web Developer" << endl;
        cout << "- Mobile App Developer" << endl;
    }

    else if(career == "Artificial Intelligence")
    {
        cout << "\nDescription:" << endl;
        cout << "Builds intelligent systems and machine learning models." << endl;

        cout << "\nSkills Required:" << endl;
        cout << "- Mathematics" << endl;
        cout << "- Programming" << endl;
        cout << "- Data Analysis" << endl;
    }

    else if(career == "Cyber Security")
    {
        cout << "\nDescription:" << endl;
        cout << "Protects computer systems and networks." << endl;

        cout << "\nSkills Required:" << endl;
        cout << "- Networking" << endl;
        cout << "- Problem Solving" << endl;
        cout << "- Security Awareness" << endl;
    }

    else if(career == "Graphic Design")
    {
        cout << "\nDescription:" << endl;
        cout << "Creates visual designs and digital artwork." << endl;

        cout << "\nSkills Required:" << endl;
        cout << "- Creativity" << endl;
        cout << "- Design Thinking" << endl;
        cout << "- Communication" << endl;
    }

    else if(career == "Business Administration")
    {
        cout << "\nDescription:" << endl;
        cout << "Manages business operations and leadership activities." << endl;

        cout << "\nSkills Required:" << endl;
        cout << "- Leadership" << endl;
        cout << "- Communication" << endl;
        cout << "- Decision Making" << endl;
    }

    else if(career == "Teaching")
    {
        cout << "\nDescription:" << endl;
        cout << "Educates and guides students." << endl;

        cout << "\nSkills Required:" << endl;
        cout << "- Patience" << endl;
        cout << "- Communication" << endl;
        cout << "- Subject Knowledge" << endl;

    }

    cout << "\nPress Enter to return...";
cin.ignore();
cin.get();

}
void showResult()
{
    int highest = software;
    string career = "Software Engineering";
    string careers[6] =
{
    "Software Engineering",
    "Artificial Intelligence",
    "Cyber Security",
    "Graphic Design",
    "Business Administration",
    "Teaching"
};

int scores[6] =
{
    software,
    ai,
    cyber,
    graphic,
    business,
    teaching
};

for(int i = 0; i < 5; i++)
{
    for(int j = i + 1; j < 6; j++)
    {
        if(scores[j] > scores[i])
        {
            int tempScore = scores[i];
            scores[i] = scores[j];
            scores[j] = tempScore;

            string tempCareer = careers[i];
            careers[i] = careers[j];
            careers[j] = tempCareer;
        }
    }
}

cout << "==================================" << endl;
cout << "     TOP CAREER RECOMMENDATIONS" << endl;
cout << "==================================" << endl;

for(int i = 0; i < 3; i++)
{
    cout << "\n" << i + 1 << ". "
         << careers[i]
         << " (" << scores[i]
         << " Points)" << endl;
}

showCareerDetails(careers[0]);

int saveChoice;

cout << "\nDo you want to save the result?" << endl;
cout << "1. Yes" << endl;
cout << "2. No" << endl;
cout << "Enter Choice: ";
cin >> saveChoice;

while(saveChoice != 1 && saveChoice != 2)
{
    cout << "Invalid Choice! Enter 1 or 2: ";
    cin >> saveChoice;
}

if(saveChoice == 1)
{
    saveResult(careers[0]);
}
else
{
    cout << "\nResult not saved." << endl;
}

    cout<<endl;
    cout << "\nPress Enter to return to Main Menu...";
cin.ignore();
cin.get();
}

void startAssessment()
{
    resetScores();
    int answer;

    cout << "=============================" << endl;
    cout << "      CAREER ASSESSMENT" << endl;
    cout << "=============================" << endl;

    // Question 1
    cout << "\nQ1. Do you enjoy programming?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << "Enter Choice: ";
    cin >> answer;
    while(answer != 1 && answer != 2)
{
    cout << "Invalid Choice! Enter 1 or 2: ";
    cin >> answer;
}

    if(answer == 1)
    {
        software += 2;
        ai += 1;
        cyber += 1;
    }

    // Question 2
    cout << "\nQ2. Do you enjoy solving logical problems?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << "Enter Choice: ";
    cin >> answer;

    while(answer != 1 && answer != 2)
{
    cout << "Invalid Choice! Enter 1 or 2: ";
    cin >> answer;
}

    if(answer == 1)
    {
        software += 1;
        ai += 2;
        cyber += 1;
    }

    // Question 3
    cout << "\nQ3. Are you interested in how computers and networks work?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << "Enter Choice: ";
    cin >> answer;

    while(answer != 1 && answer != 2)
{
    cout << "Invalid Choice! Enter 1 or 2: ";
    cin >> answer;
}

    if(answer == 1)
    {
        cyber += 2;
        software += 1;
    }


    // Question 4
    cout << "\nQ4. Do you enjoy mathematics?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << "Enter Choice: ";
    cin >> answer;

    while(answer != 1 && answer != 2)
{
    cout << "Invalid Choice! Enter 1 or 2: ";
    cin >> answer;
}

    if(answer == 1)
{
    ai += 2;
    software += 1;
}

    // Question 5
    cout << "\nQ5. Do you enjoy learning about new technologies?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << "Enter Choice: ";
    cin >> answer;

    while(answer != 1 && answer != 2)
{
    cout << "Invalid Choice! Enter 1 or 2: ";
    cin >> answer;
}

    if(answer == 1)
{
    software += 1;
    ai += 1;
    cyber += 1;
}

    //Question 6
    cout << "\nQ6. Do you enjoy finding solutions to complex problems?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << "Enter Choice: ";
    cin >> answer;

    while(answer != 1 && answer != 2)
{
    cout << "Invalid Choice! Enter 1 or 2: ";
    cin >> answer;
}

    if(answer == 1)
{
    software += 2;
    ai += 2;
}

    //question 7
    cout << "\nQ7. Do you enjoy drawing or creating artwork?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << "Enter Choice: ";
    cin >> answer;

    while(answer != 1 && answer != 2)
{
    cout << "Invalid Choice! Enter 1 or 2: ";
    cin >> answer;
}
    if(answer == 1)
{
    graphic += 2;
}

    //Question 8
    cout << "\nQ8. Do you enjoy designing posters or logos?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << "Enter Choice: ";
    cin >> answer;

    while(answer != 1 && answer != 2)
{
    cout << "Invalid Choice! Enter 1 or 2: ";
    cin >> answer;
}
    if(answer == 1)
{
    graphic += 2;
}

    //Question 9
    cout << "\nQ9. Do you enjoy editing photos or videos?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << "Enter Choice: ";
    cin >> answer;

    while(answer != 1 && answer != 2)
{
    cout << "Invalid Choice! Enter 1 or 2: ";
    cin >> answer;
}
    if(answer == 1)
{
    graphic += 2;
}

    //Question 10
    cout << "\nQ10. Do you enjoy leading a team?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << "Enter Choice: ";
    cin >> answer;

    while(answer != 1 && answer != 2)
{
    cout << "Invalid Choice! Enter 1 or 2: ";
    cin >> answer;
}

    if(answer == 1)
{
    business += 2;
}


    //Question 11
    cout << "\nQ11. Would you like to start your own business?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << "Enter Choice: ";
    cin >> answer;

    while(answer != 1 && answer != 2)
{
    cout << "Invalid Choice! Enter 1 or 2: ";
    cin >> answer;
}
    if(answer == 1)
{
    business += 2;
}


    //Question 12
    cout << "\nQ12. Do you enjoy making decisions and planning?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << "Enter Choice: ";
    cin >> answer;

    while(answer != 1 && answer != 2)
{
    cout << "Invalid Choice! Enter 1 or 2: ";
    cin >> answer;
}
    if(answer == 1)
{
    business += 2;
}

    //Question 13
    cout << "\nQ13. Do you enjoy helping others learn?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << "Enter Choice: ";
    cin >> answer;

    while(answer != 1 && answer != 2)
{
    cout << "Invalid Choice! Enter 1 or 2: ";
    cin >> answer;
}
    if(answer == 1)
{
    teaching += 2;
}


    //question 14
    cout << "\nQ14. Do you enjoy explaining concepts to people?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << "Enter Choice: ";
    cin >> answer;

    while(answer != 1 && answer != 2)
{
    cout << "Invalid Choice! Enter 1 or 2: ";
    cin >> answer;
}
    if(answer == 1)
{
    teaching += 2;
}

    //Question 15
    cout << "\nQ15. Do you have patience when teaching someone?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << "Enter Choice: ";
    cin >> answer;

    while(answer != 1 && answer != 2)
{
    cout << "Invalid Choice! Enter 1 or 2: ";
    cin >> answer;
}

    if(answer == 1)
{
    teaching += 2;
}

    cout << "\nAssessment Completed!" << endl;
    showResult();
}

void careerInformation()
{
    int choice;

    cout << "==================================" << endl;
    cout << "      CAREER INFORMATION" << endl;
    cout << "==================================" << endl;

    cout << "1. Software Engineering" << endl;
    cout << "2. Artificial Intelligence" << endl;
    cout << "3. Cyber Security" << endl;
    cout << "4. Graphic Design" << endl;
    cout << "5. Business Administration" << endl;
    cout << "6. Teaching" << endl;

    cout << "\nEnter Choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            showCareerDetails("Software Engineering");
            break;

        case 2:
            showCareerDetails("Artificial Intelligence");
            break;

        case 3:
            showCareerDetails("Cyber Security");
            break;

        case 4:
            showCareerDetails("Graphic Design");
            break;

        case 5:
            showCareerDetails("Business Administration");
            break;

        case 6:
            showCareerDetails("Teaching");
            break;

        default:
            cout << "\nInvalid Choice!" << endl;
    }
}


void aboutProject()
{
    cout << "==================================" << endl;
    cout << "        ABOUT PROJECT" << endl;
    cout << "==================================" << endl;

    cout << "\nProject Name: Career Guidance System" << endl;

    cout << "\nDeveloped By: Dua Batool" << endl;

    cout << "\nLanguage Used: C++" << endl;

    cout << "\nConcepts Used:" << endl;
    cout << "- Functions" << endl;
    cout << "- Arrays" << endl;
    cout << "- Loops" << endl;
    cout << "- Switch Statements" << endl;
    cout << "- File Handling" << endl;
    cout << "- Input Validation" << endl;

    cout << "\nPurpose:" << endl;
    cout << "To help students identify suitable" << endl;
    cout << "career paths based on their interests" << endl;
    cout << "and skills." << endl;

    cout << "\nPress Enter to return...";
    cin.ignore();
    cin.get();
}


int main()
{
    void welcomeScreen();
{
    cout << "=============================" << endl;
    cout << "   CAREER GUIDANCE SYSTEM   " << endl;
    cout << "=============================" << endl;
    cout << endl;

    cout << "Welcome!" << endl;
    cout << "This system helps students discover" << endl;
    cout << "career paths based on their interests." << endl;

    cout << endl;
    cout << "Developed in C++" << endl;
    cout<<  "Use Numbers instead writing the whole option"<<endl;


    cout << endl;
    cout << "Press Enter to Continue...";
    cin.get();
}

void mainMenu();
{
    int choice;

    do
    {
        cout << endl;
        cout << "==================================" << endl;
        cout << "            MAIN MENU" << endl;
        cout << "==================================" << endl;

        cout << "1. Start Career Assessment" << endl;
        cout << "2. View Career Information" << endl;
        cout << "3. About Project" << endl;
        cout << "4. Exit" << endl;

        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                startAssessment();
                break;

            case 2:
                careerInformation();
                break;

            case 3:
                aboutProject();
                break;

            case 4:
                cout << "\nThank you for using Career Guidance System!" << endl;
                break;

            default:
                cout << "\nInvalid Choice!" << endl;
        }

    } while(choice != 4);
}



    return 0;
}