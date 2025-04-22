 //run time polymorphism is achived by Function Overriding (with virtual functions).
 //Resolved at runtime using late binding (dynamic dispatch).
 #include<iostream>
 using namespace std;
 class vechile{
   public:
   virtual void start(){
      cout << "vechile started\n" ;
   }
   virtual void stop()
   {
      cout << "vechile Stopped\n";
   }
 };
 class car:public vechile{
   public:
   void start()
   {
      cout << "car started\n";
   }
   void stop()
   {
      cout << "Car stopped\n";
   }

 };
 class bus:public vechile{
   public:
      void start()
      {
         cout << "Bus started\n";
      }

 };
 int main() 
 {
   vechile *vp;
   vp=new bus();
   vp->start();
   vp->stop();// will use function of base class as vechile dont' have stop function
   vp =new car();
   vp->start();
   vp->stop();

    return 0;
 }