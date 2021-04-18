#include <iostream>
#include "string"
using namespace std;

class Teacher
{
private:
    string firstName;
    string lastName;
    int nationalId;
    int birthDay;
    int birthMonth;
    int birthYear;
public:
    const string &getFirstName() const
    {
        return firstName;
    }

    void setFirstName(const string &firstName)
    {
        Teacher::firstName = firstName;
    }

    const string &getLastName() const
    {
        return lastName;
    }

    void setLastName(const string &lastName)
    {
        Teacher::lastName = lastName;
    }

    int getNationalId() const
    {
        return nationalId;
    }

    void setNationalId(int nationalId)
    {
        Teacher::nationalId = nationalId;
    }

    int getBirthDay() const
    {
        return birthDay;
    }

    void setBirthDay(int birthDay)
    {
        Teacher::birthDay = birthDay;
    }

    int getBirthMonth() const
    {
        return birthMonth;
    }

    void setBirthMonth(int birthMonth)
    {
        Teacher::birthMonth = birthMonth;
    }

    int getBirthYear() const
    {
        return birthYear;
    }

    void setBirthYear(int birthYear)
    {
        Teacher::birthYear = birthYear;
    }
};

class Student
{
private:
    string firstName;
    string lastName;
    int nationalId;
    int birthDay;
    int birthMonth;
    int birthYear;
public:
    const string &getFirstName() const
    {
        return firstName;
    }

    void setFirstName(const string &firstName)
    {
        Student::firstName = firstName;
    }

    const string &getLastName() const
    {
        return lastName;
    }

    void setLastName(const string &lastName)
    {
        Student::lastName = lastName;
    }

    int getNationalId() const
    {
        return nationalId;
    }

    void setNationalId(int nationalId)
    {
        Student::nationalId = nationalId;
    }

    int getBirthDay() const
    {
        return birthDay;
    }

    void setBirthDay(int birthDay)
    {
        Student::birthDay = birthDay;
    }

    int getBirthMonth() const
    {
        return birthMonth;
    }

    void setBirthMonth(int birthMonth)
    {
        Student::birthMonth = birthMonth;
    }

    int getBirthYear() const
    {
        return birthYear;
    }

    void setBirthYear(int birthYear)
    {
        Student::birthYear = birthYear;
    }
};

class SchoolClass
{
private:
    string name;
    int id;
public:
    Student students[30];
    Teacher teacher;
    const Teacher &getTeacher() const
    {
        return teacher;
    }

    void setTeacher(const Teacher &teacher)
    {
        SchoolClass::teacher = teacher;
    }

    const string &getName() const
    {
        return name;
    }

    void setName(const string &name)
    {
        SchoolClass::name = name;
    }

    int getId() const
    {
        return id;
    }

    void setId(int id)
    {
        SchoolClass::id = id;
    }

    const Student *getStudents() const
    {
        return students;
    }
};

class School
{
private:
    string name;
    int idNumber;
public:
    int getIdNumber() const
    {
        return idNumber;
    }

    void setIdNumber(int idNumber)
    {
        School::idNumber = idNumber;
    }

    SchoolClass classes[10];
    const string &getName() const
    {
        return name;
    }

    void setName(const string &name)
    {
        School::name = name;
    }

    const SchoolClass *getClasses() const
    {
        return classes;
    }
};

School setSchoolInformation();

int main()
{
    int schoolsQuantity = 0;
    string temp;
    int choice = 0;
    printf("what do you want to do?\n"
           "1:setting the information for schools\n"
           "2:viewing the information entered\n"
           "3:show school's information by code\n"
           "4:search teacher\n"
           "5:delete an school\n"
           "6:search students\n"
           "7:showing teachers information working at a school\n"
           "8:show name and national id of students\n"
           "9:edit info\n"
           "10:show based on birth date\n"
           "0:terminate\n"
           );
    cin >> choice;
    if (choice == 1)
    {
        cout << "enter the number of schools which you want to input" << endl;
        cin >> schoolsQuantity;
        School schools[schoolsQuantity];
        for (int i = 0; i < schoolsQuantity; ++i)
        {
            cout << "school number " << i +1 << endl << endl;
            schools[i] = setSchoolInformation();
        }
    }
    else if (choice == 2)
    {

    }
}

int length(int id)
{
    int len = 0;
    while (id > 0)
    {
        id = id / 10;
        len++;
    }
    return len;
}

bool nationalIdValidationCheck(int id)
{
    if (length(id) == 10)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool nameValidationCheck(string firstName,string lastName)
{
    bool isFirstNameValid = true;
    bool isLastNameValid = true;
    for (int i = 0; i < firstName.length(); ++i)
    {
        if (!((firstName[i] >= 65 && firstName[i] <= 90) && (firstName[i] >= 97 && firstName[i] <= 122)))
        {
            isFirstNameValid = false;
        }
    }
    for (int i = 0; i < lastName.length(); ++i)
    {
        if (!((lastName[i] >= 65 && lastName[i] <= 90) && (lastName[i] >= 97 && lastName[i] <= 122)))
        {
            isFirstNameValid = false;
        }
    }
    return isFirstNameValid && isLastNameValid;
}

Student setStudentInformation()
{
    Student student;
    string tempstr;
    string tempstr1;
    int tempnum;
    cout << "enter the first name of the student" << endl;
    cin >> tempstr;
    cout << "enter the last name of the student" << endl;
    cin >> tempstr1;
    if (!nameValidationCheck(tempstr,tempstr1))
    {
        cout << "wrong name format\nthis is a fatal error\nstudent assigning failed\n";
        Student emptyStudent;
        return emptyStudent;
    }
    student.setFirstName(tempstr);
    student.setLastName(tempstr1);
    cout << "enter the nationalId of the student" << endl;
    cin >> tempnum;
    if (!nationalIdValidationCheck(tempnum))
    {
        cout << "wrong national id format\nthis is a fatal error\nstudent assigning failed\n";
        Student emptyStudent;
        return emptyStudent;
    }
    student.setNationalId(tempnum);
    cout << "enter the birth day of the student" << endl;
    cin >> tempnum;
    student.setBirthDay(tempnum);
    cout << "enter the birth month of the student" << endl;
    cin >> tempnum;
    student.setBirthMonth(tempnum);
    cout << "enter the birth year of the student" << endl;
    cin >> tempnum;
    student.setBirthYear(tempnum);
    return student;
}

Teacher setTeacherInformation()
{
    Teacher teacher;
    string tempstr;
    string tempstr1;
    int tempnum;
    cout << "enter the first name of the teacher" << endl;
    cin >> tempstr;
    cout << "enter the last name of the teacher" << endl;
    cin >> tempstr1;
    if (!nameValidationCheck(tempstr,tempstr1))
    {
        cout << "wrong name format\nthis is a fatal error\nteacher assigning failed\n";
        Teacher emptyTeacher;
        return emptyTeacher;
    }
    teacher.setFirstName(tempstr);
    teacher.setLastName(tempstr1);
    cout << "enter the nationalId of the teacher" << endl;
    cin >> tempnum;
    if (!nationalIdValidationCheck(tempnum))
    {
        cout << "wrong national id format\nthis is a fatal error\nteacher assigning failed\n";
        Teacher emptyTeacher;
        return emptyTeacher;
    }
    teacher.setNationalId(tempnum);
    cout << "enter the birth day of the teacher" << endl;
    cin >> tempnum;
    teacher.setBirthDay(tempnum);
    cout << "enter the birth month of the teacher" << endl;
    cin >> tempnum;
    teacher.setBirthMonth(tempnum);
    cout << "enter the birth year of the teacher" << endl;
    cin >> tempnum;
    teacher.setBirthYear(tempnum);
    return teacher;
}

SchoolClass setClassesInformation()
{
    SchoolClass schoolClass;
    string tempstr;
    int tempnum;
    cout << "enter the name of the class" << endl;
    cin >> tempstr;
    schoolClass.setName(tempstr);
    cout << "enter the id of the class" << endl;
    cin >> tempnum;
    schoolClass.setId(tempnum);
    Student students;
    Teacher teacher = setTeacherInformation();
    schoolClass.teacher = teacher;
    for (int i = 0; i < 30; ++i)
    {
        cout << "student number " << i + 1 << endl;
        students = setStudentInformation();
        schoolClass.students[i] = students;
    }
    return schoolClass;
}

School setSchoolInformation()
{
    School school;
    string tempstr;
    int tempnum;
    cout << "enter the name of the shool" << endl;
    cin >> tempstr;
    school.setName(tempstr);
    cout << "enter the ID of the shool" << endl;
    cin >> tempnum;
    school.setIdNumber(tempnum);
    SchoolClass schoolClasses;
    for (int j = 0; j < 10; ++j)
    {
        cout << "class number " << j + 1 << endl << endl;
        schoolClasses = setClassesInformation();
        school.classes[j] = schoolClasses;
    }
    return school;
}