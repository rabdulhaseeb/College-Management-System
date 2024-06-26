#include <iostream>
#include <string>
#include <ctime>

using namespace std;

// Interfaces
class Login {
public:
    virtual void getLogged() = 0;
};

class Time {
private:
    tm localTime;

public:
    // Constructor to initialize the current time
    Time() {
        time_t currentTime;
        time(&currentTime);

        if (localtime_s(&localTime, &currentTime) != 0) {
            cerr << "Error in localtime_s" << endl;
            // Handle the error, you might throw an exception or take other appropriate action
        }
    }

    // Member function to get the current date
    string getCurrentDate() const {
        char buffer[11]; // "YYYY-MM-DD\0"
        strftime(buffer, sizeof(buffer), "%Y-%m-%d", &localTime);
        return buffer;
    }

    // Member function to get the day of the week
    string getDayOfWeek() const {
        const char* dayNames[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
        return dayNames[localTime.tm_wday];
    }

    // Member function to display the current date
    void displayCurrentDate() const {
        cout << "Current Date: " << getCurrentDate() << endl;
    }

    // Member function to display the day of the week
    void displayDayOfWeek() const {
        cout << "Day of the Week: " << getDayOfWeek() << endl;
    }
};

class Syn {
public:
    void synA() {
        cout << " Roll No: 423120 || Muhammad Ehsaan  \n";
        cout << " Roll No: 423121 || Muhammad Ahsan  \n";
        cout << " Roll No: 423122 || Muhammad Sakib  \n";
        cout << " Roll No: 423123 || Muhammad Sikandar \n";
        cout << " Roll No: 423124 || Muhammad Hamza Raees \n";
        cout << endl;
    }
    void synB() {
        cout << " Roll No: 423130 || Muhammad Shafi \n";
        cout << " Roll No: 423131 || Aoun Muhammad \n";
        cout << " Roll No: 423132 || Muhammad Zain-ul-Abideen  \n";
        cout << " Roll No: 423133 || Muhammad Owais \n";
        cout << " Roll No: 429083 || Abdul Haseeb Riaz\n";
    }
    void synC() {
        cout << " Roll No: 423140 || Muhammad Hamza \n";
        cout << " Roll No: 423141 || Abaas Khan \n";
        cout << " Roll No: 423142 || Essa Ali Ajmal \n";
        cout << " Roll No: 423143 || Musa Khan \n";
        cout << " Roll No: 429044 || Safi Ullah\n";
    }
};

// Classes to show
class Teacher : public Login, Syn {
protected:
    string b, Y;
    int c = 0;
    string email;
    string pass = "password";

public:
    void getLogged() override {
        bool loggedIn = false;
        do {
            cout << "Email: ";
            cin >> email;
            cout << "Password: ";
            cin >> b;
            cout << endl;

            if ((email == "Alisaeed@hotmail.com" || email == "Safiataj@hotmail.com" || email == "Sanafatima@hotmail.com" || email == "Mariakhalid@hotmail.com") && pass == b) {
                loggedIn = true;
                cout << "------->>> ' Welcome to r.0d00 ' <<<---------\n";
                do {
                    cout << "1. Personal Information \n";
                    cout << "2. Current Courses \n";
                    cout << "3. Classes Information \n";
                    cout << "4. Assign marks to student\n"; // Additional feature to assign marks to each student
                    cout << "Enter Here: ";
                    cin >> c;

                    if (c == 1) {
                        cout << "------->>Personal Information<<-------\n";
                        if (email == "Safiataj@hotmail.com") {
                            cout << "Name: Safia Taj\n";
                            cout << "mail: Safiataj@hotmail.com\n";
                            cout << "DBS&H\n";
                            cout << "College of E&ME\n";
                        }
                        if (email == "Sanafatima@hotmail.com") {
                            cout << "Name: Sana Fatima\n";
                            cout << "mail: Sanafatima@hotmail.com\n";
                            cout << "DCE\n";
                            cout << "College of E&ME\n";
                        }
                        if (email == "Alisaeed@hotmail.com") {
                            cout << "Name: Ali Saeed\n";
                            cout << "mail: Alisaeed@hotmail.com\n";
                            cout << "DCE\n";
                            cout << "College of E&ME\n";
                        }
                        if (email == "Mariakhalid@hotmail.com") {
                            cout << "Name: Maria Khalid\n";
                            cout << "mail: Mariakhalid@hotmail.com\n";
                            cout << "DBS&H\n";
                            cout << "College of E&ME\n";
                        }
                    }
                    if (c == 2) {
                        if (email == "Mariakhalid@hotmail.com") {
                            cout << " Monday 08:45-10:30\n DE-EE-44-C\nCRE-11 \n HU-212 Technical & Business Writing\n\n";
                            cout << " Tuesday 10:30-12:30\n DE-EE-44-A\nCRE-13 \n HU-212 Technical & Business Writing\n\n";
                            cout << " Wednesday 08:45-10:30\n DE-EE-44-B\nCRE-12 \n HU-212 Technical & Business Writing\n\n";
                        }
                        if (email == "Sanafatima@hotmail.com") {
                            cout << " Wednesday 08:45-10:30\n DE-EE-44-A\nDCE Computing Lab \n CS-212 OOP\n\n";
                            cout << " Thursday 10:30-12:30\n DE-EE-44-B\nDCE Computing Lab \n CS-212 OOP\n\n";
                            cout << " Friday 14:00-16:30\n DE-EE-44-C\nDCE Computing Lab\n CS-212 OOP\n\n";
                        }
                        if (email == "Alisaeed@hotmail.com") {
                            cout << " Monday 10:30-11:30\n DE-EE-44-B\nCRE-12 \n CS-212 OOP\n\n";
                            cout << " Tuesday 08:45-09:35\n DE-EE-44-C\nCRE-11 \n CS-212 OOP\n\n";
                            cout << " Wednesday 08:45-10:35\n DE-EE-44-C\nCRE-11 \n CS-212 OOP\n\n";
                            cout << " Friday 08:45-10:30\n DE-EE-44-B\nCRE-12 \n CS-212 OOP\n\n";
                        }
                        if (email == "Safiataj@hotmail.com") {
                            cout << " Monday 08:45-10:30\n DE-EE-44-B\nCRE-12 \n Math-243 VectorCalculus\n\n";
                            cout << " Wednesday 13:00-13:50\n DE-EE-44-A\nCRE-13 \n Math-243 VectorCalculus\n\n";
                            cout << " Wednesday 14:00-14:50\n DE-EE-44-B\nCRE-12 \n Math-243 VectorCalculus\n\n";
                            cout << " Thursday 08:45-10:30\n DE-EE-44-A\nCRE-13 \n Math-243 VectorCalculus\n\n";
                        }
                    }
                    if (c == 3) {
                        // Object of syn class
                        Syn s;

                        cout << "1. DE-EE-44-B\n";
                        cout << "2. DE-EE-44-C\n";
                        if (email == "Mariakhalid@hotmail.com" || email == "Sanafatima@hotmail.com" || email == "Safiataj@hotmail.com") {
                            cout << "3. DE-EE-44-A\n";
                            cout << "Enter: ";
                            cin >> c;
                            if (c == 1) {
                                s.synB();
                            }
                            else if (c == 2) {
                                s.synC();
                            }
                            else if (c == 3) {
                                s.synA();
                            }
                            else {
                                cout << "Invalid Entry!\n";
                            }
                        }
                        else if (email == "Alisaeed@hotmail.com") {
                            cout << "Enter: ";
                            cin >> c;
                            if (c == 1) {
                                s.synB();
                            }
                            else if (c == 2) {
                                s.synC();
                            }
                            else {
                                cout << "Invalid Entry!\n";
                            }
                        }
                    }
                    if (c == 4) {
                        Syn s;
                        cout << "Enter Class Section (A/B/C): ";
                        cin >> Y;
                        if (Y == "A" || Y == "a") {
                            s.synA();
                            // Code to assign marks to students in class A
                        }
                        if (Y == "B" || Y == "b") {
                            s.synB();
                            // Code to assign marks to students in class B
                        }
                        if (Y == "C" || Y == "c") {
                            s.synC();
                            // Code to assign marks to students in class C
                        }
                    }
                    cout << "Enter Here: ";
                    cin >> c;
                } while (c != 0);
            }
            else {
                cout << "Invalid email or password. Try again.\n";
            }
        } while (!loggedIn);
    }
};

// Main function
int main() {
    // Object of Login class
    Teacher teacher;
    teacher.getLogged();

    // Object of Time class
    Time time;
    time.displayCurrentDate();
    time.displayDayOfWeek();

    return 0;
}
