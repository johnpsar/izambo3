#include"classes.hpp"
#include<iostream>
#include <string>
using namespace std;
/*Η process ανήκει στο Αεροπλάνο και επιτρέπει σε έναν εργαζόμενο (
από εκφώνηση: της παρέχεται) να εργαστεί σε καθεμιά από τις Συνιστώσες του.
 Η process ανήκει και σε μια Συνιστώσα με την προφανή λειτουργία.
Η workOn ανήκει5 στους εργαζομένους και επιτρέπει σε έναν Εργαζόμενο να εργαστεί
 σε μια Συνιστώσα (επομένως παίρνει μια Συνιστώσα ως όρισμα).

Η report ανήκει επίσης στους Εργαζομένους και πρέπει να εκτυπώνει τον τύπο της
 εργασίας που επιτέλεσε ο εκάστοτε εργαζόμενος (δηλ. σε ποιόν χώρο δούλεψε κτλ.).
 Έχετε σχετική ελευθερία στο τί θα εκτυπώνει η report.
*/
int count=0;

Object::Object(){
//  cout<<"<Object> Constructor called"<<endl;
  id=count++;

}

Plane::Plane():Object(){
  description="NIce plane";
  capacity=420;
  cout<<"<Plane> Constructor called"<<endl;
}


PlaneComponent::PlaneComponent():Plane(){
  cout<<"<PlaneComponent> Constructor called"<<endl;

}

PassengerCompartment::PassengerCompartment():PlaneComponent(){
  cout<<"<PassengerCompartment> Constructor called"<<endl;
}

PrivateCompartment::PrivateCompartment():PlaneComponent(){
  cout<<"<PrivateCompartment> Constructor called"<<endl;
}

CargoBay::CargoBay():PrivateCompartment(){
  cout<<"<CargoBay> Constructor called"<<endl;
}

EquipmentCompartment::EquipmentCompartment():PrivateCompartment(){
  cout<<"<EquipmentCompartment> Constructor called"<<endl;
}


Employee::Employee():Object(){
  name="empty";
  cout<<"<Employee> Constructor called"<<endl;
}


SecurityEmployee::SecurityEmployee():Employee(){
  name="Mpampis O Securitas";
  cout<<"<SecurityEmployee> Constructor called"<<endl;
}

void SecurityEmployee::workOn(string part){
  cout<<"Employee " << name<<"worked on "<<part<<endl;
}

MaintenanceEmployee::MaintenanceEmployee():Employee(){
  name="Giorgos O Sintiritis";
  cout<<"<MaintenanceEmployee> Constructor called"<<endl;
}

void MaintenanceEmployee::workOn(string part){
  cout<<"Employee"<<name<<"worked on"<<part<<endl;
}

CleaningEmployee::CleaningEmployee():Employee(){
  name="Lefteris O Katharistis";
  cout<<"<CleaningEmployee> Constructor called"<<endl;
}
