#include <cassert>
#include <string>
using namespace std::literals;

int main(){
    //prueba con bool
    assert(true==true);
    assert(true!=false);
    assert(true or false);

    //prueba con int
    assert(5==3+2);
    assert(70==10*7);
    
    //prueba con double
    assert(1.0==1);
    assert(10.0/2==5.0);
    assert(3.0+1.0==4.0);

    //prueba con string
    assert("Hola mundo!"s=="Hola"s + " mundo"s + "!"s);
    assert("Hola mundo!"s.length()==11);
}
