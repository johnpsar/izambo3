#include <stdio.h>
#include <string>
using namespace std;

class Object{
public:
  Object();
  int id;

};

class Plane:public Object{
public:
  Plane();
  string description;
  int capacity;
  void ready_check();
  void process();
};

class PlaneComponent:public Plane{
public:
  PlaneComponent();
  void ready_check();
  void process();
};

class PassengerCompartment:public PlaneComponent{
public:
  PassengerCompartment();
  void ready_check();
};

class PrivateCompartment:public PlaneComponent{
public:
  PrivateCompartment();
  void ready_check();
};

class EquipmentCompartment:public PrivateCompartment{
public:
  EquipmentCompartment();
  void ready_check();
};

class CargoBay:public PrivateCompartment{
public:
  CargoBay();
  EquipmentCompartment a;
  void ready_check();
};

class Employee:public Object{
public:
  Employee();
  string name;

  void workOn();
  void report();
};

class SecurityEmployee:public Employee{
public:
  SecurityEmployee();
  void workOn(string);
  void report(string);
};

class MaintenanceEmployee:public Employee{
public:
  MaintenanceEmployee();
  void workOn(string);
  void report(string);
};

class CleaningEmployee:public Employee{
public:
  CleaningEmployee();
  void workOn();
  void report(string);
};
