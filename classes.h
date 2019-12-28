#include <string>
using namespace std;

class Object{
public:
  int id;
  string description;
// /public:
  Object(int,string);
  /* is_equal();
    is_identical();
    make_clone(); */

};

 /*class Strings : public Object{
public:
  get_lenght();
    clear();
    concat();
    at();
    upgradeAt();
    print();
  };*/

  class PlaneComponent :public Object{
  private:
    string description;

  public:
    PlaneComponent(string,int,string);
    string getDescription();
    //virtual void ready_check();
  };

class Plane: public Object{
private:
  //string description;
  int passenger_num;
  PlaneComponent **array;
public:
  void process();
  Plane(int,int,string);
//  virtual void ready_check()=0;
  int getPassengerNum();

};

class Employee : public Object{
private:
  string name;
  string report;
  //virtual void workOn();
public:
  Employee(string,string,int,string);
  string getName();
  string getReport();

};

class SecurityEmployee : public Employee{//TODO constructor
public:
  void workOn();
};

class MaintenanceEmployee : public Employee{//TODO constructor//TODO constructor
public:
  void workOn();
};

class CleaningEmployee : public Employee{//TODO constructor
public:
  void workOn();
};


class PassengerCompartment : public PlaneComponent{
public:
  PassengerCompartment(string,string,int,string);
  string description;
  void ready_check();
};

class PrivateCompartment : public PlaneComponent{
public:
  string description="This is the  compartment";
  void ready_check();
};

class EquipmentCompartment : public PlaneComponent{
public:
  string description="This is the Equipment compartment";
  void ready_check();
};

class CargoBay : public PlaneComponent{
private:
  string description="This is the Cargo Bay compartment";
  EquipmentCompartment t1;
public:
  void ready_check();
};
