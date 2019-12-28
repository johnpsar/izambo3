#include"classes.h"
#include<iostream>
#include <string>
/*Η process ανήκει στο Αεροπλάνο και επιτρέπει σε έναν εργαζόμενο (
από εκφώνηση: της παρέχεται) να εργαστεί σε καθεμιά από τις Συνιστώσες του.
 Η process ανήκει και σε μια Συνιστώσα με την προφανή λειτουργία.

Η workOn ανήκει5 στους εργαζομένους και επιτρέπει σε έναν Εργαζόμενο να εργαστεί
 σε μια Συνιστώσα (επομένως παίρνει μια Συνιστώσα ως όρισμα).

Η report ανήκει επίσης στους Εργαζομένους και πρέπει να εκτυπώνει τον τύπο της
 εργασίας που επιτέλεσε ο εκάστοτε εργαζόμενος (δηλ. σε ποιόν χώρο δούλεψε κτλ.).
 Έχετε σχετική ελευθερία στο τί θα εκτυπώνει η report.
*/


Object::Object(int idd,string desc){
  cout<<"<Object> just created!"<<endl;
  id=idd;
  description=desc;
};

Plane::Plane(int pas,int idd,string desc):Object(idd,desc){
  int i;
  cout<<"<Plane> just created!"<<endl;
   passenger_num=pas;
   array=new PlaneComponent *[3];//random number of plane compontents
   for(i=0;i<10;i++){
     array[i]=new PlaneComponent("test",5,"lama");
   }
};

int Plane::getPassengerNum(){
  return passenger_num;
}

Employee::Employee(string nam,string repor,int idd,string desc):Object(idd,desc){
    cout<<"<Employee> just created!"<<endl;
    name=nam;
    report=repor;
  }

string Employee::getName(){
  return name;
}

string Employee::getReport(){
  return report;
}

PlaneComponent::PlaneComponent(string descrip,int idd,string desc):Object(idd,desc){
  cout<<"<PlaneComponent> just created!"<<endl;
  //description=descrip;


}

string PlaneComponent::getDescription(){
  return description;
}
PassengerCompartment::PassengerCompartment(string desc1,string desc2,int idd,string desc3):PlaneComponent(desc2,idd,desc3){
  cout<<"PassengerCompartment just created!"<<endl;
  description=desc1;
}
void PassengerCompartment::ready_check(){
  cout<<description<<endl;
  cout<<"PassengerCompartment OK!"<<endl;
}

void PrivateCompartment::ready_check(){

  cout<<description<<endl;
  cout<<"PrivateCompartment OK!"<<endl;
}

void EquipmentCompartment::ready_check(){
  cout<<description<<endl;
  cout<<"EquipmentCompartment OK!"<<endl;
}

void CargoBay::ready_check(){
  cout<<description<<endl;
  cout<<"CargoBay OK!"<<endl;
}
