////Create a bank account class containing account number,name and current balance whose functionality is to deposit and withdraw the amount for corresponding customer.

//class Account{
//    private:
//    int accno;
//    char name[40];
//    double currbalance;
//public:
//    Account();
//    Account(int no,char nam[],double bal);
//    void deposit(double dep);
//    void withdraw(double with);
//};
//Account:: Account(){
//        cout<<"Enter the name:";
//        cin.getline(name,50);
//        cout<<"Eneter account no:";
//        cin>>accno;
//        cout<<"Enter current balance:";
//        cin>>currbalance;
//    }
//Account::Account(int no,char nam[],double bal){
//    strcpy(name ,nam);
//    accno=no;
//    currbalance=bal;
//}
//void Account::deposit(double dep){
//    cout<<"Account:"<<accno<<endl;
//    cout<<"Name:"<<name<<endl;
//    currbalance+=dep;
//    cout<<"Currunt balance after amount deposit:"<<currbalance<<"\n *********************** "<<endl;
//}
//void Account::withdraw(double with){
//        cout<<"Account:"<<accno<<endl;
//        cout<<"Name:"<<name<<endl;
//        currbalance-=with;
//        cout<<"Currunt balance after amount withdraw:"<<currbalance<<endl;
//    }
//
//int main(){
//    int accno;
//    char name[40];
//    double currbalance;
//    double deposit;
//    double withdraw;
//    cout<<"Enter the name:";
//    cin.getline(name,50);
//    cout<<"eneter account no:";
//    cin>>accno;
//    cout<<"Enter current balance:";
//    cin>>currbalance;
//    Account Accountholder1(accno,name,currbalance);
//    cout<<" *********************** \n"<<"Eneter ammount to deposit:";
//    cin>>deposit;
//    Accountholder1.deposit(deposit);
//    cout<<"Enter ammount to withdraw:";
//    cin>>withdraw;
//    Accountholder1.withdraw(withdraw);
//}
//class Complex{
//private:
//    double real;
//    double imagenary;
//public:
//    Complex(double real,double imagenary);
//    Complex(const Complex& obj);
//    void sum(const Complex&obj);
//};
//
//Complex:: Complex(double real,double imagenary){
//    this->real=real;
//    this->imagenary=imagenary;
//}
//Complex::Complex(const Complex&obj){
//    real=obj.real;
//    imagenary=obj.imagenary;
//}
//void Complex::sum(const Complex&obj){
//    double sum_real=real+obj.real;
//    double sum_imag=imagenary+obj.imagenary;
//    cout<<"Sum of complex number is : "<<sum_real<<" + "<<sum_imag<<"i"<<endl;
//}
//int main(){
//    double real1,real2;
//    double imagenary1, imagenary2;
//    cout<<"Enter real number1:";
//    cin>>real1;
//    cout<<"Enter the imagenary number1:";
//    cin>>imagenary1;
//    cout<<"Enter real number2:";
//    cin>>real2;
//    cout<<"Enter the imagenary number2:";
//    cin>>imagenary2;
//    Complex c1(real1,imagenary1);
//    Complex c2(real2,imagenary2);
//    c1.sum(c2);
//}
//class String1{
//   
//private:
//    char *buffer;
//    int length;
//    static int count;
//public:
//    String1();
//    static void no_of_objects(){
//        cout<<"No of object created yet:"<<count<<endl;
//    }
//    ~String1();
//};
//int String1::count=0;
//String1::String1(){
//    length=0;
//    buffer=new char[1];
//    count++;
//}
//String1::~String1(){
//    count--;
//    cout<<"Destructor invoked now current of objects:"<<count<<endl;
//}
//int main(){
//    String1 s1;{
//        String1 s2;
//        String1 s3;
//        s3.no_of_objects();
//    }
//    String1 s4;
//    String1 s5;
//    String1 s6;
//    s6.no_of_objects();
//}
//class Circle;
//class Triangle;
//class Rectangle{
//private:
//    double length;
//    double breath;
//public:
//    Rectangle(double length,double breath);
//    friend void calculateparameter(const Rectangle & rect);
//};
//class Triangle{
//private:
//    double side1,side2,side3;
//public:
//    Triangle(double side1,double side2,double side3);
//    friend void calculateparameter(const Triangle& tri);
//};
//class Circle{
//private:
//    double radius;
//public:
//   Circle(double radius);
//    friend void calculateparameter(const Circle& circe);
//};
//Rectangle::Rectangle(double length,double breath){
//    this->length=length;
//    this->breath=breath;
//}
//Triangle::Triangle(double side1,double side2,double side3){
//    this->side1=side1;
//    this->side2=side2;
//    this->side3=side3;
//}
//Circle::Circle(double radius){
//    this->radius=radius;
//}
//void calculateparameter(const Rectangle & rect){
//    double rectangelpere;
//    rectangelpere=2*(rect.length+rect.breath);
//    cout<<"Rectangle Peremeter:"<<rectangelpere<<endl;
//}
//void calculateparameter(const Triangle& tri){
//    double tringlepere;
//    tringlepere=tri.side1+tri.side2+tri.side3;
//    cout<<"Triangle Peremeter:"<<tringlepere<<endl;
//}
//void calculateparameter(const Circle& circe){
//    double circlepere;
//    circlepere=2*3.14*circe.radius;
//    cout<<"Circle Peremeter:"<<circlepere<<endl;
//}
//
//int main(){
//    double length;
//    double breath;
//    double side1,side2,side3;
//    double radius;
//    cout<<"Enter length of rectangle:";
//    cin>>length;
//    cout<<"Enter breath of rectangle:";
//    cin>>breath;
//    Rectangle rec(length,breath);
//    calculateparameter(rec);
//    cout<<"Enter side1 of triangle:";
//    cin>>side1;
//    cout<<"Enter side2 of triangle:";
//    cin>>side2;
//    cout<<"Enter side3 of triangle:";
//    cin>>side3;
//    Triangle tri(side1, side2, side3);
//    calculateparameter(tri);
//    cout<<"Enter radius of circle:";
//    cin>>radius;
//    Circle cir(radius);
//    calculateparameter(cir);
//class FLOAT{
//private:
//    float a;
//public:
//    FLOAT(float b);
//    FLOAT operator+(const FLOAT& e);
//    FLOAT operator-(const FLOAT& e);
//    FLOAT operator*(const FLOAT& e);
//    FLOAT operator/(const FLOAT& e);
//    void display();
//};
//FLOAT::FLOAT(float b){
//    a=b;
//}
//FLOAT FLOAT:: operator+(const FLOAT& e){
//    return FLOAT(a+e.a);
//}
//FLOAT FLOAT::operator-(const FLOAT& e){
//    FLOAT f=a-e.a;
//    return f;
//}
//FLOAT FLOAT::operator*(const FLOAT& e){
//    return FLOAT(a*e.a);
//}
//FLOAT FLOAT::operator/(const FLOAT& e){
//    return FLOAT(a/e.a);
//}
//void FLOAT:: display(){
//    cout<<a;
//}
//int main(){
//    FLOAT f1(3.6);
//    FLOAT f2(1.2);
//    FLOAT add=f1+f2;
//    FLOAT sub=f1-f2;
//    FLOAT mul=f1*f2;
//    FLOAT div=f1/f2;
//    cout<<"After Addition :";
//    add.display();
//    cout<<"\nAfter Subtraction :";
//    sub.display();
//    cout<<"\nAfter Multiplycation :";
//    mul.display();
//    cout<<"\nAftrer Division :";
//    div.display();
//    cout<<endl;
//}
////2. Define a class string. Overlaod ==operator to compare 2 strings.
//class String{
//private:
//    string str;
//public:
//    String(string str);
//    bool operator==(const String& other);
//};
//String::String(string str){
//    this->str=str;
//}
//bool String:: operator==(const String& other){
//    if(str == other.str){
//        return true;
//    }
//    return false;
//}
//int main(){
//    String s1("Hello");
//    String s2("World");
//    String s3("Hello");
//    if(s1 == s2){
//        cout<<"First and Second are Equal Strings"<<endl;
//    }
//    else {
//        cout<<"First and Second are Not Equal Strings"<<endl;
//    }
//    if(s1==s3){
//        cout<<"First and Third are Equal Strings"<<endl;
//    }
//    else{
//        cout<<"First and Third are not Equal Strings"<<endl;
//    }
//}
////3. Create a Complex class that has real(int) and img(int) as member data, and has getDataand  showData functions. Then also overload the following operators for Complex class. =,==, +, ++, --,
//#include<iostream>
//#include<string.h>
//#include<string.h>
//#include<cstring>
//using namespace std;
//class Complex{
//private:
//    int real;
//    int img;
//public:
//    void getdata(int real,int img);
//    void showdata();
//    Complex& operator=(const Complex& other);
//    bool operator==(const Complex& other);
//    Complex operator+(const Complex& other);
//    Complex& operator++();
//    Complex& operator++(int);
//    Complex& operator--();
//    Complex& operator--(int);
//};
//void Complex::getdata(int real, int img){
//    this->real=real;
//    this->img=img;
//}
//void Complex::showdata(){
//    cout<<"Real:"<<real<<endl;
//    cout<<"Imagenary"<<img<<endl;
//}
//Complex& Complex::operator=(const Complex& other){
//        real=other.real;
//        img=other.img;
//    return *this;
//}
//bool Complex::operator==(const Complex& other){
//    if(real==other.real && img==other.img){
//        return true;
//    }
//    return  false;
//}
//Complex Complex::operator+(const Complex& other){
//    Complex r;
//    r.real=real+other.real;
//    r.img=img+other.img;
//    return r;
//}
//Complex& Complex::operator++(){
//    ++real;
//    ++img;
//    return *this;
//}
//Complex& Complex::operator++(int){
//    ++real;
//    ++img;
//    return *this;
//}
//Complex& Complex::operator--(){
//    --real;
//    --img;
//    return *this;
//}
//Complex& Complex::operator--(int){
//    --real;
//    --img;
//    return *this;
//}
//int main(){
//    Complex c1;
//    Complex c2;
//    c1.getdata(2, 3);
//    c2.getdata(3, 4);
//    if(c1==c2){
//        cout<<"Complex number are Equal"<<endl;
//    }
//    else{
//        cout<<"Not Equal complex Number"<<endl;
//    }
//    Complex add=c1+c2;
//    cout<<"After Addtion:"<<endl;
//    add.showdata();
//    cout<<"After preincrement:"<<endl;
//    ++add;
//    add.showdata();
//    cout<<"After PostIncraement:"<<endl;
//    add++;
//    add.showdata();
//    cout<<"After predecrement:"<<endl;
//    --add;
//    add.showdata();
//    cout<<"After Postdecrement:"<<endl;
//    add--;
//    add.showdata();
//}
//Write a C++ program to overload ‘!’ operator using friend function
//#include<iostream>
//using namespace std;
//class Operator{
//private:
//    bool x;
//    int z;
//public:
//    Operator(bool x);
//    Operator(int z);
//    friend Operator operator!(const Operator& other);
//    friend void operator<<(ostream& o,const Operator& other);
//    friend istream& operator>>(istream& i,const Operator& other);
//    void display();
//};
//Operator:: Operator(bool x){
//    this->x=x;
//}
//Operator:: Operator(int z){
//    this->z=z;
//}
//Operator operator!(const Operator& other){
//    return !other.x;
//}
//void operator<<(ostream& o,const Operator& other){
//    if(other.x){
//        o<<"True"<<endl;
//    }
//    else{
//        o<<"False"<<endl;
//    }
//}
//istream& operator>>(istream& i,const Operator& other){
//    i>>other.z;
//    return i;
//}
//void Operator::display(){
//    cout<<z;
//}
//int main(){
////    Operator Operator1(true);
////    Operator Operator2(false);
//    Operator op3(3);
//    cout<<"Enter value";
//    cin>>op3;
////    Operator fal=!Operator1;
////    cout<<fal;
////    Operator tru=!Operator2;
////    cout<<tru;
//    op3.display();
//}
//#include<iostream>
//using namespace std;
//class Distance{
//private:
//    double distance;
//public:
//    Distance(double distance);
//    friend Distance add(const Distance& obj1,const Distance& obj2);
//    friend ostream& operator<<(ostream& i,const Distance& other);
//    
//};
//Distance::Distance(double distance){
//    this->distance=distance;
//}
//Distance add(const Distance& obj1,const Distance& obj2){
//    return obj1.distance+obj2.distance;
//}
//ostream& operator<<(ostream& o,const Distance& other){
//    o<<"distance after addtion is:"<<other.distance<<endl;
//    return o;
//}
//int main(){
//    Distance d1(10.2);
//    Distance d2(9.2);
//    cout<<add(d1,d2);
//}
//#include<iostream>
//using namespace std;
//class Time{
//
//public :
//
//void Set ( int h, int m, int s ) ;
//
//Time ( int initH, int initM, int initS ) ; // constructor
//Time ( ) ;// default constructor
//protected :
//
//int hrs ;
//
//int mins ;
//
//int secs ;
//
//} ;
//void Time:: Set ( int h, int m, int s ) {
//    int hrs=h ;
//
//    int mins=m ;
//
//    int secs=s ;
//}
//Time::Time( int initH, int initM, int initS ){
//    int hrs=initH ;
//
//    int mins=initM ;
//
//    int secs=initS ;
//}
//class ExtTime : public Time
//
//// Time is the base class and use public inheritance
//
//{
//
//public :
//
//void
//Set ( int h, int m, int s) ;
//
//
//ExtTime (int initH, int initM, int initS ) ;
//
//ExtTime (); // default constructor
//
//} ;
//void ExtTime :: Set (int h, int m, int s)
//{
//Time :: Set(h, m, s);
//
//}
//ExtTime::ExtTime (int initH, int initM, int initS ){
//    int hrs=initH ;
//
//    int mins=initM ;
//
//    int secs=initS ;
//}
//int main()
//
//{
//
//ExtTime thisTime ( 8, 35, 0 ) ;
//
//ExtTime thatTime ;
//
//
//thatTime.Set (16, 49, 23) ;
//
//}
//WAP to swap two numbers using template function.
//WAP to implement bubble sort using function template
//WAP to implement queue using class template.
//WAP Simple calculator using Class template
//#include<iostream>
//using namespace std;
//template <typename T> void swape(T &a,T&b){
//    T temp=a;
//    a=b;
//    b=temp;
//}
//int main(){
//    int a=10;
//    int b=5;
//    swape(a,b);
//    cout<<"a="<<a<<"\nb="<<b<<endl;
//    
//}
////WAP to implement a C++ program to find out the area of the rectangle and triangle using hierarchical inheritance .
//#include<iostream>
//using namespace std;
//class shape{
//protected:
//    double side1;
//    double side2;
//public:
//    void setdiminsion(double side1,double side2){
//        this->side1=side1;
//        this->side2=side2;
//    }
//    void setdiminsion(double side1){
//        this->side1=side1;
//    }
//    
//    virtual double area()=0;
//};
//class rectangle:public shape{
//public:
//
//    double area(){
//        double area;
//        area=side1*side2;
//        return area;
//    }
//};
//class square:public shape{
//public:
//    double area(){
//        double area=side1*side1;
//        return area;
//    }
//};
//class circle:public shape{
//public:
//    double area(){
//        double area=3.14*side1*side1;
//        return area;
//    }
//};
//class tringle:public shape{
//public:
//    double area(){
//        double area=0.5*side1*side2;
//        return area;
//    }
//};
//int main(){
//    double length,breath,side,radius,hight,base;
//    cout<<"Eneter length:";
//    cin>>length;
//    cout<<"Enter breath:";
//    cin>>breath;
//    rectangle r1;
//    r1.setdiminsion(length, breath);
//    cout<<"Area of rectangel:"<<r1.area()<<endl;
//    cout<<"Enter square side:";
//    cin>>side;
//    square s1;
//    s1.setdiminsion(side);
//    cout<<"Area of square:"<<s1.area()<<endl;
//    cout<<"Enter circle radiud:";
//    cin>>radius;
//    circle c1;
//    c1.setdiminsion(radius);
//    cout<<"Area of circle:"<<c1.area()<<endl;
//    cout<<"Enter tringle hight:";
//    cin>>hight;
//    cout<<"Enter tringle base:";
//    cin>>base;
//    tringle t1;
//    t1.setdiminsion(hight, base);
//    cout<<"Area of tringle:"<<t1.area()<<endl;
//}
//WAP to implement a C++ program to find out the student details using multilevel inheritance
#include <iostream>
using namespace std;

class Shape {
public:
    float width, height;

    void setDimensions(float w, float h) {
        width = w;
        height = h;
    }
};

class Rectangle : public Shape {
public:
    float calculateArea() {
        return width * height;
    }
};

class Triangle : public Shape {
public:
    float calculateArea() {
        return 0.5 * width * height;
    }
};

int main() {
    Rectangle rect;
    Triangle tri;
    float rectWidth, rectHeight, triWidth, triHeight;

    cout << "Enter the dimensions of the rectangle width : ";
    cin >> rectWidth;
    cout << "Enter the dimensions of the rectangle height: ";
    cin >> rectHeight;
    rect.setDimensions(rectWidth, rectHeight);
    cout << "Enter the dimensions of the triangle base : ";
    cin >> triWidth ;
    cout << "Enter the dimensions of the triangle height: ";
    cin >>  triHeight;
    tri.setDimensions(triWidth, triHeight);
    cout << "Area of the Rectangle: " << rect.calculateArea() << endl;
    cout << "Area of the Triangle: " << tri.calculateArea() << endl;
    return 0;
}




