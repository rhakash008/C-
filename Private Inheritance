#include<iostream>
using namespace std;

class person
{
    protected:
        string name = "Akash";

    public:
        int age = 22;
        
    private:
        int id = 3780;  

    public:
        int getId() {
            return id;
        }
};

class student : private person {
  public:
      void show()
      {
          cout << "Name: " << name << endl;  // 
          cout << "Age: " << age << endl;    // 
          cout << "ID: " << getId() << endl;
      }
};

int main()
{
    student ob;
    ob.show();
    return 0;
}
