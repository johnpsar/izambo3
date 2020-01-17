#include <iostream>
using namespace std;

class A{
public:
  virtual void skrt()=0;
};

class B:public A{
public:
  void skrt(){};
};


// class A{
// public:
//   virtual void skrt()=0;
//   virtual void foo()=0;
// };
//
// class B:public A{
// public:
//   void skrt(){};
// };
//
// class C:public A{
//   void foo(){};
// };



// class A{
// public:
//   virtual void skrt()=0;
//   virtual void foo()=0;
// };
//
// class B:public A{
// public:
//   void skrt(){};
//
//   void foo(){};
// };
//
// class C:public A{
// public:
//   void foo(){};
//
//   void skrt(){};
// };


int main(){
  B* lmaout= new B;
  lmaout->skrt();
	return 0;
}
