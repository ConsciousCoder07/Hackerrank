#include <iostream>
#include <sstream>
using namespace std;

class Student
{
    private:
        int age, standard;
        string first_name, last_name;

    public:
        //Constructor
        Student()
        {
            age = 0; 
            standard = 0;
            first_name.clear();
            last_name.clear();
        }

        //Setters
        void set_age(int a) {age = a;}
        void set_standard(int b) {standard = b;}
        void set_first_name(string f) {first_name = f;}
        void set_last_name(string l) {last_name = l;}

        //Getters
        int get_age() {return age;}
        int get_standard() {return standard;}
        string get_first_name() {return first_name;}
        string get_last_name() {return last_name;}

        //concatenate using stringstream
        string to_string(){
            
            stringstream ss;
            char ch = ',';
            ss << age << ch << first_name << ch << last_name << ch << standard;
            return ss.str(); //

            /*without using ss.str()
            string s;
            char ch = ',';
            ss << age << ch << first_name << ch << last_name << ch << standard;
            ss >> s;

            Here we will see the string stream in C++. The string stream associates a string object with a string. Using this we can read from string as if it were a stream like cin.

            The Stringstream has different methods. These are like below −

            clear(): Used to clear the stream

            str(): To get and set the string object whose content is present in stream

            operator << : This will add one string into the stringstream

            operator >> : This is used to read from stringstream object.
                        */
        }
};

int main() 
{
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
